#include "./CylinderVolume.h"

    CylinderVolume::CylinderVolume()
    {
        this->radius;
        this->height;
    }
    CylinderVolume::CylinderVolume(double radius, double height)
    {
        this->radius=radius;
        this->height=height;

    }
    
    
    void CylinderVolume::acceptdata()
    {
        cout<<"enter the radius"<<endl;
        cin>>this->radius;
        cout<<"enter the height"<<endl;
        cin>>this->height;

    }
    double CylinderVolume::getcomputedata()
    {
        double volume= 3.14*radius*radius* height;
        return volume;

    }
    void CylinderVolume::printdata()
    {
        double volume;
        cout<<"volume of cylinder is="<< getcomputedata()<<endl;
    }
    void CylinderVolume::setradius(double radius)
    {
        this->radius= radius;
    }
    void CylinderVolume::setheight(double height)
    {
        this->height= height;
    }
    
    void CylinderVolume::setvolume(double volume)
    {
        this->volume= volume;
    }
    
    
    
    double CylinderVolume::getradius()
    {
        return this->radius;
    }
    double CylinderVolume::getheight()
    {
        return this->height;
    }
    
    double CylinderVolume::getvolume()
    {
        return this->volume;
    }
    
    