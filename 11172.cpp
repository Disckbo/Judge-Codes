#include <iostream>
using namespace std;

int main() {
    long long int i;
    cin>>i;
    while(i>0) {
        long long int a, b;
        cin>> a >> b;
        if(a == b) {
            cout<<"="<<endl;
        }
        else if (a < b) {
            cout<<"<"<<endl;
        }
        else if (a > b) {
            cout<<">"<<endl;
        }
        else {
            break;
        }
        i--;
    }
    return 0;
}