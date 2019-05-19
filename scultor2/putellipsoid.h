#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"

class putellipsoid : public FiguraGeometrica
{

    int x, y, z, rx, ry, rz;
    float r, g, b, a;


public:
    putellipsoid(int xc, int yc, int zc, int raiox, int raioy, int raioz, float mr, float mg, float mb, float ma);

    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
