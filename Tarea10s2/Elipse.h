#pragma once
#include "Figura.h"
class Elipse :
	public Figura
{
public:
	Elipse(int _x, int _y, int _diametro, int _r, int _g, int _b, bool fijo);
	void dibujar(Graphics^ gra)override;
};