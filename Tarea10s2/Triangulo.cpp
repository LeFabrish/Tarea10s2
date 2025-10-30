#include "Triangulo.h"

Triangulo::Triangulo(int _x, int _y, int _base, int _altura, int _r, int _g, int _b, bool _esFijo) :
	Figura(_x, _y, _base, _altura, _r, _g, _b, "Triangulo", _esFijo) {
}

void Triangulo::dibujar(Graphics^ gra) {
	// Tener color
	Color color = Color::FromArgb(r, g, b);
	// Definir los puntos del triángulo

}