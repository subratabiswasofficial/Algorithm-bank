#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mmx = 1e3 + 1;

int dp[mmx];

int calls = 0;

int ropeCut(int rope, int a, int b, int c)
{
    ++calls;

    if (rope <= 0)
        return 0;

    if (dp[rope] != -1)
        return dp[rope];

    int aa = -1, bb = -1, cc = -1;

    if (rope >= a)
        if (ropeCut(rope - a, a, b, c) != -1)
            aa = 1 + ropeCut(rope - a, a, b, c);

    if (rope >= b)
        if (ropeCut(rope - b, a, b, c) != -1)
            bb = 1 + ropeCut(rope - b, a, b, c);

    if (rope >= c)
        if (ropeCut(rope - c, a, b, c) != -1)
            cc = 1 + ropeCut(rope - c, a, b, c);

    dp[rope] = max(aa, max(bb, cc));
    return dp[rope];

    // return max(aa, max(bb, cc));
}

signed main()
{
    system("cls");
    memset(dp, -1, mmx);

    cout << ropeCut(23, 11, 9, 1) << endl;
    cout << "calls " << calls << endl;
    return 0;
}
