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

    int n;
    cin >> n;

    while (true)
    {
        n++;
        int a = n / 1000;
        int b = n / 100 % 10;
        int c = n / 10 % 10;
        int d = n % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }

    cout << n << '\n';

    return 0;
}