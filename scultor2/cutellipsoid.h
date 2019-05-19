#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"

class cutellipsoid : public FiguraGeometrica
{
    int xc, yc, zc, rx, ry, rz;

public:
    cutellipsoid(int mxc, int myc, int mzc, int mrx, int mry, int mrz);
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
