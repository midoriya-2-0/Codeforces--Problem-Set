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
    int a, b;
    cin >> a >> b;

    int years = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        years++;
    }

    cout << years;

    return 0;
}