#include "exam.h"




exam::exam(string subject, string student_sname, string teacher_sname, double grade){
	this->subject = subject;
	this->student_sname = student_sname;
	this->teacher_sname = teacher_sname;
	this->grade = grade;

}


exam::exam(string Subject, Student sobj, Teacher tobj, double grade) {
	this->subject = Subject;
	this->student_sname = sobj.surname;
	this->teacher_sname = tobj.sname;
	this->grade = grade;

}
exam::exam(const exam& obj){
	this->subject = obj.subject;
	this->student_sname = obj.student_sname;
	this->teacher_sname = obj.teacher_sname;
	this->grade = obj.grade;
}


void exam::create_exam(string Subject, Student sobj, Teacher tobj, double grade) {
	
	this->subject = Subject;
	this->student_sname = sobj.surname;
	this->teacher_sname = tobj.sname;
	this->grade = grade;
	
}

void printExam(exam *es, int size) {
	for (int i = 0; i < size; i++)
		cout <<setw(35)<< es[i].subject <<setw(15) << 
		es[i].student_sname <<setw(15) << es[i].teacher_sname << 
		setw(6) << es[i].grade << endl;
}
exam::~exam()
{
}
