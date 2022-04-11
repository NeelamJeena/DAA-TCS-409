#include<iostream>
using namespace std;

int binarySearch(int array[], int start, int end, int key) {
   if(start <= end) {
      int mid = (start + (end - start) /2);
      if(array[mid] == key)
         return mid;
      if(array[mid] > key)
         return binarySearch(array, start, mid-1, key);
         return binarySearch(array, mid+1, end, key);
   }
   return -1;
}

int exponentialSearch(int array[], int start, int end, int key){
   if((end - start) <= 0)
      return -1;
      int i = 1;
      while(i < (end - start)){
         if(array[i] < key)
            i *= 2;
         else
            break;
   }
   return binarySearch(array, i/2, i, key);
}

int main() {
   int n, searchKey, pos;
   cout << "Enter number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements: " << endl;
   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }
   cout << "Enter search key to search in the list: ";
   cin >> searchKey;
   if((pos = exponentialSearch(arr, 0, n, searchKey)) >= 0)
      cout << "Item found at position: " <<pos<< endl;
   else
      cout << "Item is not found in the list." << endl;
}
