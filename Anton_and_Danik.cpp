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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0, danik = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton\n";
    }
    else if (anton < danik)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }

    return 0;
}