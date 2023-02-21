#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(const Rect* R1, const Rect* R2) {
    double dx = min(R1->x + R1->w, R2->x + R2->w) - max(R1->x, R2->x);
    double dy = min(R1->y, R2->y) - max(R1->y - R1->h, R2->y - R2->h);
    return (dx > 0 && dy > 0) ? dx * dy : 0;
}