#include <bits/stdc++.h>
#define int long long
using namespace std;

//REMOVE DUPLICATE ELEMENTS FROM SORTED ARRAY

vector<int> fx(vector<int> array)
{
    int i = 0;
    int ptr = i + 1;
    int n = array.size();

    while (ptr < n)
    {
        if (array[i] == array[ptr])
        {
            ++ptr;
        }
        else
        {
            array[++i] = array[ptr];
            ++ptr;
        }
    }

    array.resize(i + 1);
    return array;
}

//PRINT VECTOR
void print(vector<int> itrable)
{
    cout << "[ ";
    for (int i = 0; i < itrable.size(); ++i)
    {
        cout << itrable[i];
        if (i != itrable.size() - 1)
            cout << ", ";
    }
    cout << " ]" << endl;
}

signed main()
{
    system("cls");

    vector<int> array = {
        1,
        5,
        5,
        7,
        8,
        9,
    };

    print(fx(array));

    return 0;
}
