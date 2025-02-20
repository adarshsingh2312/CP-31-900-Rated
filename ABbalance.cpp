#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        if(s[0]==s[n-1]){
            cout<<s<<endl;
        }
        else{
            if(s[n-1]=='a') s[n-1] = 'b';
            else    s[n-1] = 'a';
            cout<<s<<endl;
        }
    }
    return 0;
}