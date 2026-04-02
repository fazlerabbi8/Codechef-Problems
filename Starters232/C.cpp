#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n), diffArr;
    unordered_map<int, int> ump;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        diffArr.push_back((arr[i] - i));
    }

    for(auto it : diffArr)
    {
        ump[it]++;
    }

    ll ans = 0;
    for(auto x : ump)
    {
        ll k = x.second;
        ans += (k * (k - 1)) / 2;
    }
    
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}