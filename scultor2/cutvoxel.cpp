#include "cutvoxel.h"


cutvoxel::cutvoxel(int mx, int my, int mz)
{
    x=mx;
    y=my;
    z=mz;
}

void cutvoxel::draw(Sculptor &t)
{
    t.cutVoxel(x,y,z);

}
