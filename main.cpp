#include "sculptor.h"
#include <fstream>
#include "voxel.h"
#include "sculptor.cpp"

int main(){
    Sculptor s(100,100,100);

    s.setColor(0,1,0,1);
    s.putBox(0,1,0,1,0,1);

    s.setColor(1,0,0,1);
    s.putBox(1,2,0,1,0,1);

    s.setColor(0,1,1,1);
    s.putBox(2,3,0,1,0,1);

    s.setColor(0.5,0.3,1,1);
    s.putBox(0,1,0,1,1,2);

    s.setColor(1,1,0,1);
    s.putBox(1,2,0,1,1,2);

    s.setColor(1,0,1,1);
    s.putBox(2,3,0,1,1,2);

    s.setColor(0,0.5,1,1);
    s.putBox(0,1,0,1,2,3);

    s.setColor(0,1,0,1);
    s.putBox(1,2,0,1,2,3);

    s.setColor(1,0.5,0,1);
    s.putBox(2,3,0,1,2,3);

    s.setColor(0,0,1,1);
    s.putBox(0,1,1,2,0,1);

    s.setColor(1,0,1,1);
    s.putBox(1,2,1,2,0,1);

    s.setColor(0,0,1,1);
    s.putBox(2,3,1,2,0,1);

    s.setColor(0.7,0.4,0,1);
    s.putBox(0,1,1,2,1,2);

    s.setColor(1,0.4,0.2,1);
    s.putBox(1,2,1,2,1,2);

    s.setColor(1,1,0.2,1);
    s.putBox(2,3,1,2,1,2);

    s.setColor(1,0,0.2,1);
    s.putBox(0,1,1,2,2,3);

    s.setColor(1,0.6,0.2,1);
    s.putBox(1,2,1,2,2,3);

    s.setColor(0,1,0.2,1);
    s.putBox(2,3,1,2,2,3);

    s.setColor(0,1,1,1);
    s.putBox(0,1,2,3,0,1);

    s.setColor(0.6,1,0.3,1);
    s.putBox(1,2,2,3,0,1);

    s.setColor(1,0.2,0.9,1);
    s.putBox(2,3,2,3,0,1);

    s.setColor(0.4,0.2,0.9,1);
    s.putBox(0,1,2,3,1,2);

    s.setColor(1,0.2,0.3,1);
    s.putBox(1,2,2,3,1,2);

    s.setColor(0,1,0.3,1);
    s.putBox(2,3,2,3,1,2);

    s.setColor(1,1,0,1);
    s.putBox(0,1,2,3,2,3);

    s.setColor(0,0,0.6,1);
    s.putBox(1,2,2,3,2,3);

    s.setColor(1,0,0.6,1);
    s.putBox(2,3,2,3,2,3);

    s.writeOFF("Escultor3D.off");
    return 0;
}
