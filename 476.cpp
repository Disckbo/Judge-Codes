#include <iostream>
#include <utility>
#include <vector>
using namespace std;

struct Point {
    double x;
    double y;
};

class Figure {
public: 
    double l;
    double r;
    double t;
    double b;

    bool contains(Point p) const{
        if(p.x <= l) return false;
        if(p.x >= r) return false;
        if(p.y <= b) return false;
        if(p.y >= t) return false;
        return true;
    }
};

int wektorowy(Point x, Point y, Point z) {
    
}

int main() {
    vector <Figure> F;
    vector <Point> P;
    char c;
    
    while(cin>>c, c != '*') {
        Figure a;
        cin>>a.l>>a.t>>a.r>>a.b;

        F.push_back(a);
    }

    Point b;
    while(cin>>b.x>>b.y) {
        if(b.x == 9999.9 && b.y == 9999.9) break;
        P.push_back(b);
    }

    for(int i = 0; i < P.size(); i++) {
        bool isIn = false;

        for(int j = 0; j < F.size(); j++) {
            if(F[j].contains(P[i])) {
                cout<<"Point "<<i+1<<" is contained in figure "<<j+1<<"\n";
                isIn = true;
            }
        }
        
        if(!isIn) {
            cout<<"Point "<<i+1<<" is not contained in any figure\n";
        }
    }
}