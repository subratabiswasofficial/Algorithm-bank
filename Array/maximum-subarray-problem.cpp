#include <bits/stdc++.h>
#define int long long
using namespace std;

//Maximum subarray problem

int fx(vector<int> &array, int idx = 0)
{
    int n = array.size();

    int maxi = array[0];

    int last = array[0];

    for (int i = 1; i < n; ++i)
    {

        if (last + array[i] > array[i])
        {
            last = last + array[i];
        }
        else
        {
            last = array[i];
        }
        maxi = max(last, maxi);
    }

    return maxi;
}

signed main()
{
    system("cls");

    vector<int> array = {-5, 1, -2, 3, -1, 2, -2};

    cout << fx(array, 0) << endl;

    return 0;
}
