#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point {
    double x;
    double y;
};

class Figure {
public:
    virtual bool contains(Point p) const = 0;
    virtual ~Figure() {}
};

class Rectangle : public Figure {
public:
    double l, r, b, t;
    Rectangle(double l, double r, double t, double b) : l(l), r(r), b(b), t(t) {}

    bool contains(Point p) const override {
        if(p.x > l && p.x < r && p.y > b && p.y < t) return true;
        return false;
    }
};

class Circle : public Figure {
public:
    double c1, c2 , r;
    Circle(double c1, double c2, double r) : c1(c1), c2(c2), r(r) {}

    bool contains(Point p) const override {
        if(pow((p.x - c1), 2) + pow((p.y - c2), 2) < r*r) return true;
        return false;
    }
};

int main() {
    vector <Figure*> F;
    vector <Point> P;
    char c;
    int figNum = 0;
    
    while(cin>>c, c != '*') {
        if(c == 'r') {
            double l, r, b, t;
            cin>>l>>t>>r>>b;

            F.push_back(new Rectangle(l, r, t, b));
            figNum++;
        }

        else if(c == 'c') {
            double c1, c2, r;

            cin>>c1>>c2>>r;

            F.push_back(new Circle(c1, c2, r));
            figNum++;
        }
    }

    Point b;
    int pointNum = 0;
    while(cin>>b.x>>b.y) {
        if(b.x == 9999.9 && b.y == 9999.9) break;
        P.push_back(b);
        pointNum++;
    }

    for(int i = 0; i < P.size(); i++) {
        bool isIn = false;

        for(int j = 0; j < F.size(); j++) {
            if(F[j]->contains(P[i])) {
                cout<<"Point "<<i+1<<" is contained in figure "<<j+1<<"\n";
                isIn = true;
            }
        }
        
        if(!isIn) {
            cout<<"Point "<<i+1<<" is not contained in any figure\n";
        }
    }

    for(int i = 0; i < F.size(); i++) {
        delete F[i];
    }
}