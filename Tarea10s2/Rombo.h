#pragma once
#include "Figura.h"
class Rombo :
    public Figura
{
public:
    Rombo(int _x, int _y, int _base, int _altura, int _r, int _g, int _b, bool _esFijo);
    void dibujar(Graphics^ gra) override;
};

