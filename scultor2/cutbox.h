#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"

class cutbox : public FiguraGeometrica


{
    int x,y,z,x1,y1,z1;
public:
    cutbox(int mx, int my, int mz, int mx1, int my1, int mz1);
        void draw(Sculptor &t);

};
#endif // CUTBOX_H
