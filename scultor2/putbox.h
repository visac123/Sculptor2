#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"

class putbox : public FiguraGeometrica
{
    int	x0, y0, z0, x1, y1, z1;
    float r, g, b, a;

public:
    putbox(int mx, int my, int mz, int mx1, int my1, int mz1, float mr, float mg, float mb, float ma);

    void draw(Sculptor &t);
};

#endif // PUTBOX_H
