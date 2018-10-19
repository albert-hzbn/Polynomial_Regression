#include <stdio.h>
int N,M,N1,M1,N2,M2;

#include "lsr.h"
#include "io.h"
int main()
{
    printf("\nEnter no. of data points: ");
    scanf("%d",&N);

    double matData[N][2];
	char fName[]="input.txt";
    get_data(fName,matData);

    printf("\nEnter degree of polynomial: ");
    scanf("%d",&M);

    if(N>=M+1)
    {
        M=M+1;

        double matX[M];
        lsr(matData,matX);

        int i;
        printf("\n");
        for(i=0;i<M;i++)
        {
            printf("a%d=%lf \n",i,matX[i]);
        }
        printf("\n Equation: ");
        printf("%lf + ",matX[0]);
        for(i=1;i<M;i++)
        {
            printf("%lf*x^%d",matX[i],i);

            if(i!=M-1)
                printf(" + ");
        }
        printf("\n");
    }
    else{
        printf("\nRegression is impossible\n");
    }
    return 0;
}