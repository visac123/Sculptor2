#include "putsphere.h"


putsphere::putsphere(int xc, int yc, int zc, int mraio, float mr, float mg, float mb, float ma)
{
    x = xc;
    y = yc;
    z = zc;
    raio = mraio;
    r = mr;
    g = mg;
    b = mb;
    a = ma;

}

void putsphere::draw(Sculptor &t)
{
       t.setColor(r,g,b,a);
       t.putSphere(x,y,z,raio);


}
