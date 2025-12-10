#include<iostream>
using namespace std;
int main(){
    cout << "Enter the temperature: " << endl;
    double temp;
    cin >> temp;
    int fahrenheit = (temp * 1.8) + 32;
    cout << "The temperature in fahrenheit is: " << fahrenheit << endl;
}