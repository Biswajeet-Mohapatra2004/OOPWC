#include <iostream>
#include <cmath>
using namespace std;

class Polar {
    float radius, angle; // angle in radians

public:
    Polar() : radius(0), angle(0) {}
    Polar(float r, float a) : radius(r), angle(a) {}

    Polar operator+(Polar p) {
        float x1 = radius * cos(angle);
        float y1 = radius * sin(angle);
        float x2 = p.radius * cos(p.angle);
        float y2 = p.radius * sin(p.angle);

        float x = x1 + x2;
        float y = y1 + y2;

        float r = sqrt(x * x + y * y);
        float a = atan2(y, x); // safer than atan(y/x)

        return Polar(r, a);
    }

    void display() {
        cout << "Radius: " << radius << ", Angle (radians): " << angle << endl;
    }
};

int main() {
    Polar p1(5, M_PI/4); // 45 degrees
    Polar p2(5, M_PI/6); // 30 degrees

    Polar p3 = p1 + p2;
    p3.display();

    return 0;
}




