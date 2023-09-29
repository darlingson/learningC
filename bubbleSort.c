#include<stdio.h>

int main(void){
    int arr[10] = {3,1,5,2,9,7,8,4,1,0};
    int len = 10;

    for(int i = 0; i < len ; i++){
        //outer array
        for(int j= i;j<len;j++){
            //inner loop
            if(arr[i] > arr[j]){
                //swap the contents
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

    //print out the sorted array
    for (int i = 0; i < len ; i++){
        printf("%i",arr[i]);
    }
    return 0;
}
