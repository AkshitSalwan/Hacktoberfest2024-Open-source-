#include <iostream>
using namespace std;

class thischeck {
private:
    int x;
    int y;

public:
    // Constructor using initialization list
    thischeck(int x, int y) : x(x), y(y) {}

    // Method to set x with chaining
    thischeck& setx(int x) {
        this->x = x;//if we skip this x will be 89
        return *this;
    }

    // Method to set y with chaining
    thischeck& sety(int y) {
        this->y = y;
        return *this;
    }

    // Method to print values of x and y
    void print() const {
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main() {
    thischeck t1(12, 34);
    int x = 67;
    t1.setx(x).sety(98);
    t1.print();
    return 0;
}
