#include "MyForm.h"

using namespace XCalculator;

int main()
{
	//������������� ��������� EnableVisualStyles, SetCompatibleTextRenderingDefault � �������� ����� MyForm
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
