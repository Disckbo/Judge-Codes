#include<iostream>
using namespace std;

int main() {
	int H,u,D,F;
	while(cin>>H) {
		if(H == 0) break;

		cin>>u>>D>>F;

		if(H == 0 && u == 0 && D == 0 && F == 0) break;
		int day = 1;
		double U = u;
		double lackU = u * F / 100.0;
		double Height = 0;
		do {
			Height += U;
			if(Height > H) break;

			Height -= D;

			if(Height < 0) break;

			if(U - lackU >= 0) U -= lackU;

			else U=0;
			day++;
		}

        while(true);
            if(Height > H) cout<<"success on day "<<day<<endl;

		    else cout<<"failure on day "<<day<<endl;
	}
	return 0;
}