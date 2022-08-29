#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, sum, ses, fos, fis;

        while(cin>>a>>b>>c>>d) {
        if(a == 0 && b == 0 && c == 0 && d == 0) break;

        else {

            sum = 1080 + (((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9);

            cout<<sum<<endl;
        }
    }
}