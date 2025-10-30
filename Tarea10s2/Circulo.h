#pragma once
#include "Figura.h"
class Circulo :
	public Figura
{
public:
	Circulo(int _x, int _y, int _diametro, int _r, int _g, int _b, bool _esFijo);
	void dibujar(Graphics^ gra) override;
};