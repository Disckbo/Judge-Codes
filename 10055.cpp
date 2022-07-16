#include <iostream>
using namespace std;

int main() {
    long long int a, b;
    while (std::cin >> a >> b) {
        if (a > b) {
            std::cout <<a-b<<endl;
        }
        else {
            cout<<b-a<<endl;
        }
    }
    return 0;
}