#pragma once
#include "iostream"
#include "fstream"
#include "string"

using namespace std;

class Employee
{
private:
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

	int numEmp;


public:
	//setters
	void setSS(string);
	void setFirstName(string);
	void setLastName(string);
	void setMiddleInitial(string);
	void setCity(string);
	void setState(string);
	void setAge(int);
	void setGender(string);

	void setDepartmentID(int);
	void setDepartmentName(string);
	void setBuildingLetter(string);
	void setBuildingFloor(int);
	void setDepartmentPhoneNumber(string);

	

	//getters
	string getSS();
	string getFirstName();
	string getLastName();
	string getMiddleInitial();
	string getCity();
	string getState();
	int getAge();
	string getGender();

	int getDepartmentID();
	string getDepartmentName();
	string getBuildingLetter();
	int getBuildingFloor();
	string getDepartmentPhoneNumber();

	Employee();
	~Employee();
};