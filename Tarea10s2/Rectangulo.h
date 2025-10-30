#pragma once
#include "Figura.h"
class Rectangulo :
	public Figura
{
public:
	Rectangulo(int _x, int _y, int _ancho, int _alto, int _r, int _g, int _b, bool _esFijo);
	void dibujar(Graphics^ gra) override;
};