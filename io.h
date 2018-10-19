
void get_data(char file_name[], double matData[N][M]);
// void write_data(char file_name[], double data[max][max]);

void get_data(char file_name[], double matData[N][2])
{
    int i,j;
    FILE *fp;
    fp=fopen(file_name,"r");
    for(i=0;i<N;i+=1)
    {
        for(j=0;j<2;j+=1)
        {
            fscanf(fp,"%lf",&matData[i][j]);
        }   
    }
    fclose(fp);
}
// void write_data(char file_name[], double data[max][max])
// {
//     int i=0;
//     FILE *fp;
//     fp=fopen(file_name,"w");
//     for(int i=0;i<TN;i++)
//     {
//         for(int j=0;j<XN;j++)
//         {
//             fprintf(fp,"%lf",data[j][i]);
//             if(j!=XN-1)
//                fprintf(fp,","); 
//         }
//         fprintf(fp,"\n");
//     }
//     fclose(fp);
// }