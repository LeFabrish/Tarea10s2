#pragma once
#include "FigurasMovimiento.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Elipse.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "FrmCompetenciaFiguras.h"
#include "FrmJuegoService.h"
namespace Tarea10s2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmFigurasMovimiento
	/// </summary>
	public ref class FrmFigurasMovimiento : public System::Windows::Forms::Form
	{
	public:
		FrmFigurasMovimiento(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			g = pnlDibujo->CreateGraphics();
			figurasMover = new FigurasMovimiento;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmFigurasMovimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlDibujo;
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		Graphics^ g;
	private: System::Windows::Forms::Timer^ timerMover;
		   FigurasMovimiento* figurasMover;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pnlDibujo = (gcnew System::Windows::Forms::Panel());
			this->timerMover = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// pnlDibujo
			// 
			this->pnlDibujo->Location = System::Drawing::Point(1, 2);
			this->pnlDibujo->Name = L"pnlDibujo";
			this->pnlDibujo->Size = System::Drawing::Size(689, 479);
			this->pnlDibujo->TabIndex = 0;
			this->pnlDibujo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FrmFigurasMovimiento::pnlDibujo_Paint);
			// 
			// timerMover
			// 
			this->timerMover->Enabled = true;
			this->timerMover->Tick += gcnew System::EventHandler(this, &FrmFigurasMovimiento::timerMover_Tick);
			// 
			// FrmFigurasMovimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 481);
			this->Controls->Add(this->pnlDibujo);
			this->Name = L"FrmFigurasMovimiento";
			this->Text = L"FrmFigurasMovimiento";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmFigurasMovimiento::FrmFigurasMovimiento_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pnlDibujo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		figurasMover->dibujarFiguras(e->Graphics);
	}
	private:// funcion auxiliar
		void crearFigura(string tipo) {
			int limitX = pnlDibujo->Width;
			int limitY = pnlDibujo->Height;
			Random^ r = gcnew Random;
			int x = r->Next(10, limitX);
			int y = r->Next(10, limitY);
			if (tipo == "Circulo") {
				Circulo* circle = new Circulo(x, y, r->Next(10,100),
					r->Next(255), r->Next(255), r->Next(255), true);
				figurasMover->crearFigura(circle);
				//delete circle; no Incluir delete
			}
			else if (tipo == "Cuadrado") {
				Cuadrado* cuadra = new Cuadrado(x, y, r->Next(10,100),
					r->Next(255), r->Next(255), r->Next(255), true);
				figurasMover->crearFigura(cuadra);
				//delete cuadra;
			}
			else if (tipo == "Rectangulo") {
				Rectangulo* recta = new Rectangulo(x, y, r->Next(10,100), r->Next(20, 70),
					r->Next(255), r->Next(255), r->Next(255), true);
				figurasMover->crearFigura(recta);
				//delete recta;
			}
			else if (tipo == "Triangulo") {
				Triangulo* tria = new Triangulo(x, y, r->Next(10,100), r->Next(20,70),
					r->Next(255), r->Next(255), r->Next(255), true);
				figurasMover->crearFigura(tria);
				//delete tria;
			}
			else if (tipo == "Elipse") {
				Elipse* elip = new Elipse(x, y, r->Next(10, 100), r->Next(20, 70),
					r->Next(255), r->Next(255), r->Next(255), true);
				figurasMover->crearFigura(elip);
				//delete elip;
			}
		}
	private: System::Void timerMover_Tick(System::Object^ sender, System::EventArgs^ e) {
		figurasMover->moverFiguras(pnlDibujo->Width, pnlDibujo->Height);
		pnlDibujo->Invalidate();
	}
private: System::Void FrmFigurasMovimiento_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	switch (e->KeyCode)	{
	case Keys::T:
		crearFigura("Triangulo");
		break;
	case Keys::C:
		crearFigura("Circulo");
		break;
	case Keys::E:
		crearFigura("Elipse");
		break;
	case Keys::D:
		crearFigura("Cuadrado");
		break;
	case Keys::R:
		crearFigura("Rectangulo");
		break;
	case Keys::Escape:

		break;
	}
}
};
}
