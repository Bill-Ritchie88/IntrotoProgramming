#include <iostream>

using namespace std;

int main() {
    // SET X TO 0, Y TO 20
    // Using double for x to ensure precision during division
    double x = 0; 
    int y = 20;

    // REPEAT ... UNTIL Y IS LESS THAN 6
    do {
        // SUBTRACT 4 FROM Y
        y = y - 4;

        // ADD 2/y TO X
        // Note: Using 2.0 to ensure floating-point division
        if (y != 0) {
            x = x + (2.0 / y);
        }

    } while (y >= 6); // Loop continues until y is less than 6

    // DISPLAY X
    cout << "The final value of X is: " << x << endl;

    return 0;
}