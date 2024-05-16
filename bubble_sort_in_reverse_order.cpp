#include <iostream>
using namespace std;

int main() 
{
  int arr[1000];
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
    
  cout << "Enter the element in array: ";
  for(int i = 0; i < n; i++)
  cin >> arr[i];

  
  for(int i = 1; i < n; i++){
      bool swapped = false;
      for(int j = n - 1; j >= i; j--){
          if(arr[j] < arr[j-1]){
              swap(arr[j], arr[j-1]);
              swapped = true;
          }
      }
      if(swapped == false){
          break;
      }
  }
  
  for(int i = 0; i < n; i++){
  cout << arr[i] << " ";}
    // cout << "Hello, World!";
    // return 0;
}
