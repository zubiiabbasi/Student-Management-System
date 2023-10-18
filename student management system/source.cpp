#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	cout << "----------------------------------------- WELCOME TO STUDENT MANAGEMENT SYSTEM ----------------------------------";
	int choice = -1;
	const int size = 100;
	string newstudent;
	string studentname[size] = { "zubair","hammad","ali","shehryar", "hassan" ,"subhan" , "awais" ,"abdullah" ,"fakhar" , "daniyal" };
	int rollno[size] = { 101 , 102 , 103, 104,105,106,107,108,109,110 };
	int age[size] = { 19,19,21,19,22,20,21,18,20,23 };
	float cgpa[size] = { 3.7,3.5,2.9,3.1,3.9,2.5,3.6,3.4,2.8,3.1 };
	cout << endl;
	do
	{
		cout << "1. Press 1 to add a new student" << endl;
		cout << "2. Press 2 to search a student by his/her RegNo" << endl;
		cout << "3. Press 3 to delete a student" << endl;
		cout << "4. Press 4 to display all students" << endl;
		cout << "5. Press 5 to search a student by name" << endl;
		cout << "6. Press 6 to EXIT" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
		{
			for (int i = 10; i < size; i++)
			{
				cout << "Please enter student Name: ";
				cin >> studentname[i];
				cout << "Please enter student RollNo: ";
				cin >> rollno[i];
				cout << "Please enter student Age: ";
				cin >> age[i];
				cout << "Please enter student CGPA: ";
				cin >> cgpa[i];
				cout << "Student Record in Inserted" << endl;
				cout << endl;
				break;
			}
			break;
		}
		case 2:
		{
			int regno = 0;
			cout << "Please enter the student reg.no: ";
			cin >> regno;
			bool found = 0;
			for (int i = 0; i < size; i++)
			{
				if (rollno[i] == regno)
				{
					cout << "Name: " << studentname[i] << endl;
					cout << "Roll Number: " << rollno[i] << endl;
					cout << "Age: " << age[i] << endl;
					cout << "CGPA: " << cgpa[i] << endl;
					found = 1;
					break;
				}
			}
			if (found == 0)
			{
				cout << "No student found against the id provided" << endl;
			}
			cout << endl;
			break;
		}
		case 3:
		{
			bool dellstudentfound = 0;
			int dellstudent;
			cout << "Enter roll no of student you want to delete: ";
			cin >> dellstudent;
			int temp = 0;
			for (int i = 0; i < size; i++)
			{
				if (rollno[i] == dellstudent)
				{
					cout << "Student name " << studentname[i] << " has been deleted" << endl << endl;
					for (int j = i; j < size - 1; j++)
					{
						studentname[j] = studentname[j + 1];
						rollno[j] = rollno[j + 1];
						age[j] = age[j + 1];
						cgpa[j] = cgpa[j + 1];
					}
					dellstudentfound = 1;
					break;
				}
			}
			if (dellstudentfound == 0)
			{
				cout << "No student found against the id provided" << endl;
			}
			cout << endl;
			break;

		}
		case 4:
		{
			for (int i = 0; rollno[i] != 0; i++)
			{
				cout << "Name: " << studentname[i] << endl;
				cout << "Roll Number: " << rollno[i] << endl;
				cout << "Age: " << age[i] << endl;
				cout << "CGPA: " << cgpa[i] << endl;
			}


			cout << endl << endl;
			break;
		}
		case 5:
		{
			bool namefound = 0;
			string findstudent;
			cout << "Enter the student name you want to search: ";
			cin >> findstudent;
			for (int i = 0; i < size; i++)
			{
				if (studentname[i] == findstudent)
				{
					cout << "Name: " << studentname[i] << endl;
					cout << "Roll Number: " << rollno[i] << endl;
					cout << "Age: " << age[i] << endl;
					cout << "CGPA: " << cgpa[i] << endl;
					namefound = 1;
				}
			}
			if (namefound == 0)
			{
				cout << "No student found under this name" << endl;
			}
			cout << endl << endl;
			break;
		}
		case 6:
		{
			cout << "You have exited the program" << endl;
			break;
		}
		default:
		{
			cout << "Number is out of choice" << endl;
		}

		}
	} while (choice != 6);
	return 0;
}