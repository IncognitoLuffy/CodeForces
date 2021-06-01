#include<bits/stdc++.h>

using namespace std;

string print(string s , int n){
    for (int i = 0; i<n;i++){
        if (s[i]=='H' || s[i]=='Q' || s[i]=='9') return "YES";
    }
    return "NO";
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i<n;i++){
        cin>>a[i];
    }
    int mi = a[0];
    int ma = a[0];
    int count = 0;
    for (int i = 1; i<n;i++){
        if (a[i]>ma){
            ma = a[i];
            count++;
        }
        else if (a[i]<mi){
            mi = a[i];
            count++;
        }
    }
    cout<<count<<endl;
}