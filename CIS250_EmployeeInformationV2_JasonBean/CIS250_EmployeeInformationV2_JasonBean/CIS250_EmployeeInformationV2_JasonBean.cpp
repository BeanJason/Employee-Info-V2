//========================================================================================
// CIS250_EmployeeInformationV2_JasonBean.cpp : Defines the entry point for the console application.
//Jason Bean
//3/14/2019
//EmployeeInformationV2
//========================================================================================

#include "stdafx.h"
#include "iostream"
#include "fstream"
#include "string"
#include "Employee.h"

using namespace std;

void display();
int readFile(Employee*&, int);
void option1(Employee*, int);
void option2(Employee*, int);
void option3(Employee*, int);
//void option4(Employee, int);
void option5(Employee*, int);
void option6(Employee*, int);


int main()
{
	int selection;
	bool quit = false;

	Employee* myEmployees;
	int numEmployees = 0;
	
	
	myEmployees = new Employee[numEmployees];

	display();
	readFile(myEmployees, 0);
	numEmployees = readFile(myEmployees, 0);
	cout << numEmployees << endl;
	

	while (!quit) {

		cout << "Enter your selection (0 for menu, -999 to exit): ";

		cin >> selection;
		system("CLS");

		if (selection == 0) {
			display();
		}

		if (selection == 1) {
			option1(myEmployees, numEmployees);
		}

		if (selection == 2) {
			option2(myEmployees, numEmployees);
		}

		if (selection == 3) {
			option3(myEmployees, numEmployees);
		}

		//if (selection == 4) {
		//	option4(Employees, numEmployees);
		//}

		if (selection == 5) {
			option5(myEmployees, numEmployees);
		}

		if (selection == 6) {
			option6(myEmployees, numEmployees);
		}

		if (selection == -999) {
			cout << "Goodbye" << endl;
			quit = true;
		}
	}
	system("pause");
    return 0;
}

int readFile(Employee *&myEmployees, int num)
{
	ifstream inputFile;
	string fileName = "Employees.txt";
	string lineOfText;
	int commaPos;
	string delim = ",";
	int empNum = 0;
	int numE = 0;

	string SS;
	string firstName;
	string lastName;
	string middleInitial;
	string city;
	string state;
	int age;
	string gender;

	int departmentID;
	string departmentName;
	string buildingLetter;
	int buildingFloor;
	string departmentPhoneNumber;

	inputFile.open(fileName);
	

	if (inputFile)
	{
		while (getline(inputFile, lineOfText))
		{
			numE++;
		}
		inputFile.close();
	}

	inputFile.open(fileName);

	if (inputFile)
	{
		myEmployees = new Employee[numE];
		while (getline(inputFile, lineOfText))
		{

			commaPos = lineOfText.find(delim);

			SS = lineOfText.substr(0, commaPos);
			
			myEmployees[empNum].setSS(SS);

			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			firstName = (lineOfText.substr(0, commaPos));
			myEmployees[empNum].setFirstName(firstName);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			lastName = (lineOfText.substr(0, commaPos));
			myEmployees[empNum].setLastName(lastName);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			middleInitial = (lineOfText.substr(0, commaPos));
			myEmployees[empNum].setMiddleInitial(middleInitial);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			city = (lineOfText.substr(0, commaPos));
			myEmployees[empNum].setCity(city);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			state = (lineOfText.substr(0, commaPos));
			myEmployees[empNum].setState(state);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			age = stoi(lineOfText.substr(0, commaPos));
			myEmployees[empNum].setAge(age);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			gender = (lineOfText.substr(0, commaPos));
			myEmployees[empNum].setGender(gender);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			departmentID = stoi(lineOfText.substr(0, commaPos));
			myEmployees[empNum].setDepartmentID(departmentID);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			departmentName = (lineOfText.substr(0, commaPos));
			myEmployees[empNum].setDepartmentName(departmentName);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			buildingLetter = (lineOfText.substr(0, commaPos));
			myEmployees[empNum].setBuildingLetter(buildingLetter);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			buildingFloor = stoi(lineOfText.substr(0, commaPos));
			myEmployees[empNum].setBuildingFloor(buildingFloor);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			departmentPhoneNumber = (lineOfText.substr(0, commaPos));
			myEmployees[empNum].setDepartmentPhoneNumber(departmentPhoneNumber);
			lineOfText = lineOfText.substr(commaPos + 1);
			commaPos = lineOfText.find(delim);

			empNum++;
		}
		inputFile.close();
	}
	else {
		cout << "F go back" << endl;
	}
	return numE;
}

void display()
{
	cout << "EMPLOYEE INFORMATION BEANS' BEANS COMPANY INC." << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "1. Display all employees" << endl;
	cout << "2. Display name of oldest employee" << endl;
	cout << "3. Display the building letter and floor for Computer Science department" << endl;
	cout << "4. Display department names who are in building A" << endl;
	cout << "5. Find an employee and list their information" << endl;
	cout << "6. Average age of employees who live in Michigan" << endl;
	cout << "0. Return to menu" << endl;
	cout << "-999. Exit the program" << endl;
}

void option1(Employee *myEmployees, int numEmployees)
{
	int empNum = 0;

	for (int i = 0; i < numEmployees; i++) {

		cout << "Employee " << empNum << endl;
		cout << "===========" << endl;
		cout << endl;

		cout << "SSN             :" << myEmployees[i].getSS() << endl;
		cout << "Firstname       :" << myEmployees[i].getFirstName() << endl;
		cout << "Lastname        :" << myEmployees[i].getLastName() << endl;
		cout << "Middle Initial  :" << myEmployees[i].getMiddleInitial() << endl;
		cout << "City            :" << myEmployees[i].getCity() << endl;
		cout << "State           :" << myEmployees[i].getState() << endl;
		cout << "Age             :" << myEmployees[i].getAge() << endl;
		cout << "Gender          :" << myEmployees[i].getGender() << endl;
		cout << "Depart ID       :" << myEmployees[i].getDepartmentID() << endl;
		cout << "Depart Name     :" << myEmployees[i].getDepartmentName() << endl;
		cout << "Building Letter :" << myEmployees[i].getBuildingLetter() << endl;
		cout << "Building Floor  :" << myEmployees[i].getBuildingFloor() << endl;
		cout << "Phone Number    :" << myEmployees[i].getDepartmentPhoneNumber() << endl;
		cout << endl;
		
		empNum++;
	}

}
void option2(Employee *myEmployees, int numEmployees)
{
	int empAge = myEmployees[0].getAge();
	int emp = 0;

	for (int i = 0; i < numEmployees; i++) {
		if (myEmployees[i].getAge() > empAge) {
			empAge = myEmployees[i].getAge();
			emp = i;
		}
	}
	cout << "Oldest Employee Name" << endl;
	cout << "-------------------" << endl;
	cout << myEmployees[emp].getLastName() << ", " << myEmployees[emp].getFirstName() << " " << myEmployees[emp].getMiddleInitial() << endl;
	cout << "Age: "<< empAge << endl;
}

void option3(Employee *myEmployees, int numEmployees)
{
	cout << "Computer Science Employees" << endl;
	cout << "--------------------------" << endl;

	string letter;
	int floor;

	for (int i = 0; i < numEmployees; i++) {
		if (myEmployees[i].getDepartmentName() == "Computer Science") {
			letter = myEmployees[i].getBuildingLetter();
			floor = myEmployees[i].getBuildingFloor();
		}

	}
	cout << "Building: " << letter << " " << "Floor: " << floor << endl;
}

void option4(Employee *myEmployees, int numEmployees)
{
	/*int numChecked = 0;
	Employee* depts;
	int numEmployees = 0;


	depts = new Employee[numEmployees];

	cout << "Building A Departments" << endl;
	cout << "----------------------" << endl;
	for (int i = 0; i < numEmployees; i++) 
	{
		if (myEmployees[i].getBuildingLetter() == "A")
		{
			if (depts[i] == nullptr)
			{

			}
		}
	}*/

}
void option5(Employee *myEmployees, int numEmployees)
{
	//5. Find an employee and list their information

	string ssn;
	int emp;
	bool found = false;
	cout << "Departmentsf on 1st floor of Building C" << endl;
	cout << "---------------------------------------" << endl;
	cout << "Enter the ssn for the employee: ";
	cin >> ssn;



	for (int i = 0; i < numEmployees; i++) {
		if (myEmployees[i].getSS() == ssn) {
			emp = i;
			found = true;
		}

		
				
		else {
			found = false;
		}
	}

	//I don't understand why this keeps giving me an error telling me that int emp isn't initilized when it doesn't care when you use the dashes??? 
	for (int i = 0; i < numEmployees; i++) {
		if (myEmployees[i].getSS().substr(0, 3) == ssn.substr(0, 3)) {
			if (myEmployees[i].getSS().substr(4, 6) == ssn.substr(3, 5)) {
				if (myEmployees[i].getSS().substr(7, 9) == ssn.substr(5, 8)) {
					if (myEmployees[i].getSS().at(9) == ssn.at(8)) {
						emp = i;
						cout << "you made it here";
						found = true;
					}
				}
			}
		}
		else {
			found = false;
		}
	}

	if (found = true) {
		cout << "SSN             :" << myEmployees[emp].getSS() << endl;
		cout << "Firstname       :" << myEmployees[emp].getFirstName() << endl;
		cout << "Lastname        :" << myEmployees[emp].getLastName() << endl;
		cout << "Middle Initial  :" << myEmployees[emp].getMiddleInitial() << endl;
		cout << "City            :" << myEmployees[emp].getCity() << endl;
		cout << "State           :" << myEmployees[emp].getState() << endl;
		cout << "Age             :" << myEmployees[emp].getAge() << endl;
		cout << "Gender          :" << myEmployees[emp].getGender() << endl;
		cout << "Depart ID       :" << myEmployees[emp].getDepartmentID() << endl;
		cout << "Depart Name     :" << myEmployees[emp].getDepartmentName() << endl;
		cout << "Building Letter :" << myEmployees[emp].getBuildingLetter() << endl;
		cout << "Building Floor  :" << myEmployees[emp].getBuildingFloor() << endl;
		cout << "Phone Number    :" << myEmployees[emp].getDepartmentPhoneNumber() << endl;
	}
	else {
		cout << "The employee with the ssn of " << ssn << " does not exist" << endl;
	}
}
void option6(Employee *myEmployees, int numEmployees)
{
	//Average age of employees who live in Michigan
	cout << "Average age for the employees who live in MI" << endl;
	cout << "--------------------------------------------" << endl;

	int sum = 0;
	int numOfEmp = 0;

	for (int i = 0; i < numEmployees; i++) {
		if (myEmployees[i].getState() == "MI") {
			sum = myEmployees[i].getAge() + sum;
			numOfEmp++;
		}
	}
	if (numOfEmp != 0) {
		cout << sum / numOfEmp << endl;
	}
	else {
		cout << "No employees live in michigan" << endl;
	}

}
