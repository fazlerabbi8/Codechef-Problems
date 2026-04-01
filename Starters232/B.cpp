#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);         
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());

    int count = 0;
    for(int x : arr)
    {
        if(x != maxVal && x != minVal)
        {
            count++;
        }
    }
    cout << count << "\n";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
    return 0;
}