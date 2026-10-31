#include <iostream>
using namespace std;
class student
{
private:
    int rollNo;
    string name;

public:
    // Constructor
    student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "student object created" << endl;
    }
    // member function
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
    // Destructor
    ~student()
    {
        cout << "student object destroyed" << endl;
    }
};
int main()
{
    student s1(101, "Arun");
    s1.display();
    return 0;
}