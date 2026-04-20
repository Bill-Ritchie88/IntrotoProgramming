#include <iostream>
#include <cctype> // Required for isupper() and islower()

using namespace std;

// Function to determine if a character is uppercase or lowercase
// It takes a character as an argument and prints the result
void checkCharacterCase(char input) {
    if (isupper(input)) {
        cout << "The character '" << input << "' is Uppercase." << endl;
    } 
    else if (islower(input)) {
        cout << "The character '" << input << "' is Lowercase." << endl;
    } 
    else {
        cout << "The character '" << input << "' is not an alphabetic letter." << endl;
    }
}

int main() {
    char userChar;

    // Ask the user to input a character
    cout << "Enter a character: ";
    cin >> userChar;

    // Call the function to check the case
    checkCharacterCase(userChar);

    return 0;
}