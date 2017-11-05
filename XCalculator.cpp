#include "MyForm.h"

using namespace XCalculator;

int main()
{
	//Устанавливаем параметры EnableVisualStyles, SetCompatibleTextRenderingDefault и запукаем форму MyForm
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
