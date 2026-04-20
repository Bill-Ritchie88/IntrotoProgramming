#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double radius, volume;
    const double PI = 3.141592653589793;

    cout << "Enter the radius of the sphere in meters: ";
    cin >> radius;

    volume = (4.0/3.0)* PI * pow(radius,3);

    cout << "The volume of the sphere is " << volume << "cubic meters" << endl;

    return 0;
}