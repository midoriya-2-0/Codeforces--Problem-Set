#include <bits/stdc++.h>
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

    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]); 
    }

    // Compare the two strings lexicographically (case-insensitive)
    // The comparison is case-insensitive, meaning that the case of the characters is ignored.
    // The comparison is based on the ASCII values of the characters.
    // The comparison is done lexicographically, meaning that the characters are compared one by one.
    if (s1 < s2)
    {
        cout << -1 << endl;
    }
    else if (s1 > s2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}