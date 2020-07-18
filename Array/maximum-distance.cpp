#include <bits/stdc++.h>
#define int long long
using namespace std;

//Maximum distance Problem

int fx(vector<int> array)
{

    int mini = array[0];
    int ans = INT_MIN;
    for (int i = 1; i < array.size(); ++i)
    {
        ans = max(ans, array[i] - mini);
        mini = min(array[i], mini);
    }

    return ans;
}

signed main()
{
    system("cls");

    vector<int> array = {4, 3, 6, 7};

    cout << fx(array) << endl;

    return 0;
}
