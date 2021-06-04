#include<bits/stdc++.h>

using namespace std;


int main(){
    int n,k;
    cin >> n>>k;
    if (k==0){
        for (int i = 1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<n<<" ";
        while (k-1){
            cout<<n-1<<" ";
            n = n-1;
            k--;
        }
        for (int i = 1;i<=n-1;i++){
            cout<<i<<" ";
        }
        cout<<endl;

    }
    return 0;
    
}