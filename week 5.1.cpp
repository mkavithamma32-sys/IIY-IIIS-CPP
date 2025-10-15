#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollNo = r;
        cout << "Constructor called for " << name << endl;
    }

    // Display function
    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1("Aditya", 101);
    s1.display();

    Student s2("Maneesha", 102);
    s2.display();

    cout << "End of main function." << endl;

    return 0;
}

