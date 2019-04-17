#include "stdafx.h"
#include "Employee.h"


Employee::Employee()
{
}


Employee::~Employee()
{
}

//Setters
void Employee::setSS(string SSnum)
{
	SS = SSnum;
}

void Employee::setFirstName(string fName)
{
	firstName = fName;
}

void Employee::setLastName(string lName)
{
	lastName = lName;
}

void Employee::setMiddleInitial(string middleInit)
{
	middleInitial = middleInit;
}

void Employee::setCity(string c)
{
	city = c;
}

void Employee::setState(string s)
{
	state = s;
}

void Employee::setAge(int a)
{
	age = a;
}

void Employee::setGender(string g)
{
	gender = g;
}

void Employee::setDepartmentID(int deptID) 
{
	departmentID = deptID;
}

void Employee::setDepartmentName(string deptName)
{
	departmentName = deptName;
}

void Employee::setBuildingLetter(string buldingL)
{
	buildingLetter = buldingL;
}

void Employee::setBuildingFloor(int buildingF)
{
	buildingFloor = buildingF;
}

void Employee::setDepartmentPhoneNumber(string deptPhoneNum)
{
	departmentPhoneNumber = deptPhoneNum;
}

//geters

string Employee::getSS()
{
	return SS;
}

string Employee::getFirstName()
{
	return firstName;
}

string Employee::getLastName()
{
	return lastName;
}

string Employee::getMiddleInitial()
{
	return middleInitial;
}

string Employee::getCity()
{
	return city;
}

string Employee::getState()
{
	return state;
}

int Employee::getAge()
{
	return age;
}

string Employee::getGender()
{
	return gender;
}

int Employee::getDepartmentID()
{
	return departmentID;
}

string Employee::getDepartmentName()
{
	return departmentName;
}

string Employee::getBuildingLetter()
{
	return buildingLetter;
}

int Employee::getBuildingFloor()
{
	return buildingFloor;
}

string Employee::getDepartmentPhoneNumber()
{
	return departmentPhoneNumber;
}