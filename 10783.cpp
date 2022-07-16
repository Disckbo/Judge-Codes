#include <iostream>
using namespace std;

int main() {
    int i;
    int j;
    std::cin>>i;

    while(i>j) {
        int a, b;
        std::cin>>a>>b;

        if ( a % 2 == 0) {
            a = a + 1;
        }
        if ( b % 2 == 0) {
            b = b - 1;
        }

        int aa, bb;

        aa = (a+1)/2;
        bb = (b+1)/2;

        int h;
        int aaa;

        aaa = aa-1;

        h = bb*bb - aaa*aaa;

        std::cout<<"Case "<<j+1<<": "<<h<<"\n";

        j++;
    }
}
