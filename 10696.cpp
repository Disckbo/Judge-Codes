#include <iostream>
using namespace std;

int f91(int n) {
	if (n >= 101)
		return n - 10;
	if (n <= 100)
		return f91(f91(n + 11));
}

int main() {

    int N;

    while(cin>>N) {

        int a = 0;

        if(N == 0) {
            break;
        }

        else if(N <= 100) {
            a = f91(f91(N + 11));
        }

        else if(N >= 101) {
            a = f91(N);
        }

        cout<<"f91("<<N<<") = "<<a<<endl;
        
    }
}