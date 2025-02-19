#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string t;
        cin>>t;
        map<char,int>m1,m2;
        for(auto ch : s){
            m1[ch]++;
        }
        for(auto ch : t){
            m2[ch]++;
        }
        int i = 0;
        int j = 0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                if(m1[s[i]]<m2[t[j]]){
                    break;
                }
                if(m1[s[i]]==m2[t[j]]){
                    m2[t[j]]--;
                    j++;
                }
            }
            m1[s[i]]--;
            i++;
        }
        if(j==t.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}