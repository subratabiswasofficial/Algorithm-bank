#include <bits/stdc++.h>
#define int long long
using namespace std;

//Maximum alternating even odd

int fx(vector<int> &array)
{
    int n = array.size();
    int maxi = 1;
    int final = maxi;

    for (int i = 1; i < n; ++i)
    {
        if ((array[i - 1] & 1) ^ (array[i] & 1))
        {
            maxi = 1 + maxi;
        }
        else
        {
            maxi = 1;
        }

        final = max(maxi, final);
    }

    return final;
}

signed main()
{
    system("cls");

    vector<int> array = {10, 13, 14, 7, 14};

    cout << fx(array) << endl;

    return 0;
}
