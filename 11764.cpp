#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;

    for(int i=1; i<=test; i++) {
        int n;

        cin>>n;

        int ar[n];
        int l2h=0, h2l=0;

        for(int j=0; j<n; j++) {
            cin>>ar[j];
        }
        int start = ar[0];
        for(int j=1; j<n; j++) {
            if(start<ar[j]) {
                l2h++;
                start = ar[j];
            }
            else if(start>ar[j]) {
                h2l++;
                start = ar[j];
            }
        }
        printf("Case %d: %d %d\n",i,l2h,h2l);
    }
}