#include<iostream>
using namespace std;
#pragma once

class Student
{
protected:
	unsigned short Age;
	string Firstname;
	string Surname;

public:
	Student();
	Student(unsigned short age, string firstname, string surname);

	void SetAge(unsigned short age);
	void SetFirstName(string name);
	void SetSurName(string sname);

	unsigned short GetAge() const;
	string GetFirstName() const;
	string GetSurName() const;

	void Print();
};

