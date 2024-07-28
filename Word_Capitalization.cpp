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
    string str;
    cin >> str;

    if (islower(str[0]))
    {
        str[0] = toupper(str[0]);
    }
    else
    {
        cout << str;
        return 0;
    }

    cout << str;
    
    return 0;
}