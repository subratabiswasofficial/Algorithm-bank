#include <bits/stdc++.h>
#define int long long
using namespace std;

//Maximum profit O( n2 ) approach

int fx(vector<int> &array, int start, int end)
{

    if (start >= end)
        return 0;

    int Profit = 0;
    for (int i = start; i < end; ++i)
    {
        for (int j = i + 1; j < end; ++j)
        {
            if (array[j] > array[i])
            {
                int current_profit = fx(array, start, i) + array[j] - array[i] + fx(array, j + 1, end);
                Profit = max(Profit, current_profit);
            }
        }
    }

    return Profit;
}

//Maximum profit O( n ) approach
int fxx(vector<int> &array)
{
    int profit = 0;

    for (int i = 1; i < array.size(); ++i)
    {

        if (array[i] > array[i - 1])
        {
            profit += array[i] - array[i - 1];
        }
    }
    return profit;
}

signed main()
{
    system("cls");

    vector<int> array = {1, 5, 3, 8, 12};

    cout << fx(array, 0, array.size()) << endl;
    cout << fxx(array) << endl;

    return 0;
}
