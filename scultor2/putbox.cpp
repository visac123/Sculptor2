#include "putbox.h"

putbox::putbox(int mx, int my, int mz, int mx1, int my1, int mz1, float mr, float mg, float mb, float ma)
{
    x0=mx;
    y0=my;
    z0=mz;
    x1=mx1;
    y1=my1;
    z1=mz1;
    r =mr;
    g = mg;
    b = mb;
    a = ma;
}

void putbox::draw(Sculptor &t)
{
    t.setColor(r,g,b,a);
    t.putBox(x0,x1,y0,y1,z0,z1);

}
