#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool iPS(long double x) {
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    else if(x == 1) return true;
    return false;
}

int main() {
    int a, b;

    while(cin>>a>>b) {
        int i = 0;

        if(a == 0 && b == 0) break;

        else {
            while(a < b+1) {
                if(iPS(a)) i++;

                a++;
            }
        }

        cout<<i<<endl;
    }
}