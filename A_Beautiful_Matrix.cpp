#include <bits/stdc++.h>
#define ll long long int 
using namespace std;


int main(){
    int arr[5][5];
    for (int i = 0; i<5;i++){
        for (int j = 0; j<5;j++){
            cin>>arr[i][j];
        }
    }
    int row,col;
    for (int i = 0; i<5;i++){
        for (int j = 0; j<5;j++){
            if (arr[i][j]){
                row = i;
                col = j;
            }
        }
    }
    cout<<(abs(row-2)+abs(col-2))<<endl;
    
    return 0;
}