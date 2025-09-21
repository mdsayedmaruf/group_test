// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,n, max,min, result;
    int arr[5];
  
 scanf("%d", &n );
 for(i=0; i<5; i++){
     
     scanf("%d",&arr[i]);
 }
    max = arr[0];
    min = arr[0];
 
  for(i=0; i<5; i++){
    if (arr[i]>max) max = arr[i]; 
   if (arr[i]<min) min = arr[i]; 
 } 
 printf("%d\n",max);
  printf("%d",min);
    return 0;
}