#include "Cuadrado.h"

Cuadrado::Cuadrado(int _x, int _y, int _lado, int _r, int _g, int _b, bool _esFijo) :
	Figura(_x, _y, _lado, _lado, _r, _g, _b, "Cuadrado", _esFijo) {
}

void Cuadrado::dibujar(Graphics^ gra) {
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