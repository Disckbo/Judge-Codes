#include <iostream>
#include <string>
using namespace std;

int toNum(char c) {
	return c-48;
}

int main() {
    string line;
    int b[102] = {};
    int c = 0;

    while (getline(cin, line) && line != "0") {
		c = 0;
		for (int i=line.length()-1;i>=0;i--) {
			b[c] += (line[i]-48);
			c++;
		}
	}

    for (int i = 0; i < 100; i++) {
		c = b[i];

		b[i + 2]+=(c / 100);
		c %= 100;

		b[i+1] += (c/10);
		c %= 10; 

		b[i] = c;
	}

    c = 101;

    while ((c)&&!(b[c])){
		c--;
	}
	if (c){	//some non-zero digits starting at u
		while(c){
			cout<< b[c--];
		}
	//}else{// no non-zero digits, sum is 0;
		cout << (b[0])<<endl;
	}
}
