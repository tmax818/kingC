#include <stdio.h>

int *find_middle(int a[], int n);


int main(){

    int arr[] = {2,4,6,8,10};

    int *mid = find_middle(arr, 5);

    printf("middle %d\n", *mid);

    return 0;


}

int *find_middle(int a[], int n){
    return &a[n/2];
}