#include <iostream>

using namespace std;

int main() {

    long long n, s, d;

    cin>>n;

    while(n--) {
        cin>>s>>d;

        if(s < d || (s - d) & 1) cout<<"impossible"<<endl;

        else {
            s = (s - d) >> 1;

            cout<<d + s<<" "<<s<<endl;
        }
    }
}
