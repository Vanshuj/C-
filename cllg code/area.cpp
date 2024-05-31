#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159     

//  ## area of circle


// int main() {
//     double radius;
//     cout << "Enter the radius of the circle: ";
//     cin >> radius;

  
//     double area =   2 * PI * radius * radius;

    
//     cout << "The area of the circle with radius " << radius << " is " << area << endl;

// return 0;
// }


// ## Circumference of circle

// int main() {
//     float radius, circumference;

  
//     cout << "Enter the radius of the circle: ";
//     cin >> radius;

    
//     circumference = 2 * PI * radius;
//     cout << "The area of the circle is: " << circumference
//      << endl;
    
//     return 0;
// }


// ## area of triangle

float areaOfTriangle(float a, float b, float c) {
    
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    float side1, side2, side3; 

   
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    
    float area = areaOfTriangle(side1, side2, side3);

    
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}



