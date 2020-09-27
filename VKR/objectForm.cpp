#include "objectForm.h"
#include "MyForm.h"
#include "Data_.h"
#include "viewerForm.h"
#include "special.h"


System::Void Proj1::objectForm::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Proj1::objectForm::ãëàâíàÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Hide();
	form->Show();
}

System::Void Proj1::objectForm::òàáëèöàÍàáëþäàòåëÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	viewerForm^ form = gcnew viewerForm();
	this->Hide();
	form->Show();
}

System::Void Proj1::objectForm::Bearing_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Bearing->Text);
	MasValue2(Z, '1');
}

System::Void Proj1::objectForm::Dist_to_obj_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Dist_to_obj->Text);
	MasValue2(Z, '2');
}

System::Void Proj1::objectForm::textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(textBox7->Text);
	MasValue2(Z, '3');
}

System::Void Proj1::objectForm::Acceleration_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Acceleration->Text);
	MasValue2(Z, '4');
}

System::Void Proj1::objectForm::Ampl_course_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Ampl_course->Text);
	MasValue2(Z, '5');
}

System::Void Proj1::objectForm::Period_course_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Period_course->Text);
	MasValue2(Z, '6');
}

System::Void Proj1::objectForm::Err_speed_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Err_speed->Text);
	MasValue2(Z, '7');
}

System::Void Proj1::objectForm::Speed1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Speed1->Text);
	MasValue(Z, '1');
}

System::Void Proj1::objectForm::Speed2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Speed2->Text);
	MasValue(Z, '2');
}

System::Void Proj1::objectForm::Course3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Course3->Text);
	MasValue(Z, '3');
}

System::Void Proj1::objectForm::Course4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Course4->Text);
	MasValue(Z, '4');
}

System::Void Proj1::objectForm::Time5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Time5->Text);
	MasValue(Z, '5');
}

System::Void Proj1::objectForm::Time6_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	int Z = Convert::ToInt32(Time6->Text);
	MasValue(Z, '6');
}




int** Mas = new int* [3];
int ii = 0;
void MasValue(int& value, char ch)
{
	if (ii == 0)
	{
		newArr22(Mas, 3, 2);
		zeroMasInt(Mas, 3, 2);
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
		Mas[1][0] = value;
		break;
	case '4':
		Mas[1][1] = value;
		break;
	case '5':
		Mas[2][0] = value;
		break;
	case '6':
		Mas[2][1] = value;
		break;
	default:
		break;
	}
}

int* Mas1 = new int[7];
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
	case '7':
		Mas1[6] = value;
		break;
	default:
		break;
	}
}


System::Void Proj1::viewerForm::buttonValue_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("D:\\Ñ++\\Proj1\\File\\StartDate\\", "Object.txt");
	REDFileMas1("D:\\Ñ++\\Proj1\\File\\StartDate\\", "Object.txt", Mas1, 7);
	ClearFile("D:\\Ñ++\\Proj1\\File\\StartDate\\", "ObjectGals.txt");
	REDFileMas("D:\\Ñ++\\Proj1\\File\\StartDate\\", "ObjectGals.txt", Mas, 3, 2);
	delete Mas1, Mas;