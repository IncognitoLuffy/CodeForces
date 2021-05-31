#include <bits/stdc++.h>

using namespace std;

void print(string s){
    int len = s.size();
    if (len<=10) cout<<s<<endl;
    else{
        string n = s[0]+to_string(len-2)+s[len-1];
        cout<<n<<endl;
    }
}

int main(){
    int a;
    cin>>a;
    while (a){
        string s;
        cin>>s;
        print(s);
        a--;
    }
    
    return 0;
}