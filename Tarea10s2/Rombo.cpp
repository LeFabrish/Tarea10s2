#include "Rombo.h"

using namespace System;
using namespace System::Drawing;

Rombo::Rombo(int _x, int _y, int _base, int _altura, int _r, int _g, int _b, bool _esFijo) :
	Figura(_x, _y, _base, _altura, _r, _g, _b, "Rombo", _esFijo) {
}

void Rombo::dibujar(Graphics^ gra) {
	// Tener color
	Color color = Color::FromArgb(r, g, b);

	array<Point>^ puntos = gcnew array<Point>(4);
	puntos[0] = Point(x + ancho / 2, y);           // Vértice superior (centro)
	puntos[1] = Point(x, y + alto/2);                 // Vértice inferior izquierdo
	puntos[2] = Point(x + ancho/2, y + alto);    
	puntos[3] = Point(x+ancho, y +alto/2);// Vértice inferior derecho

	// Llenar la figura de pintura/ dibujar relleno
	SolidBrush^ broche = gcnew SolidBrush(color);
	gra->FillPolygon(broche, puntos);
	delete broche;
	// Dibujar contorno
	Pen^ lapiz = gcnew Pen(Color::Black, 3);
	gra->DrawPolygon(lapiz, puntos);
	delete lapiz;
}