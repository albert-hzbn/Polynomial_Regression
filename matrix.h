void multiplyMatrix(double matA[N1][M1],double matB[N2][M2],double matC[N1][M2])
{
    int i,j,k;
    double sum;
    for(i=0;i<N1;i++)
    {
        for(j=0;j<M2;j++)
        {
            sum=0;
            for(k=0;k<M1;k++)
            {
                sum+=matA[i][k]*matB[k][j];
            }
            matC[i][j]=sum;
        }
    }
}
void transposeMatrix(double matInp[N][M],double matOut[M][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            
            matOut[j][i]=matInp[i][j];
        }
    }
}