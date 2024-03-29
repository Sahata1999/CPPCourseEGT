#include "Shape.h"

void Shape::drawPentagon(SDL_Renderer* gameRenderer, int x, int y, int side) {

	const int sides = 5;
	const double R = side / (2 * sin(M_PI / 5));
	const double angles = 2 * M_PI / sides;

	for (int i = 0; i < sides; i++) {
		double angle1 = angles * i;
		double angle2 = angles * (i + 1);
		SDL_RenderDrawLine(gameRenderer, x + R * cos(angle1), y + R * sin(angle1), x + R * cos(angle2), y + R * sin(angle2));
	}
}
