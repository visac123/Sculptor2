#include "putellipsoid.h"



putellipsoid::putellipsoid(int xc, int yc, int zc, int raiox, int raioy, int raioz, float mr, float mg, float mb, float ma)
{
        x=xc;
        y = yc;
        z = zc;
        rx = raiox;
        ry = raioy;
        rz=raioz;
        r =mr;
        g = mg;
        b = mb;
        a = ma;
}

void putellipsoid::draw(Sculptor &t)
{
       t.setColor(r,g,b,a);
       t.putEllipsoid(x,y,z,rx,ry,rz);

}
