#include<stdio.h>

void main(){
    int a[15][15],n,m,i,j,k;

    printf("Enter any number > ");
    scanf("%d",&n);
    m=n;
    
    for(i=0;i<n;i++){
    for(j=i;j<2*n-1-i;j++)
        for(k=i;k<2*n-1-i;k++)
            a[j][k]=m;
    m--; 
    }
    
    for(i=0;i<2*n-1;i++){
     for (j=0;j<2*n-1;j++)
        printf("%d ",a[i][j]);
    printf("\n");
    }
           
}