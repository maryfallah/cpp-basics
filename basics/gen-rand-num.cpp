#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
int main(){
    srand(time(nullptr));

    short number = rand() % 10;
    cout << number << endl;
    return 0;
}