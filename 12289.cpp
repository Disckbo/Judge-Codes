#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string a;
    int b, j;

    cin>>j;

    for(int i; i < j; i++) {
        cin>>a;

        int d = a.size();

        const char *str = a.c_str();

        if(d == 5) cout<<"3"<<endl;

        else if((a[0]=='o' && a[1]=='n') || (a[0]=='o' && a[1]=='e') || (a[1]=='n' && a[2]=='e') || (a[0]=='o' && a[2]=='e') || (a[0]=='o' && a[2]=='n')) cout<<"1"<<endl;

        else cout<<"2"<<endl;
    }
}