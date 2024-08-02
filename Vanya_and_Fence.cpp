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

    int n, h;
    cin >> n >> h;

    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int cnt = 0;

    for (auto i : dq)
    {
        if (i > h)
        {
            cnt += 2;
        }
        else
        {
            cnt += 1;
        }
    }

    cout << cnt << '\n';
}