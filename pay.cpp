// Created by Nicholas Webster

#include "person.cpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

void readData(vector<Person> &empVec) {

  string fName, lName;
  float pRate, hWorked;

  ifstream myFile("input.txt");

  while(myFile >> fName >> lName >> hWorked >> pRate) {
    empVec.emplace_back(fName, lName, hWorked, pRate);
  }

  myFile.close();
}

void writeData(vector<Person> empVec) {

  ofstream myFile("output.txt");

  for (int i = 0; i<empVec.size(); i++) {
    myFile << empVec.at(i).fullName() << " " <<
              fixed << setprecision(2) <<
              empVec.at(i).totalPay() << " " << endl;
  }
  myFile.close();
}

int main() {

  vector<Person> employees;
  readData(employees);
  writeData(employees);

}
