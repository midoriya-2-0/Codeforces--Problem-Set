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
    string s;
    cin >> s;

    int lower = 0, upper = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }

    if (lower >= upper)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << '\n';

    return 0;
}