#include <iostream>
using namespace std;

// Abstract Class (The "Interface")
class Shape {
public:
    // Pure virtual function makes this class abstract
    virtual void draw() = 0; 
};

// Concrete class implementing the abstraction
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    // We can't create a 'Shape' object, but we can use pointers
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw(); // Logic for drawing circle is hidden
    s2->draw(); // Logic for drawing rectangle is hidden

    delete s1;
    delete s2;
    return 0;
}
