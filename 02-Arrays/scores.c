#include <stdio.h>
#include "cs50.h"

float calculate_avg(int arr[]);
const int arr_size=3;

int main(){
    int arr[arr_size];

    for (size_t i = 0; i < arr_size; i++)
    {
        arr[i]=get_int("Score: ");
    }
    printf("Avarege is: %.2f" , calculate_avg(arr));
}

float calculate_avg(int arr[]){
    int sum=0;
    for (size_t i = 0; i < arr_size; i++)
    {
        sum+=arr[i];
    }

    return sum/(float)arr_size;
    
}

