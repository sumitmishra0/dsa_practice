#include<bits/stdc++.h>
using namespace std;


int main() {
  int ar[4][6];
  
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 6; j++) {
      cin>>ar[i][j];
    }
  }
  
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 6; j++) {
      cout<<ar[i][j]<<" ";
    }
    cout<<endl;
  }
}
