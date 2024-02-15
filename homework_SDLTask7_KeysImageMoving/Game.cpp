#include "Game.h"
#include <iostream>


Game::Game() {

	Game::gameWindow = NULL;
	Game::gameRenderer = NULL;
	Game::running = true;
	
	Game::velocity = 5;
	Game::mouseClicked = false;
	Game::imgCords.x = (1000 / 2) - (destRec.w / 2);
	Game::imgCords.y = (800 / 2) - (destRec.h / 2);
	
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

				SDL_SetRenderDrawColor(gameRenderer,255, 255, 255, 255);

				SDL_Surface* tempSurface = SDL_LoadBMP("assets/blueman.bmp");

				texture = SDL_CreateTextureFromSurface(gameRenderer, tempSurface);

				SDL_FreeSurface(tempSurface);

				SDL_QueryTexture(texture, NULL, NULL, &srcRec.w, &srcRec.h);


				srcRec.x = 0;
				srcRec.y = 0;
				srcRec.w = 126;
				srcRec.h = 189;

				

				destRec.w = 110;
				destRec.h = 110;

				
				int windowWidth = 1280;
				int windowHeight = 720;

				
				imgCords.x = (windowWidth / 2) - (destRec.w / 2);
				imgCords.y = (windowHeight / 2) - (destRec.h / 2);

				

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

	SDL_RenderCopy(gameRenderer, texture, &srcRec, &destRec);

	SDL_RenderPresent(gameRenderer);
}


void Game::handleEvents() {

	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;
			
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
			case SDLK_UP:
				imgCords.y -= velocity;
				break;
			case SDLK_DOWN:
				imgCords.y += velocity;
				break;
			case SDLK_LEFT:
				imgCords.x -= velocity;
				break;
			case SDLK_RIGHT:
				imgCords.x += velocity;
				break;
			}
			break;

			
		case SDL_MOUSEBUTTONDOWN:
			if (event.button.button == SDL_BUTTON_LEFT) {
				imgCords.x = event.button.x;
				imgCords.y = event.button.y;
				mouseClicked = true;
			}
			break;
		}
	}
}


void Game::update() {

	if (mouseClicked) {

		
		destRec.x = imgCords.x - destRec.w / 2;
		destRec.y = imgCords.y - destRec.h / 2;
		mouseClicked = false;
	}
	else {

		
		destRec.x = imgCords.x;
		destRec.y = imgCords.y;
	}

	
	int windowWidth, windowHeight;
	SDL_GetWindowSize(gameWindow, &windowWidth, &windowHeight);

	
	destRec.x = max(0, min(windowWidth - destRec.w, destRec.x));
	destRec.y = max(0, min(windowHeight - destRec.h, destRec.y));

	
	imgCords.x = destRec.x;
	imgCords.y = destRec.y;

}


void Game::clean() {

	
	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);
	SDL_Quit();

}


bool Game::isRunning() {

	return Game::running;

}
