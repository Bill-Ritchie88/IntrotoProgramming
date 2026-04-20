#include <iostream>

using namespace std;

// Function to calculate the area of the square
double calculateArea(double side) {
    return side * side;
}
// Formula: 4 * side
double calculatePerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    // Ask the user to enter the side length 
    cout << "Enter the side length of the square: ";
    cin >> side;

    // Call the functions and display the results 
    cout << "The Area of the square is: " << calculateArea(side) << endl;
    cout << "The Perimeter of the square is: " << calculatePerimeter(side) << endl;

    return 0;
}