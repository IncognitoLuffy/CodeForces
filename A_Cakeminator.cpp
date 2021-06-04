#include<bits/stdc++.h>

using namespace std;

int print(string s1,string s2 , int n){
    for (int i = 0;i<n;i++){
        int a1 = s1[i];
        int a2 = s2[i];
        if (a1>=97) a1 = a1-32;
        if (a2>=97) a2 = a2 -32;
        if (a1<a2) return -1;
        else if (a1>a2) return 1;
    }
    return 0;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    for (int i = 0; i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> v (n,vector<int>(m,0));
    for (int i = 0; i<n;i++){
        bool found = false;
        for(int j = 0; j<m ;j++){
            if (a[i][j]=='S'){
                found = true;
            }
        }
        if (!found) {
            for (int j = 0; j<m;j++){
                v[i][j] =1;
            }
        }
    }
    for (int j = 0; j<m;j++){
        bool found = false;
        for(int i = 0; i<n ;i++){
            if (a[i][j]=='S'){
                found = true;
            }
        }
        if (!found){
            for (int i = 0; i<n;i++){
                v[i][j] =1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i<n;i++){
        for (int j = 0;j<m;j++){
            if (v[i][j]==1){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}