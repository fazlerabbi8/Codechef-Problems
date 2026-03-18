#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int n, int k)
{
    int profit = 0;

    for (int i = 0; i < k; i++)
    {
        int p = (arr[i] - 5);
        if(p > 0){
            profit += p;
        }else{
            break;
        }
    }

    for (int i = k; i < n; i++)
    {
        int p = (arr[i] - 10);
        if(p > 0){
            profit += p;
        }else{
            break;
        }
    }

    cout << profit << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        solve(arr, n, k);
    }

    return 0;
}