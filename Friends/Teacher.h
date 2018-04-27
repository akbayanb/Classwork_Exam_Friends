#pragma once
#include "Library.h"
#include "exam.h"
class Teacher
{
private:
	string name;
	string sname;
	int age;
	string gender; 
	string department;

public:
	Teacher() = default;
	Teacher(string, string, int, string, string);
	Teacher(const Teacher&);

	string getSname() { return sname; }

	virtual ~Teacher();
	friend class exam;
	friend void print(Teacher*, int size);
	friend istream& operator >> (istream& is, Teacher& obj);
	friend bool operator==(Teacher, string department);
	friend bool operator>(Teacher, Teacher);
};

