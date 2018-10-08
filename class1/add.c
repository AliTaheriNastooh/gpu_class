#include <stdio.h>
#include <stdlib.h>

void addOperation(int* arr1,int *arr2 , int *arr3,int size){
  for(int i=0;i<size;i++){
    arr3[i]=arr1[i]+arr2[i];
    //printf("%d\n",arr3[i] );
  }
}
 int main(int argc, char const *argv[]) {
   int *arr1;
   int *arr2;
   int *arr3;
   int size=atoi(argv[1]);
   arr1=(int*)malloc(sizeof(int)*size );
   arr2=(int*)malloc(sizeof(int)*size );
   arr3=(int*)malloc(sizeof(int)*size );

   for (int i = 0; i < size; i++) {
     arr1[i]=rand()%100;
     arr2[i]=rand()%100;
   }
   addOperation(arr1,arr2,arr3,size);
   for(int i=0;i<size;i++){
     printf("%d\n",arr3[i] );
   }
   free(arr1);
   free(arr2);
   free(arr3);
  return 0;
}
