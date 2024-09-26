#include <bits/stdc++.h>
using namespace std;


int sum_ar(int ar[]) {
  cout<<sizeof(ar)<<endl;
  return 0;
} 

void matrixPrint() {
  int ar[4][4];
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      cin>>ar[i][j];
    }
  }
  //rowwise
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      cout<<ar[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  // colwise
  for(int j = 0; j < 4; j++) {
    for(int i = 0; i < 4; i++) {
      cout<<ar[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  // diagonal 1
  for(int i = 0; i < 4; i++) {
    cout<<ar[i][i]<<" ";
  }
  cout<<endl;
  // diagonal 2
  for(int i = 0; i < 4; i++) {
    int j = 4 - 1 - i; // i + j = n - 1
    cout<<ar[i][j]<<" ";
  }
  cout<<endl;
  // upper triangle
  for(int i = 0; i < 4; i++) {
    for(int j = i; j < 4; j++) {
      if(j >= i)
      cout<<ar[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main()  
{
    int ar[10];
    cout<<sizeof(ar)<<endl;
    sum_ar(ar);
    vector<vector<vector<int>>> vvv;
    vector<vector<int>> vv1 = {{1,3,4}, {4,5,6,7,8}, {}};
    vector<vector<int>> vv2 = {{3,2,1,5},{}};
    vector<vector<int>> vv3 = {{3,4,5,6,7,8}, {1}};
    vvv.push_back(vv1);
    vvv.push_back(vv2);
    vvv.push_back(vv3);
    cout<<vvv.size()<<endl;
    cout<<vvv[0].size()<<endl;
    cout<<vvv[1][0].size()<<endl;
    cout<<vvv[2][0][4]<<endl;
    matrixPrint();
    return 0;
}
