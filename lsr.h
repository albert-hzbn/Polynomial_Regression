#include "matrix.h"
#include "ge.h"
#include <math.h>
void obtainMatrixZ(double matData[N][2],double matZ[N][M])
{
    int i,j;
    for(i=0;i<N;i++)
    {   
        for(j=0;j<M;j++)
        {
            matZ[i][j]=pow(matData[i][0],j);
        }
    }
}
void lsr(double matData[N][2],double matX[M])
{
    double matZ[N][M];
    double matZt[M][N];

    obtainMatrixZ(matData,matZ);
    transposeMatrix(matZ,matZt);
 
    N1=M,M1=N;
    N2=N,M2=M;
    double matC[N1][M2];
    //[C]=[Z]'x[Z] 
    multiplyMatrix(matZt,matZ,matC);

    //Storing data in column matrix Y
    double matY[N2][1];
    int i;
    for(i=0;i<N;i++)
    {
        matY[i][0]=matData[i][1];
    }

    M2=1;
    double matB[N2][1];
    //[B]=[Z]'x[Y]
    multiplyMatrix(matZt,matY,matB);
    

    //Creating column matrix form NX1 matrix ie. {B}=[B]
    double B[M];
    for(i=0;i<M;i++)
    {
        B[i]=matB[i][0];
    }
       
    gauss_elim(matC,B,matX,M);
}