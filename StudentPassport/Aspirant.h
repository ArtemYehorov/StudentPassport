#include"Student.h"
#pragma once

class Aspirant : public Student
{
private:
	string WorkTheme;
public:
	Aspirant();
	Aspirant(unsigned short age, string firstname, string surname, string theme);

	string GetWorkTheme() const;
	void SetWorkTheme(string work);

	void Print();
};
