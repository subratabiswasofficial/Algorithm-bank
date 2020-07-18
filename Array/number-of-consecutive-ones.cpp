#include <bits/stdc++.h>
#define int long long
using namespace std;

//Maximum numbers Consicutive ones in an Array

int fx(vector<int> &array)
{
    int maxi = 0;
    int n = array.size();
    int temp = 0;
    for (int i = 0; i < n; ++i)
    {
        if (array[i] == 0)
        {
            temp = 0;
        }
        else
        {
            ++temp;
            maxi = max(maxi, temp);
        }
    }

    return maxi;
}

signed main()
{
    system("cls");

    vector<int> array = {0, 0, 1, 1, 1, 0, 1};

    cout << fx(array) << endl;

    return 0;
}
