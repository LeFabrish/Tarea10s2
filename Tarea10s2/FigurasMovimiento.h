#pragma once
#include <vector>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Elipse.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;
class FigurasMovimiento
{
private:
	vector<Figura*> figuras;
public:
	FigurasMovimiento();
	~FigurasMovimiento();
	// funcionesç
	void crearFigura(Figura* f);
	void dibujarFiguras(Graphics^ g);
	void moverFiguras(int lmtX, int lmtY);
	void limpiarFiguras();
	int getCantidadFiguras();
};

