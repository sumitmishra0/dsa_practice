// How to pass an array in a function how to use it in a function



#include<iostream>
using namespace std;

void printFun(int a[], int n){
    for(int i = 0; i < n; i++)
    cout << a[i] << " ";
}

int main(){
    int arr[5] = {1,2,3,4,5};
    
    printFun(arr, 5);
}
