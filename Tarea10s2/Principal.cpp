#include "FrmFigurasMovimiento.h"
using namespace System;
using namespace System::Windows::Forms;[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Tarea10s2::FrmFigurasMovimiento);
}