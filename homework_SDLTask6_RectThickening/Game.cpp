#include "Game.h"
#include <iostream>


Game::Game() {

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


	
	SDL_SetRenderDrawColor(gameRenderer, 255, 255, 255, 255);
	SDL_RenderClear(gameRenderer);

	
	SDL_SetRenderDrawColor(gameRenderer, 0,0, 0,0);
	Shape::drawEmptyRectangle(gameRenderer, 100, 100, 200, 200, 15);

	SDL_RenderPresent(gameRenderer);

}


void Game::handleEvents() {
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;
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
