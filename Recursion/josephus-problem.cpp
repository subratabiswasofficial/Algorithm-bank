#include <bits/stdc++.h>
#define int long long
using namespace std;

int josephus(int n, int k)
{

    if (n == 1)
        return (k + 1) % n;

    return ((josephus(n - 1, k) + k) % n);
}

signed main()
{
    system("cls");
    cout << josephus(5, 3) << endl;
    return 0;
}
