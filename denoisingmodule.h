#ifndef DENOISINGMODULE_H
#define DENOISINGMODULE_H
#include "global.h"
using namespace pcl;

class DenoisingModule
{
private:
    PointCloud<PointXYZRGBA>::Ptr cloud_;

public:
    DenoisingModule();
    void SetInputCloud(PointCloud<PointXYZRGBA>::Ptr cloud);
    void pass_through_filter(PointCloud<PointXYZRGBA>::Ptr cloud);
};

#endif // DENOISINGMODULE_H
