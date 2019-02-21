// Created by Nicholas Webster

#include "person.cpp"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void readData(Person a[], int size) {

  string lName, fName;
  float pRate, hWorked;
  int i = 0;

  ifstream myFile("input.txt");

  while(myFile >> fName >> lName >> hWorked >> pRate) {
    a[i].setFirstName(fName);
    a[i].setLastName(lName);
    a[i].setHoursWorked(hWorked);
    a[i].setPayRate(pRate);
    i++;
  }
  myFile.close();
}

void writeData(Person a[], int size) {

  ofstream myFile("output.txt");

  for (int i = 0; i<size; i++) {
    if (a[i].fullName() == " ") {
      break;
    }
    myFile << a[i].fullName() << " ";
    myFile << fixed << setprecision(2) << a[i].totalPay() << endl;
  }
  myFile.close();
}

int main() {

  Person emp[20];
  readData(emp, 20);
  writeData(emp, 20);

}
