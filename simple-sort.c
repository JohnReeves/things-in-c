/*
int main(void) {
  printf("Hello World\n");
  return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#define SWAP(a,b)   { int t; t=a; a=b; b=t; }
#define INDEX 8

void bubble_srt(int a[], int n);

int main(void) 
{
   int i;
   int array[INDEX] = {12, 9, 4, 99, 120, 1, 3, 10};
   
   printf("Before the sort:\n");
   for(i = 0; i < INDEX; i++)
      printf("%d ", array[i]);
   printf("\n");
     
   bubble_srt(array, INDEX);
   
   printf("After the sort:\n");
   for(i = 0; i < INDEX; i++)
      printf("%d ", array[i]);
   printf("\n");   

   system("PAUSE"); 
   return 0;
} 

void bubble_srt( int a[], int n ) {   
    int i, j;     
    for(i = 0; i < n; i++){              
        for(j = 1; j < (n-i); j++){              
           if(a[j-1] > a[j]) 
              SWAP(a[j-1],a[j]);   
        }
    }
}
