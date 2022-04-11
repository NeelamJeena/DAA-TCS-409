#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int jumpSearch(int array[], int size, int key) {
   int start = 0;
   int end = sqrt(size);

   while(array[end] <= key && end < size) {
      start = end;
      end += sqrt(size);
      if(end > size - 1)
         end = size;
   }

   for(int i = start; i<end; i++) {
      if(array[i] == key)
         return i;
   }
   return -1;
}

int main() {
   int n, searchKey, loc;
   printf("Enter number of elements\n: ");
   scanf("%d",&n);
   int arr[n];
   printf("enter elements\n");

   for(int i = 0; i< n; i++) {
      scanf("%d",&arr[i]);
   }

   printf("Enter search key to search in the list: ");
   scanf("%d",&searchKey);
   if((loc = jumpSearch(arr, n, searchKey)) >= 0)
      printf("element found at position:%d",loc);
   else
     printf("element not found\n");
}
