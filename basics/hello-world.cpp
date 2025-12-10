#include<iostream>
// using namespace std;
int main() {
    int a = 4;
    int b = 6;
    int c = a;
    a = b;
    b = c;
    std::cout << a << std::endl;
    return 0;
}