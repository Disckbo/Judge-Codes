#include <iostream>
using namespace std;

int main() {
    int T, b, c;
    string a;

    cin>>T;
    for(int i; i < T; i++) {
       cin>>a;

        if(a == "donate") {
            cin>>b;
            c = c + b;
        }

        else if(a == "report") {
            cout<<c<<endl;
        }

        else break;
    }
}