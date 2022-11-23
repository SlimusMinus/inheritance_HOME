#include "Home.h"

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	Wall w1(5, "Gray");
	Wall w2(4, "Blue");
	Wall w3(2, "Red" );
	Wall w4(1, "Pink");
	Wall* ar_wl = new Wall[4]{w1 , w2, w3, w4};

	Door d1(2, "wood");
	Door d2(3, "metal");
	Door* ar_d = new Door[2]{d1, d2};

	Roof r1(1, "shingles");
	Roof r2(1, "cooper");
	Roof* r_ar = new Roof [2] {r1, r2};

	Window win1(4, "wood");
	Window win2(2, "plastic");
	Window win3(1, "aluminum");
	Window* win_ar = new Window [3] {win1, win2, win3};

	
	Home your_home(*&ar_wl, *&ar_d, *&win_ar, *&r_ar);

	your_home.Print();


}