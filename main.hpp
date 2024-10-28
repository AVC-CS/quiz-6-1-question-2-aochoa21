#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int writeFile(const string &filename);
int readFile(const string &filename);

int writeFile(const string &filename){
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    ofstream outFile("employee.txt");
    if(!outFile){
        cerr << "Error opening file for writing!" << endl;
        return 0;
    }
    outFile << numEmployees << endl;
    for (int i = 0; i < numEmployees; ++i){
        int id;
        string name;
        string department;
        double salary;
        cout << "Enter Employee ID, Name, Department, and Salary: ";
        cin >> id >> name >> department >> salary;
        outFile << id << " " << name << " " << department << " " << salary << endl;
    }
    outFile.close();
    cout << "Employee records written to employee.txt" << endl;
    return numEmployees;
}
int readFile(const string &filename){
    ifstream inFile("employee.txt");
    if(!inFile){
        cerr << "Error opening file for reading!" << endl;
        return 0;
    }
    int numEmployees;
    inFile >> numEmployees;
    cout << left << setw(10) << "ID" << setw(15) << "Name" << setw(15) << "Department" << setw(10) << "Salary" << endl;
    double totalSalary = 0;
    for(int i = 0; i < numEmployees; ++i){
        int id;
        string name;
        string department;
        double salary;
        inFile >> id >> name >> department >> salary;
        cout << left << setw(10) << id << setw(15) << name << setw(15) << department << setw(10) << salary << endl;
        totalSalary += salary;
    }
    double averageSalary = totalSalary / numEmployees;
    cout << fixed << setprecision(2);
    cout << "\t\tTotal" << totalSalary << " Average: " << averageSalary << endl;
    inFile.close();
    return numEmployees;
}