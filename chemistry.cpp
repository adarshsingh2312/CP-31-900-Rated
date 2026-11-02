#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

bool canFormPalindrome(string s,int n, int k){
    unordered_map<char,int>m;
    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    int count_odds = 0;
    for(auto &pr : m){
        if((pr.second)%2!=0)   count_odds++;
    }
    if(k>=(count_odds-1))   return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(canFormPalindrome(s,n,k)){
            cout<<"Yes"<<endl;
            continue;
        }
        cout<<"No"<<endl;
    }
    return 0;
}