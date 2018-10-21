#include <stdio.h> 
#include <conio.h> 
void main () 
{ 
int i,j,t,k,max=0,counter=0,n=3,m=3; 
int b[n][m]; 
for (i=0;i<n;i++) 
for (j=0;j<m;j++) 
{ 
printf("Vvedite element [%d,%d]\n", i+1, j+1); 
scanf("%d",&b[i][j]); 
} 
printf("MATRICA: \n"); 
printf("\n"); 
for (i=0;i<n;i++) 
{ 
for (j=0;j<m;j++) 
printf("%d ", b[i][j]); 
printf("\n"); 
} 
for(i = 0; i < n; ++i){ 
for(j = 0; j < n; ++j){ 
if(b[i][j] == 0){ 
counter++; break; 
} 
} 
} 
for (i=0;i < 3; i++){
	for(i = 0; i < 3; i++){
		for( m=0; m < 3; m++){
			for( k = 0; k<3; k++){
				if((b[i][j] == b[m][k]) && (1!=m) && (j!=k)){
				if(b[i][j]>max)	max = b[i][j];
				}
			}
			
		}
	}
}
printf("Number of rows with no zero elements: %d\n", n - counter); 
printf("Max povtoryaushciesy element matrici = %d\n", max);
}
