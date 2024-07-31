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
    string n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}