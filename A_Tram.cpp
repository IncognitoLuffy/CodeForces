#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    int tram = 0;
    int ans=-1;
    for (int i = 0; i<n;i++){
        int a,b;
        cin>>a>>b;
        tram =tram - a;
        tram = tram +b;
        ans = max(ans,tram);
    }
    cout<<ans<<endl;
}