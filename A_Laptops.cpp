#include<bits/stdc++.h>

using namespace std;

static bool compare(pair<int,int> a1, pair<int,int> a2){
    return a1.first<a2.second;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i<n;i++){
        int a,b;
        cin>>a>>b;
        if (a!=b) {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
    
}