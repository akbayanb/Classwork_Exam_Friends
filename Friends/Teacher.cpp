#include "Teacher.h"



Teacher::Teacher(string name, string sname, int age, string gender, string department) {
	this->name = name;
	this->sname = sname;
	this->age = age;
	this->gender = gender;
	this->department = department;

}

Teacher::Teacher(const Teacher& obj) {

	this->name = obj.name;
	this->sname = obj.sname;
	this->age = obj.age;
	this->gender = obj.gender;
	this->department = obj.department;
}


 void print(Teacher* ts, int size) {
	 for (int i = 0; i < size; i++)
		 cout << ts[i].name << "\t" << ts[i].sname << "\t" << ts[i].age << "\t" << ts[i].department << endl;

}

 bool operator==(Teacher obj, string department) {
	 return(obj.department == department);
  }
 bool operator>(Teacher obj1, Teacher obj2) {
	 return (obj1.age > obj2.age);
  }

  istream& operator >> (istream& is, Teacher& obj) {
	  string s;
	  getline(is, s, '\n');
	  getline(is, obj.name, '\\');
	  getline(is, obj.sname, '\\');
	  is >> obj.age >> obj.gender;
	  getline(is, obj.department, '\\');
	  return is;
 }
Teacher::~Teacher()
{
}
