#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"

class putsphere : public FiguraGeometrica
{

    int x, y, z, raio;
    float r, g, b, a;
public:
    putsphere(int xc, int yc, int zc, int mraio, float mr, float mg, float mb, float ma);
    void draw(Sculptor& t);
};

#endif // PUTSPHERE_H
