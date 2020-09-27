#include <iostream>
#include "viewerForm.h"
#include "MyForm.h"
#include "objectForm.h"
#include "special.h"
#include "Data_.h"
#include "special.h"


using namespace std;
void MasValue(int& value, char ch);
void MasValue2(int& value, char ch);

System::Void Proj1::viewerForm::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Proj1::viewerForm::ãëàâíàÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Hide();
	form->Show();
}

System::Void Proj1::viewerForm::òàáëèöàÎáúåêòàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	objectForm^ form = gcnew objectForm();
	this->Hide();
	form->Show();
}

System::Void Proj1::viewerForm::textSpeedN1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textSpeedN1->Text);
	MasValue(Z, '1');
}

System::Void Proj1::viewerForm::textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(SpeedTURN->Text);
	MasValue2(Z, '1');
}

System::Void Proj1::viewerForm::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textSpeedN2->Text);
	MasValue(Z, '2');
}

System::Void Proj1::viewerForm::textSpeedN3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textSpeedN3->Text);
	MasValue(Z, '3');
}

System::Void Proj1::viewerForm::textCourse1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textCourse1->Text);
	MasValue(Z, '4');
}

System::Void Proj1::viewerForm::textCourse2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textCourse2->Text);
	MasValue(Z, '5');
}

System::Void Proj1::viewerForm::textCourse3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textCourse3->Text);
	MasValue(Z, '6');
}

System::Void Proj1::viewerForm::textTime1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textTime1->Text);
	MasValue(Z, '7');
}

System::Void Proj1::viewerForm::textTime2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textTime2->Text);
	MasValue(Z, '8');
}

System::Void Proj1::viewerForm::textTime3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z  = Convert::ToInt32(textTime3->Text);
	MasValue(Z, '9');
}

System::Void Proj1::viewerForm::textAcc_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textAcc->Text);
	MasValue2(Z, '2');
}

System::Void Proj1::viewerForm::textAmpl_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textAmpl->Text);
	MasValue2(Z, '3');
}

System::Void Proj1::viewerForm::textPeriod_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textPeriod->Text);
	MasValue2(Z, '4');
}

System::Void Proj1::viewerForm::textErrCourse_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textErrCourse->Text);
	MasValue2(Z, '5');
}

System::Void Proj1::viewerForm::textErrSpeed_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textErrSpeed->Text);
	MasValue2(Z, '6');
}



int** Mas = new int* [3];
int ii = 0;
void MasValue(int &value, char ch) 
{
	if (ii == 0)
	{
		newArr22(Mas, 3, 3);
		zeroMasInt(Mas, 3, 3);
		ii++;
	}
	
	switch (ch)
	{
	case '1':
		Mas[0][0] = value;
		break;
	case '2':
		Mas[0][1] = value;
		break;
	case '3':
		Mas[0][2] = value;
		break;
	case '4':
		Mas[1][0] = value;
		break;
	case '5':
		Mas[1][1] = value;
		break;
	case '6':
		Mas[1][2] = value;
		break;
	case '7':
		Mas[2][0] = value;
		break;
	case '8':
		Mas[2][1] = value;
		break;
	case '9':
		Mas[2][2] = value;
		break;
	default:
		break;
	}
}

int* Mas1 = new int [6];
int ii1 = 0;
void MasValue2(int& value, char ch)
{
	if (ii1 == 0)
	{
		zeroMasInt1(Mas1, 6);
		ii1++;
	}
	switch (ch)
	{
	case '1':
		Mas1[0] = value;
		break;
	case '2':
		Mas1[1] = value;
		break;
	case '3':
		Mas1[2] = value;
		break;
	case '4':
		Mas1[3] = value;
		break;
	case '5':
		Mas1[4] = value;
		break;
	case '6':
		Mas1[5] = value;
		break;
	default:
		break;
	}
}


System::Void Proj1::viewerForm::buttonValue_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("D:\\Ñ++\\Proj1\\File\\StartDate\\", "Viewer.txt");
	REDFileMas1("D:\\Ñ++\\Proj1\\File\\StartDate\\", "Viewer.txt", Mas1, 6);
	ClearFile("D:\\Ñ++\\Proj1\\File\\StartDate\\", "ViewerGals.txt");
	REDFileMas("D:\\Ñ++\\Proj1\\File\\StartDate\\", "ViewerGals.txt", Mas, 3, 3);
	delete Mas1, Mas;
}