#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int x;
string y;
class Student
{
protected:
    int roll;
    float cgpa;
    string username;

public:
    void CGPA(float marks)
    {
        float CGPA = 10;
        float cgpa = (marks / 220) * CGPA;
        this->cgpa = cgpa;
    }
    Student() {}
};

class Module : public Student
{
public:
    void calender();
    void faculty();
    void scorecard();
    void ise();
};
void homepage();
void login()
{
    system("color E0");
    void scorecard();
    string username;
    int roll;
    system("CLS");

    cout << "-----------------------------------" << endl;
    cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 E D U P L U S \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
    cout << "-----------------------------------" << endl;
    cout << "    Username : ";

    cin >> username;
    y = username;
    cout << "    RollNumber : ";
    cin >> roll;
    x = roll;
    system("CLS");
    Sleep(1000);
    homepage();
}
void Module ::calender()
{
    Sleep(1000);
    system("color 90");
    ifstream infile("calender.txt");
    string line;
    while (getline(infile, line))
    {
        cout << line << endl;
    }
    infile.close();
    cout << "\n\n\n";
    Sleep(3000);
    homepage();
}
void Module ::faculty()
{
    Sleep(1000);
    system("color D0");
    ifstream infile("faculty.txt");
    string line;
    while (getline(infile, line))
    {
        cout << line << endl;
    }
    infile.close();
    cout << "\n\n\n";
    Sleep(3000);
    homepage();
}
void Module ::ise()
{
    Sleep(1000);
    system("color 90");
    int t = time(0);
    srand(t);
    cout << "-------------------------------------------------" << endl;
    cout << "\tSUBJECT \t\t MARKS" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << " Object Oriented Prog. \t \t " << 1 + rand() % 10 << endl
         << endl;
    cout << " Discrete Mathematics \t \t " << 1 + rand() % 10 << endl
         << endl;
    cout << " Basic Electronics Engg\t \t " << 1 + rand() % 10 << endl
         << endl;
    cout << " Physics for Engineers \t \t " << 1 + rand() % 10 << endl
         << endl;
    cout << " Statistical Methods \t \t " << 1 + rand() % 10 << endl;
    cout << "\n\n\n";
    Sleep(3000);
    homepage();
}
void Module ::scorecard()
{
    Sleep(1000);
    system("color D0");
    ifstream infile("scorecard.txt");

    int counter = 24;
    string line;
    while (!infile.eof())
    {
        counter++;
        getline(infile, line);
        if (counter == x)
            break;
    }
    cout << "\n\t" << y << "'s total marks --> " << line << "/220" << endl;
    float marks = stof(line);
    CGPA(marks);
    cout << "\t-----------------------------" << endl;
    cout << "\t" << y << "'s CGPA --> " << cgpa << endl;
    infile.close();

    cout << "\n\n\n";
    Sleep(3000);
    homepage();
}
void homepage()
{

    int module;
    Module o1;
    cout << "-------------------------------------" << endl;
    cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 H O M E P A G E \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
    cout << "-------------------------------------" << endl;
    cout << "\t1. Academic Calender" << endl;
    cout << "\t2. Subjects Faculty" << endl;
    cout << "\t3. ISE Marks " << endl;
    cout << "\t4. Student Scorecard" << endl;
    cout << "\t5. Back to Login" << endl;

    cin >> module;
    switch (module)
    {
    case 1:
        system("CLS");
        o1.calender();
        break;

    case 2:
        system("CLS");
        o1.faculty();
        break;

    case 3:
        system("CLS");
        o1.ise();
        break;

    case 4:
        system("CLS");
        o1.scorecard();
        break;

    case 5:
        system("CLS");
        Sleep(1000);
        login();
        break;
    }
}

int main()
{

    Module o1;
    login();
    return 0;
}
