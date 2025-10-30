#pragma once
#include "Figura.h"

using namespace System;
using namespace System::Drawing;

class Triangulo :
	public Figura
{
public:
	Triangulo(int _x, int _y, int _base, int _altura, int _r, int _g, int _b, bool _esFijo);
	void dibujar(Graphics^ gra) override;
};