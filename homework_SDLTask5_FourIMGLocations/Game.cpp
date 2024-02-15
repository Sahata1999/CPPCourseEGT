#include "Game.h"
#include <iostream>


Game::Game() {

	Game::currentQuadrant = -1;
	Game::gameWindow = NULL;
	Game::gameRenderer = NULL;
	Game::running = true;

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

				SDL_Surface* tempSurface = SDL_LoadBMP("assets/download.bmp");

				texture = SDL_CreateTextureFromSurface(gameRenderer, tempSurface);

				SDL_FreeSurface(tempSurface);

				SDL_QueryTexture(texture, NULL, NULL, &srcRect.w, &srcRect.h);


				srcRect.x = 69;
				srcRect.y = 103;
				srcRect.w = 55;
				srcRect.h = 55;

				destinationRectangle.x = 0;
				destinationRectangle.y = 0;
				destinationRectangle.w = 110;
				destinationRectangle.h = 110;

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


	if (currentQuadrant >= 0) {
		int windowWidth, windowHeight;
		SDL_GetWindowSize(gameWindow, &windowWidth, &windowHeight);

		
		SDL_Rect destRect = destinationRectangle;
		switch (currentQuadrant) {
			
		case 0:
			destRect.x = 0;
			destRect.y = 0;
			break;
			
		case 1:
			destRect.x = windowWidth / 2;
			destRect.y = 0;
			break;
			
		case 2:
			destRect.x = 0;
			destRect.y = windowHeight / 2;
			break;
		
		case 3:
			destRect.x = windowWidth / 2;
			destRect.y = windowHeight / 2;
			break;
		}


		SDL_RenderCopy(gameRenderer, texture, NULL, &destRect);
	}

	SDL_RenderPresent(gameRenderer);
}



void Game::handleEvents() {
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		if (event.type == SDL_QUIT) {
			running = false;
		}
		else if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT) {
			int windowWidth, windowHeight;
			SDL_GetWindowSize(gameWindow, &windowWidth, &windowHeight);
			int midX = windowWidth / 2;
			int midY = windowHeight / 2;

			int x = event.button.x;
			int y = event.button.y;
			int quadrant = (x > midX) + (y > midY) * 2;
			currentQuadrant = (currentQuadrant == quadrant) ? -1 : quadrant;
		}
	}
}


void Game::update() {

	
}



void Game::clean() {


	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);
	SDL_Quit();

}


bool Game::isRunning() {

	return Game::running;

}