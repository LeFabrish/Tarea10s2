#include "Rectangulo.h"

Rectangulo::Rectangulo(int _x, int _y, int _ancho, int _alto, int _r, int _g, int _b, bool _esFijo) :
	Figura(_x, _y, _ancho, _alto, _r, _g, _b, "Rectangulo", _esFijo) {
}

void Rectangulo::dibujar(Graphics^ gra) {
	// Tener color
	Color color = Color::FromArgb(r, g, b);
	// Llenar la figura de pintura/ dibujar relleno
	SolidBrush^ broche = gcnew SolidBrush(color);
	gra->FillRectangle(broche, x, y, ancho, alto);
	delete broche;
	// Dibujar contorno
	Pen^ lapiz = gcnew Pen(Color::Black, 3);
	gra->DrawRectangle(lapiz, x, y, ancho, alto);
	delete lapiz;
}