#include<iostream>
#include<cmath>
using namespace std;
int main(){
    const double pi = 3.14;
    cout << "Enter radius: " << endl;
    double r;
    cin >> r;
    double area = pi * pow(r, 2);
    cout << "Area of the circle is: " << area << endl;
    return 0;
}