#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int len = s.length();

    if(s[0] == 's' || s[len - 1] == 's'){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}