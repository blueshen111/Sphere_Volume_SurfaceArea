// Jordan Steer-Furderer
// CIS 25
// This program collects user input representing a radius length and uses it to calculate the volume
// and surface area of a sphere with such radius.
//#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <cmath>
using namespace std;

// This function calculates volume of sphere
float calcVolume(float r) {
    float PI = atan(1) * 4;
    return (4 * PI * pow(r, 3)) / 3;
}

// This function calculates surface area of sphere
float calcSurfaceArea(float r) {
    float PI = atan(1) * 4;
    return 4 * PI*pow(r, 2);
}

int main()
{

cout << "Enter a radius" << endl;
int r;
cin >> r;

float volume = calcVolume(r);

float surfaceArea = calcSurfaceArea(r);

cout << "The volume of a sphere with radius " << r << " cm is " << volume << " cm^3" << endl;

cout << "The surface area of a sphere with radius " << r << " cm is " << surfaceArea << " cm^2" << endl;

return 0;

}
