#include "calculatorform.h"



using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute] 
void Main(/*array<String^>^ args*/) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	calculator::calculatorform form;
	Application::Run(% form); 
}