#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a)                  // Parameterized Constructor
	 {                            
        name = n;
        age = a;
        cout << "Parameterized Constructor called" << endl;
    }
    Student(const Student &s)                    // Copy Constructor
	 {                     
        name = s.name;
        age = s.age;
        cout << "Copy Constructor called" << endl;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student s1("Radha", 10);              // Creating object using parameterized constructor
    s1.display();                      // Creating object using copy constructor
    Student s2(s1);                   // Copy s1 into s2
    s2.display();
    return 0;
}

