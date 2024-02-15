#include "Box.h"

int main() {

	Box box1(2, 3, 4);
	Box box2(5, 6, 7);

	Box box3(0, 0, 0);

	 box3 = box1 + box2;		
}
