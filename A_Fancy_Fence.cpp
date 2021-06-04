#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;

    for (int i = 0 ;i<n;i++){
        int in;
        cin>>in;
        int ex = 180-in;
        if (360%ex==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
    
}