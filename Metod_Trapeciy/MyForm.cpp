#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // ��������� �� ������ �����
    Zavdanny3::MyForm^ form = gcnew Zavdanny3::MyForm();
    Application::Run(form);
}