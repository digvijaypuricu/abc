// This is new insertion in the code
#include <iostream>

using namespace std;

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    double length, width;

    // Input length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate the area
    double area = calculateArea(length, width);

    // Print the result
    cout << "Area of the rectangle: " << area << endl;

    return 1;
}
