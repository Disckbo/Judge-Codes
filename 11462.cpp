#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, g;

    while(cin>>n) {
        if(n == 0) break;

        else {
            int i = 0;
            double m[n];

            while(n--) {
                cin>>m[i];
                i++;
            }

            int a = sizeof(m)/sizeof(m[0]);
            sort(m, m + a);

            for (int j = 0; j < a; g++) {
                cout << m[j];
                ++j;
                if(j < a) {
                    cout<<" ";
                }
            }

            cout<<endl;

        }
    }
}