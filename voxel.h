#ifndef VOXEL_H_INCLUDED
#define VOXEL_H_INCLUDED

//REPRESENTA O BLOCO UNIT�RIO DO ESCULTOR ("PIXEL 3D")
struct Voxel {
    float r,g,b; // CORES
    float a; // TRANSPAR�NCIA
    bool show; // INCLU�DO OU N�O
};

#endif // VOXEL_H_INCLUDED
