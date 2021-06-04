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
    int n;
    cin>>n;
    int b = n*n;
    int a  = b/2;
    for (int i = 1;i<=a;i++){
        cout<<i<<" "<<b+1-i<<endl;
    }
}