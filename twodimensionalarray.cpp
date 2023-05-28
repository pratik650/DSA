#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Printout{
public:
void Printer(int arr[][5],int n){
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cout<<arr[i][j]<<' ';
      }
      cout<<endl;
    }
    }
};

int main(){
int n;
    cin>>n;
    int arr[n][5];
    for(int i=0;i<n;i++){
      for(int j=0;j<5;j++){
          arr[i][j] = 1;
      }
    }
    
    Printout pr;
    pr.Printer(arr, n );
}