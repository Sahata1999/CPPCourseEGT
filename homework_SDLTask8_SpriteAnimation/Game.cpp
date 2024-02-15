#include "Game.h"
#include <iostream>


Game::Game() {

	Game::gameWindow = NULL;
	Game::gameRenderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;

}

Game::~Game() {
	clean();
}



bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		gameWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (gameWindow == nullptr) {
			return false;
		}

		gameRenderer = SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
		if (gameRenderer == nullptr) {
			return false;
		}

		if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
			return false;
		}

	
		bool textureLoaded = TextureManager::Instance()->loadTexture("C:/Users/Alexander/source/repos/HomeworkTask8/assets/beasts.png", "sprite", gameRenderer);
		if (!textureLoaded) {
			return false;
		}

		running = true;
		return true;
	}
	else {
		return false;
	}
}


void Game::render() {

	SDL_RenderClear(gameRenderer);

	
	TextureManager::Instance()->drawOneFrameFromTexture("sprite", 0, 0, frameWidth, frameHeight, spriteRow, currentFrame, gameRenderer, SDL_FLIP_NONE);

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

	
	Uint32 currentTime = SDL_GetTicks();
	if (currentTime - lastFrame >= frameDuration) {
		currentFrame = (currentFrame + 1) % frameCount;
		lastFrame = currentTime;
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
