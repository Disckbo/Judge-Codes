#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int n;
    double p;

    long long int a;

    while(cin>>n>>p) {

        a = static_cast<int>(pow(p , 1.0 / n) * 2.0) ;
		a = (a + 1) / 2 ;

        cout<<a<<endl;
    }
}