#include "Circulo.h"

Circulo::Circulo(int _x, int _y, int _diametro, int _r, int _g, int _b, bool _esFijo) :
	Figura(_x, _y, _diametro, _diametro, _r, _g, _b, "Circulo", _esFijo) {
}

void Circulo::dibujar(Graphics^ gra) {
	// Tener color
	Color color = Color::FromArgb(r, g, b);
	// Llenar la figura de pintura/ dibujar relleno
	SolidBrush^ broche = gcnew SolidBrush(color);
	gra->FillEllipse(broche, x, y, ancho, alto);
	delete broche;
	// Dibujar contorno
	Pen^ lapiz = gcnew Pen(Color::Black, 3);
	gra->DrawEllipse(lapiz, x, y, ancho, alto);
	delete lapiz;
}