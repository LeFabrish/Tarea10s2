#include "Triangulo.h"

Triangulo::Triangulo(int _x, int _y, int _base, int _altura, int _r, int _g, int _b, bool _esFijo) :
	Figura(_x, _y, _base, _altura, _r, _g, _b, "Triangulo", _esFijo) {
}

void Triangulo::dibujar(Graphics^ gra) {
	// Tener color
	Color color = Color::FromArgb(r, g, b);
	// Definir los puntos del tri�ngulo
	array<Point>^ puntos = gcnew array<Point>(3);
	puntos[0] = Point(x + ancho / 2, y);           // V�rtice superior (centro)
	puntos[1] = Point(x, y + alto);                 // V�rtice inferior izquierdo
	puntos[2] = Point(x + ancho, y + alto);        // V�rtice inferior derecho

	// Llenar la figura de pintura/ dibujar relleno
	SolidBrush^ broche = gcnew SolidBrush(color);
	gra->FillPolygon(broche, puntos);
	delete broche;
	// Dibujar contorno
	Pen^ lapiz = gcnew Pen(Color::Black, 3);
	gra->DrawPolygon(lapiz, puntos);
	delete lapiz;
}