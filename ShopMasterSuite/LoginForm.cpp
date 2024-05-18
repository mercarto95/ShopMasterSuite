#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ShopMasterSuite::LoginForm loginForm;

	Application::Run(% loginForm);
}