#include <iostream>
using namespace std;

int main() {
double meters; 
double kilograms;

cout <<"Converting imperial to metric"<< endl;

int height = 61;
int weight = 130;
meters = height * 0.0254;
kilograms = weight * 0.453592;
double bmi = kilograms / (meters * meters);

cout <<"The BMI for this person is :" << bmi <<"."<< endl;
}
