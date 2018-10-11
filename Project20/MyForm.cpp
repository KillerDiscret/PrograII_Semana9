#include "MyForm.h"
using namespace Project20;
using namespace System;
using namespace System::Windows::Forms;[STAThread]
void main()
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm());
}
