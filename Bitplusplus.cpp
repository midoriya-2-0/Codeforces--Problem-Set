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

    int count = 0;
    while (tc--)
    {
        string str;
        cin >> str;

        if (str[2] == '+' || str[0] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    cout << count << '\n';
}