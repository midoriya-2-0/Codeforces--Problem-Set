#include<bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastIO();
    int w;
    cin >> w;

    if (w % 2 == 0 && w > 2)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    return 0;
}
