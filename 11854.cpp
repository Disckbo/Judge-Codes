#include <iostream>
using namespace std;

int main() {
    int a, b, c, as, bs, cs;

    while(cin>>a>>b>>c) {
        if(a == 0 || b == 0 || c == 0) break;

        else {
            as = a*a;
            bs = b*b;
            cs = c*c;

            if((as + bs == cs)||(bs + cs == as)||(cs + as == bs)) cout<<"right"<<endl;
            else cout<<"wrong"<<endl;
        }
    }
}