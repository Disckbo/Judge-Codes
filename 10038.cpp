#include <iostream>
using namespace std;

const int MAX = 3001;
bool appear[MAX];

int abs(int x) {
    if (x < 0) {
        x = -x;
    }
    return x;
}

int main() {
    int n;
    while(std::cin>>n) {
        for(int i = 1; i<n; i++) {
            appear[i] = false;
        }
        int prev;
        int curr;

        std::cin>>prev;

        for(int i = 1; i<n; i++) {
            std::cin>>curr;

            int x = abs(prev - curr);

            if(x < n) {
                appear[x] = true;
            }
            prev = curr;
        }

        bool isJolly = true;

        for(int i = 1; i<n; i++) {
            if(appear[i] == false) {
                isJolly = false;
                break;
            }
        }

        if(isJolly) {
            std::cout<<"Jolly\n";
        }
        else {
            std::cout<<"Not jolly\n";
        }
    }
}
