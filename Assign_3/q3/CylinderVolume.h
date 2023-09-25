#ifndef CYLINDERVOLUME_H
#define CYLINDERVOLUME_H

#include<iostream>
using namespace std;
class CylinderVolume
{
    private:
    double radius;
    double height;
    double volume;

    public:
    CylinderVolume();
    CylinderVolume(double radius, double height);
    void acceptdata();
    double getcomputedata();
    void printdata();
    void setradius(double radius);
    void setheight(double height);
    void setvolume(double volume);
    double getradius();
    double getheight();
    double getvolume();

};

#endif
