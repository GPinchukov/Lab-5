#include <stdio.h> 
#include <conio.h> 
void main () 
{ 
int i,j,k,c,temp,n=3,m=3; 
int arr[n][m]; 
for (i=0;i<n;i++) 
for (j=0;j<m;j++) 
{ 
printf("Vvedite element [%d,%d]\n", i+1, j+1); 
scanf("%d",&arr[i][j]); 
} 
printf("MATRICA: \n"); 
printf("\n"); 
for (i=0;i<n;i++) 
{ 
for (j=0;j<m;j++) 
printf("%d ", arr[i][j]); 
printf("\n"); 
} 
for (i=0; i<n; i++)
    {
        for (j=1; j<m; j++)
        {
            if (arr[i][j-1]<arr[i][j])
            {
                temp=1;
                break;
            }
        }
        if (!temp)
        {
            for (j=0; j<(m-1)-j; j++)
            {
                temp=arr[i][(m-1)-j]; 
                arr[i][(m-1)-j]=arr[i][j];
                arr[i][j]=temp;
            }
            break;
        }
        temp=0;
    }  
printf(" NOWAYA MATRICA: \n"); 
printf("\n"); 
for (i=0;i<n;i++) 
{ 
for (j=0;j<m;j++) 
printf("%d ", arr[i][j]); 
printf("\n"); 
} 
    return 0;
}
