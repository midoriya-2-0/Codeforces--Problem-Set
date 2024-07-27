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

    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;

        if (str.length() > 10)
        {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << '\n';
        }
        else
        {
            cout << str << '\n';
        }
    }

    return 0;
}