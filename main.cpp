#include "sculptor.h"
#include <fstream>
#include "voxel.h"
#include "sculptor.cpp"

int main(){
    Sculptor s(100,100,100);
    //Parte 1: Cabeça do pirulito (esfera rosa)
    s.setColor(1, 0, 1, 1);  // Rosa
    s.putSphere(15, 30, 15, 6);

    //Corte (mordida) na parte da frente da esfera
    s.cutBox(9, 21, 30, 36, 15, 21); // Fatia na lateral frontal

    //Haste (cabo branco)
    s.setColor(1, 1, 1, 1);  // Branco
    s.putBox(14, 16, 0, 28, 14, 16);

    //Furo no cabo (usar cutVoxel)
    s.cutVoxel(15, 10, 15);

    s.writeOFF("Escultor3D.off");

    return 0;
}
