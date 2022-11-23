#include "Home.h"

Wall::Wall(int wall, string color)
{
	this->wall = wall;
	this->color = color;
}


Door::Door(int door, string material)
{
	this->door = door;
	this->material = material;
}

Window::Window(int window, string type)
{
	this->window = window;
	this->type = type;
}

Roof::Roof(int roof, string materials)
{
	this->roof = roof;
	this->materials = materials;
}