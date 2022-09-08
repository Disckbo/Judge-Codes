#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n = 1;
    int ar[10001];

    while(cin>>ar[n]) {
        sort(ar, ar + n + 1);

        if(n == 1) cout<<ar[1]<<endl;

        else if(n % 2 == 0) cout<<(ar[n / 2] + ar[(n / 2) + 1]) / 2<<endl;

        else if(n % 2 != 0) cout<<ar[(n / 2) + 1]<<endl;

        n++;
    }
}