#pragma once
#include <string>

using namespace System;
using namespace System::Drawing;
class Figura
{
protected:
	// Atributos necesarios para Figura
	int x, y,
		r, g, b,
		ancho, alto,
		vida, danho,
		dx, dy;
	std::string tipo;
	bool estaVivo, esFijo;
public:
	Figura(int _x, int _y, int anch, int alt, int _r, int _g, int _b, std::string type, bool esFijo);
	~Figura();
	// getters
	int getX();
	int getY();
	int getR();
	int getG();
	int getB();
	int getAncho();
	int getAlto();
	int getVida();
	int getDanho();
	int getDx();
	int getDy();
	std::string getTipo();
	bool getEstaVivo();
	bool getEsFijo();   
	// setters
	void setX(int _x);
	void setY(int _y);
	void setDirX(int _dirx);
	void setDirY(int _diry);
	void setEsFijo(bool _isFijo);
	void setVida(int _vida);     // Condicion de que debe ser mayor a 0 : vida >= 0
	// funcones adinicionales
	void mover(int limitX, int limitY);
	virtual void dibujar(Graphics^ gra) = 0;
	Rectangle getRectangle();
};