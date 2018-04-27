#include "Student.h"
#include "Teacher.h"

int main() {
	
	Teacher *ts;
	Student *ss;
	exam *es;
	int sn, tn, en;
	fstream in_file("teachers.txt");
	ofstream out_file("exams.txt");
	in_file >> tn;
	int i = 0; 
	ts = new Teacher[tn];
	while (!in_file.eof()) {
		in_file >> ts[i++];}
	in_file.close();

	in_file.open("in.txt");
	in_file >> sn;
	ss = new Student[sn];
	i = 0;
	while (!in_file.eof()) {
		in_file >> ss[i++];}
	cout << "Teachers:" << endl;
	print(ts, tn);
	cout << "\nStudents:" << endl;
	printStudents(ss, sn);

	en = sn*tn;

	es = new exam[en];
	string subject;
	int k = 0;
	double grade;
	for (int i = 0; i < tn; i++) {
		cout << "Enter subject for current teacher" << endl;
		cin >> subject;
		
		for (int j = 0; j < sn; j++) {
			cout << "Enter grade for the current student:" << endl;
			cin >> grade;
			
			//exam e(subject, ss[j].getSname(), ts[i].getSname(), grade);
			es[k++].create_exam(subject, ss[j], ts[i], grade);
		}
	}

	cout << "Exam list:" << endl;

	printExam(es, en);

	int choice;
	while (true) {
		cout << "Choose a task:" << endl;
		cout << "1 - Print girls:" << endl;
		cout << "2- Print boys:" << endl;
		cout << "0 - exit" << endl;
		cin >> choice;
		if (choice == 0) break;
		switch (choice) {
		case 1:
			for (int i = 0; i < sn; i++)
				if ("woman" == ss[i])
					printStudent(ss[i]);
			break;
		case 2: break;
		}
	}


	delete[] ts;
	delete[] ss;
	delete[] es;
	system("pause");
	return 0;
}