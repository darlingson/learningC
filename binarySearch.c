#include <stdio.h>

int main() {
int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int len = 10;
    int target = 3;
    int begin = 0;
    int end = 9;
    int result = -1;
  do{
       //find the midpoint
      int mid = (begin + end)/2;
         if(arr[mid] == target){
         result =  mid;
        }
        if(target > arr[mid]){
         begin =  mid + 1;
        }
      else
            end = mid - 1;

   }
   while(begin <= end );

if(result == -1)
    printf("Not found");
else
    printf("found at %d",result);
}
