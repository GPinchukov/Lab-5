#include <stdio.h> 
#include <conio.h> 
void main () 
{ 
int i,j,counter=0,n=3,m=3, col = 1, temp = 0, num=0;
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
for(i = 0; i < n; ++i) 
for(j = 0; j < m; ++j){ 
temp = j++; 
while(temp < n && b[temp][i] == b[j][i]) 
temp++; 
if(col < temp - j){ 
col = temp - j;  
num=i;
}
}
printf("Number of rows with zero elements: %d", counter); 
printf("\nLongest column: %d", col); 
}
