#include "Aspirant.h"

    Aspirant::Aspirant()
	{
		SetAge(18);
		SetFirstName("Anatoliy");
		SetSurName("Pupkin");
		SetWorkTheme("AbobiInTheWord");
	}

	Aspirant::Aspirant(unsigned short age, string firstname, string surname, string theme)
	{
		SetAge(age);
		SetFirstName(firstname);
		SetSurName(surname);
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