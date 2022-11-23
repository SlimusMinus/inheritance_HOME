#include <iostream>
using namespace std;

class Wall
{
protected:
	int wall;
	string color;
	
	
public:

	Wall() { wall = 0; }
	Wall(int wall, string color);
	
	int Get_w(){return wall;}
	string Det_c(){return color;}
	
};

class Door
{
protected:
	int door;
	string material;
	
public:

	Door() { door = 0; }
	Door(int door, string material);
	int Get_d(){ return door; }
	string Get_m() { return material; }

};

class Window
{
protected:
	int window;
	string type;
	
public:
	Window() { window = 0; }
	Window(int window, string type);
	int Get_win() { return window; }
	string Get_t() { return type; }
};

class Roof
{
protected:
	int roof;
	string materials;
	
public:
	Roof() { roof = 0; }
	Roof(int roof, string materials);
	int Get_r() { return roof; }
	string Get_t() { return materials; }
};

class Home : public Wall, public Door, public Window, public Roof
{
	int price;
	int all_price = 0;
	int sum_all_price = 0;
	int time;
	int all_time = 0;
	int sum_all_time = 0;
	Wall* ar_wall;
	Door* ar_d;
	Window* win_ar;
	Roof* r_ar;

public:
	Home() { price = 0, time = 0, all_price = 0, all_time = 0; }
	Home(Wall* w, Door* d, Window* win, Roof* r) : Wall(wall, color), Door(door, material), Window(window, type), Roof(roof, materials)
	{
		ar_wall = w;
		ar_d = d;
		win_ar = win;
		r_ar = r;
	}

	void Print()
	{
		cout << "\t\t     YOUR HAPPY HOME HAVE\n\n" << endl;
		cout << "\t\t\t**************" << endl;
		cout << "\t\t\t****WALLS*****" << endl;
		cout << "\t\t\t**************\n" << endl;
		cout << "****************************************************************" << endl;

		for (int i = 0; i < 4; i++)
		{
			this->time = rand() % 150 + 50;
			this->price = rand() % 1000 + 700;
			cout << ar_wall[i].Get_w() << " wals " << ar_wall[i].Det_c() << " colors " << "price " << price << " $ ";
			cout << time << " minutes for building" << endl;
			all_time += time;
			all_price += price;
		}
		cout << "****************************************************************" << endl;
		cout << "all_price walls = " << all_price << " $ ";
		cout << "all_time building walls = " << all_time << " minutes " << endl;
		cout << "****************************************************************\n" << endl;

		sum_all_price += all_price;
		sum_all_time += all_time;
		all_time = 0;
		all_price = 0;
		cout << "\t\t\t**************" << endl;
		cout << "\t\t\t****DOORS*****" << endl;
		cout << "\t\t\t**************\n" << endl;
		cout << "****************************************************************" << endl;
		for (int i = 0; i < 2; i++)
		{
			this->time = rand() % 100 + 40;
			this->price = rand() % 400 + 250;
			cout << ar_d[i].Get_d() << " doors " << ar_d[i].Get_m() << " materials" << "price " << price << " $ ";
			cout << time << " minutes for building" << endl;
			all_time += time; 
			all_price += price;
		}
		cout << "****************************************************************" << endl;
		cout << "all_price doors = " << all_price << " $ ";
		cout << "all_time building doors = " << all_time << " minutes " << endl;
		cout << "****************************************************************\n" << endl;

		sum_all_price += all_price;
		sum_all_time += all_time;

		all_time = 0;
		all_price = 0;
		cout << "\t\t\t****************" << endl;
		cout << "\t\t\t****WINDOWS*****" << endl;
		cout << "\t\t\t****************\n" << endl;
		cout << "****************************************************************" << endl;
		for (int i = 0; i < 3; i++)
		{
			this->time = rand() % 80 + 48;
			this->price = rand() % 200 + 100;
			cout << win_ar[i].Get_win() << " windows " << win_ar[i].Get_t() << " types" << "price " << price << " $ ";
			cout << time << " minutes for building" << endl;
			all_time += time; 
			all_price += price;
		}
		cout << "****************************************************************" << endl;
		cout << "all_price windows = " << all_price << " $ ";
		cout << "all_time building windows = " << all_time << " minutes " << endl;
		cout << "****************************************************************\n" << endl;

		sum_all_price += all_price;
		sum_all_time += all_time;
		all_time = 0;
		all_price = 0;
		cout << "\t\t\t**************" << endl;
		cout << "\t\t\t****DOORS*****" << endl;
		cout << "\t\t\t**************\n" << endl;
		cout << "****************************************************************" << endl;
		for (int i = 0; i < 2; i++)
		{
			this->time = rand() % 500 + 400;
			this->price = rand() % 7000 + 5900;
			cout << r_ar[i].Get_r() << " roofs " << r_ar[i].Get_t() << " roofs" << "price " << price << " $ ";
			cout << time << " minutes for building" << endl;
			all_time += time; 
			all_price += price;
		}
		sum_all_price += all_price;
		sum_all_time += all_time;
		cout << "****************************************************************" << endl;
		cout << "all_price roofs = " << all_price << " $ ";
		cout << "all_time building roofs = " << all_time << " minutes " << endl;
		cout << "****************************************************************" << endl;
		cout << "all_price = " << sum_all_price << " $ " << endl;
		cout << "all_time building = " << sum_all_time << " minutes " << endl;
	}

};


