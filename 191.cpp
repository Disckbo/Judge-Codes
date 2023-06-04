#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;
    return (val > 0) ? 1 : 2;
}

bool onSegment(Point p, Point q, Point r) {
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y)) return true;
    return false;
}

bool doIntersect(Point p1, Point q1, Point p2, Point q2) {
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);
    if (o1 != o2 && o3 != o4) return true;
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
    return false;
}

bool isInside(Point p, Point q, Point r, Point s, Point x) {
    if (x.x <= max(p.x, r.x) && x.x >= min(p.x, r.x) && x.y <= max(p.y, r.y) && x.y >= min(p.y, r.y))
        return true;
    return false;
}

bool intersectsRectangle(Point p, Point q, Point r, Point s, Point a, Point b) {
    if (isInside(p, q, r, s, a) || isInside(p, q, r, s, b)) return true;
    if (doIntersect(p, q, a, b) || doIntersect(q, r, a, b) || doIntersect(r, s, a, b) || doIntersect(s, p, a, b)) return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Point p, q, r, s, a, b;
        cin >> a.x >> a.y >> b.x >> b.y >> p.x >> p.y >> q.x >> q.y >> r.x >> r.y >> s.x >> s.y;
        if (intersectsRectangle(p, q, r, s, a, b)) cout << "T\n";
        else cout << "F\n";
    }
    return 0;
}