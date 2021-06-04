#include <bits/stdc++.h>
#define ll long long int 
using namespace std;


void print(string s,int i, int j){
    stack<char> st;
    int len = 0;
    int ans = 0;
    for (int a = i;a<=j;a++){
        if (s[a]=='('){
            st.push(a);
        }
        else{
            if (!st.empty()){
                int x = st.top();
                st.pop();
                len +=2;
            }
        }
    }
    cout<<len<<endl;

}

int main(){
    string b;
    cin>>b;

    int m;
    cin>>m;
    while (m){
        int i,j;
        cin>>i>>j;
        print(b,i-1,j-1);
        m--;
    }
    
    return 0;
}