#include "sculptor.h"
#include <fstream>
#include "voxel.h"
#include "sculptor.cpp"

int main(){
    Sculptor s(50,50,50);
    //Cabeça do pirulito
    s.setColor(1, 0, 1, 1); //Rosa
    s.putSphere(15, 30, 15, 6);
    //Mordida na parte da frente da esfera
    s.cutBox(9, 21, 30, 36, 15, 21);
    //Haste
    s.setColor(1, 1, 1, 1);  //Branco
    s.putBox(14, 16, 0, 28, 14, 16);
    //Furo no cabo
    s.cutVoxel(15, 10, 15);

    s.writeOFF("Escultor3D.off");

    return 0;
}
