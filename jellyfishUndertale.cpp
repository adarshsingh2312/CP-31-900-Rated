#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> tools(n);
        for (int i = 0; i < n; i++) {
            cin >> tools[i];
        }
        long long seconds = b;
        for(int i=0; i<n; i++){
            seconds+=min(tools[i],a-1);
        }
        cout << seconds << endl; 
    }
    return 0;
}
