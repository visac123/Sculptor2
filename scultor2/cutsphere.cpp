#include "cutsphere.h"


cutsphere::cutsphere(int mx, int my, int mz, int mraio)
{
    x=mx;
    y=my;
    z=mz;
    raio=mraio;
}

void cutsphere::draw(Sculptor &t)
{
    t.cutSphere(x,y,z,raio);

}
