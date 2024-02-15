#include "Game.h"
#include <iostream>


Game::Game() {

	Game::gameWindow = NULL;
	Game::gameRenderer = NULL;
	Game::running = true;
	Game::velocity = 1;

}


Game::~Game() {
	clean();
}



bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		gameWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (gameWindow != 0)
		{

			gameRenderer = SDL_CreateRenderer(gameWindow, -1, 0);
			if (gameRenderer != 0)
			{

				SDL_SetRenderDrawColor(gameRenderer, 255, 255, 255, 255);

				SDL_Surface* tempSurface = SDL_LoadBMP("assets/redman.bmp");

				texture = SDL_CreateTextureFromSurface(gameRenderer, tempSurface);

				SDL_FreeSurface(tempSurface);

				SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);

				
				sourceRectangle.x =0;
				sourceRectangle.y = 0;
				sourceRectangle.w = 126;
				sourceRectangle.h = 189;

				
				destinationRectangle.x = 0;
				destinationRectangle.y = 0;
				destinationRectangle.w =126;
				destinationRectangle.h = 189;

			}
			else {

				return false;

			}
		}
		else {

			return false;

		}
	}
	else {

		return false;

	}

	running = true;
	return true;

}


void Game::render() {

	SDL_RenderClear(gameRenderer);

	SDL_RenderCopy(gameRenderer, texture, &sourceRectangle, &destinationRectangle);

	SDL_RenderPresent(gameRenderer);
}


void Game::handleEvents() {

	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;

		}
	}
}


void Game::update() {

	
	int ww, wh;
	SDL_GetWindowSize(gameWindow, &ww, &wh);
	destinationRectangle.y = (wh - destinationRectangle.h) / 2;

	if (SDL_GetTicks() % 35 == 0) {
		destinationRectangle.x += velocity;

		
		if ((destinationRectangle.x + destinationRectangle.w >= ww) || (destinationRectangle.x <= 0)) {
			velocity *= -1;
			
			if (velocity < 0) velocity--;
			else velocity++;
		}
	}
}

void Game::clean() {

	
	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);
	SDL_Quit();

}


bool Game::isRunning() {

	return Game::running;

}