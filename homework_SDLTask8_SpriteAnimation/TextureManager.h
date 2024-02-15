#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include <map>

using namespace std;

class TextureManager {

public:

	
	bool loadTexture(const char* fileName, string id, SDL_Renderer* ren);

	
	void drawTexture(string id,
		int x, int y,
		int width, int height,
		SDL_Renderer* ren,
		SDL_RendererFlip flip = SDL_FLIP_NONE);

	
	void drawOneFrameFromTexture(string id,
		int x, int y,
		int width, int height,
		int currentRow, int currentFrame,
		SDL_Renderer* ren,
		SDL_RendererFlip flip = SDL_FLIP_NONE);

	
	static TextureManager* Instance();

private:

	
	map<string, SDL_Texture*> textureMap;
	
	TextureManager() {}
	
	static TextureManager* instance;

};