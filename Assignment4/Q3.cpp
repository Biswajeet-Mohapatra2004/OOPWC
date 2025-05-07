
#include <iostream>
using namespace std;

class FLOAT {
    float value;

public:
    FLOAT(float v = 0) : value(v) {}

    FLOAT operator+(const FLOAT& f) {
        return FLOAT(value + f.value);
    }

    FLOAT operator-(const FLOAT& f) {
        return FLOAT(value - f.value);
    }

    FLOAT operator*(const FLOAT& f) {
        return FLOAT(value * f.value);
    }

    FLOAT operator/(const FLOAT& f) {
        if (f.value != 0)
            return FLOAT(value / f.value);
        else {
            cout << "Division by zero!" << endl;
            return FLOAT();
        }
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    FLOAT a(10.5), b(2.5);

    FLOAT c = a + b;
    c.display();  // 13.0

    c = a - b;
    c.display();  // 8.0

    c = a * b;
    c.display();  // 26.25

    c = a / b;
    c.display();  // 4.2

    return 0;
}
