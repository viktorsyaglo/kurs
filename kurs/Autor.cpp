#include "Autor.h"
#include <Windows.h> 
using namespace kurs; // Название проекта 

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Autor);
	return;
}
