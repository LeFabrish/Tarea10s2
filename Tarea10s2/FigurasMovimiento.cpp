#include "FigurasMovimiento.h"


FigurasMovimiento::FigurasMovimiento() {
}
FigurasMovimiento::~FigurasMovimiento() {
	limpiarFiguras();
}

void FigurasMovimiento::crearFigura(Figura* f){
	figuras.push_back(f);
}
void FigurasMovimiento::dibujarFiguras(Graphics^ g){
	for (auto figura : figuras) {
		figura->dibujar(g);
	}
}
void FigurasMovimiento::moverFiguras(int lmtX, int lmtY){
	for (auto figura : figuras) {
		figura->mover(lmtX, lmtY);
	}
}
void FigurasMovimiento::limpiarFiguras(){
	for (auto figura : figuras) {
		delete figura;
	}
	figuras.clear();
}
int FigurasMovimiento::getCantidadFiguras(){
	return figuras.size();
}