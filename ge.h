void gauss_elim(double matA[M][M],double matB[M],double matX[M],int n)
{
	int i,j,k;
	double factor;

	//Forward elimination
	for(k=0;k<n-1;k++)
	{
		for(i=k+1;i<n;i++)
		{
			factor=matA[i][k]/matA[k][k];
			for(j=k;j<n;j++)
			{
				matA[i][j]-=factor*matA[k][j];
			}
			matB[i]-=factor*matB[k];
		}

	}

	//Backward Substitution
	matX[n-1]=matB[n-1]/matA[n-1][n-1];
	double sum=0;
	for(i=n-2;i>=0;i--)
	{
		sum=matB[i];
		for(j=i+1;j<n;j++)
		{
			sum-=matA[i][j]*matX[j];
		}
		matX[i]=sum/matA[i][i];
	}

}