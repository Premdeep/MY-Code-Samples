#include <bits/stdc++.h>

using namespace std;

int maxScoreOfVincent(int n, string s, string t) {
    // Complete this function
    int res = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i] && s[i] != '.')
            res++;
    }
    return res;
}

int main() {
    //  Return the maximum score of Vincent.
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t;
    cin >> t;
    int result = maxScoreOfVincent(n, s, t);
    cout << result << endl;
    return 0;
}
