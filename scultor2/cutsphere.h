#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"

class cutsphere : public FiguraGeometrica
{
    int x,y,z,raio;


public:
    cutsphere(int mx, int my, int mz, int mraio);
    void draw(Sculptor& t);
};

#endif // CUTSPHERE_H
