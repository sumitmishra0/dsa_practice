// Selection sort algorithm


#include<iostream>
using namespace std;



int main(){
    
    // int arr[6] = {7, 0, 4, 1, 9, 5};
    // int n = 6;
    
    int arr[1000];  // by default we have taken 1000 size
    int n;
    cout << "Enter the size of array: ";
    cin>> n;
    cout<< "Enter the element in array: ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];

 for(int i = 0; i < n - 1; i++){
     int index = i;
     for(int j = i + 1; j < n; j++){
         if(arr[j] < arr[index]){
             index = j;
         }
     }
     
         swap(arr[i], arr[index]);
 }
 
 
//  For printing array
 
 for(int i = 0; i < n; i++){
     cout << arr[i] << " ";
 }

}
