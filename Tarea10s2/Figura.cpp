#include "Figura.h"

// Constructor
Figura::Figura(int _x, int _y, int anch, int alt, int _r, int _g, int _b, std::string type, bool _esFijo)
{
	this->x = _x;
	this->y = _y;
	this->ancho = anch;
	this->alto = alt;
	this->r = _r;
	this->g = _g;
	this->b = _b;
	this->tipo = type;
	this->esFijo = _esFijo;
	this->dx = 0;
	this->dy = 0;
	this->vida = 100;
	this->danho = 10;
	this->estaVivo = true;
}

// Destructor
Figura::~Figura()
{
}

// Getters
int Figura::getX() { return x; }
int Figura::getY() { return y; }
int Figura::getR() { return r; }
int Figura::getG() { return g; }
int Figura::getB() { return b; }
int Figura::getAncho() { return ancho; }
int Figura::getAlto() { return alto; }
int Figura::getVida() { return vida; }
int Figura::getDanho() { return danho; }
int Figura::getDx() { return dx; }
int Figura::getDy() { return dy; }
std::string Figura::getTipo() { return tipo; }
bool Figura::getEstaVivo() { return estaVivo; }
bool Figura::getEsFijo() { return esFijo; }

// Setters
void Figura::setX(int _x)
{
	this->x = _x;
}

void Figura::setY(int _y)
{
	this->y = _y;
}

void Figura::setDirX(int _dirx)
{
	this->dx = _dirx;
}

void Figura::setDirY(int _diry)
{
	this->dy = _diry;
}

void Figura::setEsFijo(bool _isFijo)
{
	this->esFijo = _isFijo;
}

void Figura::setVida(int _vida)
{
	if (_vida >= 0)
	{
		this->vida = _vida;
		if (this->vida == 0)
		{
			this->estaVivo = false;
		}
	}
	else
	{
		this->vida = 0;
		this->estaVivo = false;
	}
}

// Funciones adicionales
void Figura::mover(int limitX, int limitY)
{
	if (!esFijo)
	{
		x += dx;
		y += dy;
		if (x < 0) { x = 0; dx *= -1; }
		if (x > limitX - ancho) { x = limitX - ancho; dx *= -1; }
		if (y < 0) { y = 0; dy *= -1; }
		if (y > limitY - alto) { y = limitY - alto; dy *= -1; }
	}
}

Rectangle Figura::getRectangle()
{
	return Rectangle(x, y, ancho, alto);
}