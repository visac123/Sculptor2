#include "cutbox.h"


cutbox::cutbox(int mx, int my, int mz, int mx1, int my1, int mz1)
{
    x=mx;
    y=my;
    z = mz;
    x1=mx1;
    y1 = my1;
    z1=mz1;
}

void cutbox::draw(Sculptor &t)
{
    t.cutBox(x,x1,y,y1,z,z1);
}
