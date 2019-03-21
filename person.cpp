// Created by Nicholas Webster

#include "person.h"
using namespace std;

Person::Person() {
  lastName = "";
  firstName = "";
  payRate = 0.0;
  hoursWorked = 0.0;
}

Person::Person(string fName, string lName, float pRate,
  float hWorked) {
    firstName = fName;
    lastName = lName;
    payRate = pRate;
    hoursWorked = hWorked;
  }

void Person::setLastName(string lName) { lastName = lName; }

string Person::getLastName() { return lastName; }

void Person::setFirstName(string fName) { firstName = fName; }

string Person::getFirstName() { return firstName; }

void Person::setPayRate(float rate) { payRate = rate; }

float Person::getPayRate() { return payRate; }

void Person::setHoursWorked(float hrsWorked) { hoursWorked = hrsWorked; }

float Person::getHoursWorked() { return hoursWorked; }

float Person::totalPay() { return hoursWorked * payRate; }

string Person::fullName() { return firstName + " " + lastName; }
