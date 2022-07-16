#include <iostream>
using namespace std;

const int MAX = 3001;

int main() {

    char s[MAX];
    char t[MAX];

    bool c;

    int j;

    while(cin>>t>>s) {

        int g = sizeof s;
        int h = sizeof t;

        for (int i = 0; i < g; i++) {
            if(t[h] == s[i]) {
                c = true;
                h--;
            }

            else {
                c = false;
            }
        }

        if(c == true) {
            cout<<"Yes";
        }

        else {
            cout<<"No";
        }

        return 0;
    }
}