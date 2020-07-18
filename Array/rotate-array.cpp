#include <bits/stdc++.h>
#define int long long
using namespace std;

//ROTATE ARRAY BY D -- COUNTER CLOCKWISE

vector<int> fx(vector<int> array, int d)
{
    reverse(array.begin(), array.begin() + d);
    reverse(array.begin() + d, array.end());
    reverse(array.begin(), array.end());
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

    vector<int> array = {1, 2, 3, 4, 5, 6};

    print(fx(array, 3));

    return 0;
}
