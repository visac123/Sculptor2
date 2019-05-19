#include "putvoxel.h"


PutVoxel::PutVoxel(int mx, int my, int mz, float mr, float mg, float mb, float ma){

    x=mx;
    y=my;
    z=mz;
    r=mr;
    g=mg;
    b=mb;
    a=ma;

}

void PutVoxel::draw(Sculptor &t)
{
    t.setColor(r,g,b,a);
    t.putVoxel(x,y,z);
}
