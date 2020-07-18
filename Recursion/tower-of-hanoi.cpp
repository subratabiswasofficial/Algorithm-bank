#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
            FROM,  USING,  DEST
*/
void TOH(int disks, char A = 'A', char B = 'B', char C = 'C')
{
    if (disks == 0)
        return;

    TOH(disks - 1, A, C, B);
    cout << "move " << A << " --> " << C << endl;
    TOH(disks - 1, B, A, C);
}

signed main()
{
    system("cls");

    TOH(2);

    return 0;
}
