#include "MyForm.h"
#include <Windows.h>
#include "main.h"
#include "viewerForm.h"
#include "objectForm.h"
#include "Data_.h"
#include <msclr\marshal_cppstd.h>


using namespace Proj1;
using namespace std;
using namespace msclr::interop;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

System::Void Proj1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	string str = " Вероятность: ";
	Результат->Items->Clear();
	algorithm();
	str += ReadingFile_to_str("D:\\С++\\Proj1\\File\\", "P_ID.txt");
	System::String ^ str2 = marshal_as<System::String^>(str);
	Результат->Items->Add(str2);
		
	
}

System::Void Proj1::MyForm::buttonViewer_Click(System::Object^ sender, System::EventArgs^ e)
{
	viewerForm^ form = gcnew viewerForm(); 
	/*
		viwerForm == указываем какая нужна форма
		^ == управляемый класс
		form == название формы
		gcnew viewerForm() == выделяем память под форму 
	 */
	this->Hide(); // закрываем текущую форму 
	form->Show(); // открываем новую форму

}

System::Void Proj1::MyForm::buttonObject_Click(System::Object^ sender, System::EventArgs^ e)
{
	objectForm^ form = gcnew objectForm();
	this->Hide();
	form->Show();
}

System::Void Proj1::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Proj1::MyForm::таблицаНаблюдателяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	viewerForm^ form = gcnew viewerForm();
	this->Hide();
	form->Show();
}

System::Void Proj1::MyForm::таблицаОбъектаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	objectForm^ form = gcnew objectForm();
	this->Hide();
	form->Show();
}
