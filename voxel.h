#ifndef VOXEL_H_INCLUDED
#define VOXEL_H_INCLUDED

//REPRESENTA O BLOCO UNITÁRIO DO ESCULTOR ("PIXEL 3D")
struct Voxel {
    float r,g,b; // CORES
    float a; // TRANSPARÊNCIA
    bool show; // INCLUÍDO OU NÃO
};

#endif // VOXEL_H_INCLUDED
