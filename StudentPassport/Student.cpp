#include"Classes.h"

	Student::Student()
	{
		Age = 18;
		Firstname = "Anatoliy";
		Surname = "Pupkin";
	}

	Student::Student(unsigned short age, string firstname, string surname)
	{
		SetAge(age);
		SetFirstName(firstname);
		SetSurName(surname);
	}

	void Student::SetAge(unsigned short age)
	{
		if (age >= 18 || age < 100)
		{
			Age = age;
		}
		else
		{
			throw "Age Incorrect!";
		}
	}
	void Student::SetFirstName(string name)
	{
		Firstname = name;
	}
	void Student::SetSurName(string sname)
	{
		Surname = sname;
	}

	unsigned short Student::GetAge() const
	{
		return Age;
	}
	string Student::GetFirstName() const
	{
		return Firstname;
	}
	string Student::GetSurName() const
	{
		return Surname;
	}

	void Student::Print()
	{
		cout << "Name - " << GetFirstName() << " " << GetSurName() << "\n";
		cout << "Age - " << GetAge() << "\n";
	}
