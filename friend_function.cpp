#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    // Constructor
    Box(double w) : width(w) {}

    // Declaring a friend function
    friend void printWidth(Box& b);
};

// Definition of the friend function
void printWidth(Box& b) {
    // Because printWidth is a friend of Box, it can access the private members of Box
    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box(10.5);

    // Calling the friend function
    printWidth(box);

    return 0;
}
