#include <bits/stdc++.h>
#define int long long
using namespace std;

// const int mmx = 1e3 + 1;

// int dp[mmx];

// int calls = 0;

void allsubsets(string &text, string piece = "", int idx = 0)
{

    if (idx == text.length())
    {
        cout << piece << endl;
        return;
    }

    allsubsets(text, piece, idx + 1);
    allsubsets(text, piece + text[idx], idx + 1);
}

signed main()
{
    system("cls");

    string sample = "abc";
    allsubsets(sample);

    return 0;
}
