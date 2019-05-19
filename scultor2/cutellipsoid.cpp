#include "cutellipsoid.h"


cutellipsoid::cutellipsoid(int mxc, int myc, int mzc, int mrx, int mry, int mrz)
{
    xc = mxc;
    yc=myc;
    zc=mzc;
    rx = mrx;
    ry=mry;
    rz = mrz;

}

void cutellipsoid::draw(Sculptor &t)
{
    t.cutEllipsoid(xc,yc,zc,rx,ry,rz);

}
