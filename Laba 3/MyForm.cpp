#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Laba3; // ��� ������������ ���� �� MyForm.h
[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm); // MyForm � ��� ������ �����
}
