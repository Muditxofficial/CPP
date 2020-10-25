//
// Created by Mudit on 22-10-2020.
//
#include <iostream>
using namespace std;
void rotateByOne(int arr[],int n){

    int temp = arr[0],i;
    for (i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
}
void rotateByPosititon(int arr[],int d,int n){
    for(int i=0;i<d;i++){
        rotateByOne(arr,n);
    }
}
void printArray(int arr[],int n){
    for (int i = 0; i <n ; ++i) {
        cout<<arr[i];
    }
    cout<<endl;
}
int main() {
    int arr[] = {1,2,3,4,5,6};
    int size;
    size = sizeof(arr)/ sizeof(arr[0]);
    printArray(arr,size);
    rotateByPosititon(arr,2,size);
    printArray(arr,size);
    return 0;
}

