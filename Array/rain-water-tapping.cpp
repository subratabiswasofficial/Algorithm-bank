#include <bits/stdc++.h>
#define int long long
using namespace std;

//PRINT VECTOR
// void print(vector<int> itrable)
// {
//     cout << "[ ";
//     for (int i = 0; i < itrable.size(); ++i)
//     {
//         cout << itrable[i];
//         if (i != itrable.size() - 1)
//             cout << ", ";
//     }
//     cout << " ]" << endl;
// }

//Rain water tapping Problem

int fx(vector<int> &array)
{

    int n = array.size();
    vector<int> lmax(n), rmax(n);

    //build lmax array
    int maxi = array[0];
    lmax[0] = maxi;
    for (int i = 1; i < n; ++i)
    {
        maxi = max(maxi, array[i]);
        lmax[i] = maxi;
    }

    //build rmax array
    maxi = array[n - 1];
    rmax[n - 1] = maxi;
    for (int i = n - 2; i >= 0; --i)
    {
        maxi = max(maxi, array[i]);
        rmax[i] = maxi;
    }

    //find answer
    int count = 0;

    for (int i = 0; i < n; ++i)
    {

        if (min(lmax[i], rmax[i]) > array[i])
        {
            count += min(lmax[i], rmax[i]) - array[i];
        }
    }

    // print(lmax);
    // print(array);
    // print(rmax);
    return count;
}

signed main()
{
    system("cls");

    vector<int> array = {5, 0, 6, 2, 3};

    cout << fx(array) << endl;

    return 0;
}
