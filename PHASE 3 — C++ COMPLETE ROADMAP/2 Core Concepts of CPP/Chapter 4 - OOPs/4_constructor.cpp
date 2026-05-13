#include <iostream>
using namespace std;

class Student {

public:

    string name;
    int marks;

    Student(string n, int m) {

        name = n;
        marks = m;
    }
};

int main() {

    Student s1("Paritosh", 95);

    cout << s1.name << endl;
    cout << s1.marks;

    return 0;
}