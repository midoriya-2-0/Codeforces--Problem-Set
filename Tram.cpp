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

    int a, b;
    int count = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        count -= a;
        count += b;
        if (count > max)
        {
            max = count;
        }
    }

    cout << max;

    return 0;
}