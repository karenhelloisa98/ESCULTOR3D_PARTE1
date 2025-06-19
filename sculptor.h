#ifndef SCULPTOR_H_INCLUDED
#define SCULPTOR_H_INCLUDED
#include "voxel.h"
#include <fstream>

class Sculptor {
private:
    Voxel ***v; //matriz 3D
    int nx,ny,nz; //dimensões de cada voxel
    float r,g,b,a; //cores
public:
    Sculptor(int _nx, int _ny, int _nz); //método construtor
    ~Sculptor(); //método destrutor
    void setColor(float r, float g, float b, float a);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void writeOFF(const char* filename);
};

#endif // SCULPTOR_H_INCLUDED
