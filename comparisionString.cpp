#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int streak = 1;
        int max_streak = 1;
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                streak++;
            }
            else    streak = 1;
            max_streak = max(streak,max_streak);
        }
        cout<<(max_streak+1)<<endl;
    }
    return 0;
}