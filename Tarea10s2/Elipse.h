#pragma once
#include "Figura.h"
class Elipse :
	public Figura
{
public:
	Elipse(int _x, int _y, int _ancho, int _alto, int _r, int _g, int _b, bool fijo);
	void dibujar(Graphics^ gra)override;
};