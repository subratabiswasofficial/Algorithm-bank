#include <bits/stdc++.h>
#define int long long
using namespace std;

int subsetsumcount(int sum, int arr[], int idx, int n)
{
    if (idx == n)
    {
        if (sum == 0)
            return 1;
        else
            return 0;
    }

    int ans = 0;
    ans += subsetsumcount(sum, arr, idx + 1, n);
    ans += subsetsumcount(sum - arr[idx], arr, idx + 1, n);

    return ans;
}

signed main()
{
    system("cls");

    int arr[] = {10, 5, 2, 3, 6};

    cout << subsetsumcount(8, arr, 0, 5) << endl;
    return 0;
}
