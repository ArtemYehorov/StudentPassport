#include "Aspirant.h"

    Aspirant::Aspirant() : Aspirant(18 ,"Anatoliy", "Pupkin", "AbobiInTheWord") {}

	Aspirant::Aspirant(unsigned short age, string firstname, string surname, string theme) : Student(age, firstname, surname)
	{
		SetWorkTheme(theme);
	}
	string Aspirant::GetWorkTheme() const
	{
		return WorkTheme;
	}
	void Aspirant::SetWorkTheme(string work)
	{
		WorkTheme = work;
	}

	void Aspirant::Print()
	{
		Student::Print();
		cout << "Work theme - " << GetWorkTheme();
	}