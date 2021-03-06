//begin person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
private:
    string lastName;
    string firstName;
    float  payRate;
    float  hoursWorked;
public:
    Person();
    Person(string fName, string lName, float pRate, float hWorked);
    void setLastName(string lName);
    string getLastName();
    void setFirstName(string fName);
    string getFirstName();
    void setPayRate(float pRate);
    float getPayRate();
    void setHoursWorked(float hrsWorked);
    float getHoursWorked();
    float totalPay();
    string fullName();


};
#endif
//end person.h
