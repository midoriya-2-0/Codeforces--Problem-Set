#include<bits/stdc++.h>
using namespace std;

void fastOI()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastOI();

    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s << '\n';

    return 0;
}