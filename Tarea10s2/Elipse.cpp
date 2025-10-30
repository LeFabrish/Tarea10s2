#include "Elipse.h"
Elipse::Elipse(int _x, int _y, int _ancho,int _alto, int _r, int _g, int _b,bool fijo) :
	Figura(_x, _y, _ancho, _alto, _r, _g, _b, "Elipse", fijo) {
}
void Elipse::dibujar(Graphics^ gra) {
	// Tener color
	Color color = Color::FromArgb(r, g, b);
	// Llenar la figura de pintura/ dibujar relleno
	SolidBrush^ broche = gcnew SolidBrush(color);
	gra->FillEllipse(broche, x, y, ancho, alto);
	delete broche;
	/*Dibujar contorno*/
	Pen^ lapiz = gcnew Pen(Color::Black, 3);
	gra->DrawEllipse(lapiz, x, y, ancho, alto);
	delete lapiz;
}