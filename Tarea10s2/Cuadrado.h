#pragma once
#include "Figura.h"
class Cuadrado :
	public Figura
{
public:
	Cuadrado(int _x, int _y, int _lado, int _r, int _g, int _b, bool _esFijo);
	void dibujar(Graphics^ gra) override;
};