#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"

class cutvoxel : public FiguraGeometrica
{
    int x, y, z;
public:
    cutvoxel(int mx, int my, int mz);
    void draw(Sculptor& t);
};

#endif // CUTVOXEL_H
