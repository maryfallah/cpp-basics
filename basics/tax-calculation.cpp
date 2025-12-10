#include<iostream>
using namespace std;
int main (){
    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double stateTaxRate = 0.04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax $" << stateTax << endl;

    return 0;
}