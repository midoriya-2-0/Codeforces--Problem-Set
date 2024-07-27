#include<bits/stdc++.h>
using namespace std;

void fastOI(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastOI();

    int n, k;
    cin >> n >> k;

    deque<int> dq;
    copy_n(istream_iterator<int>(cin), n, back_inserter(dq));

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (dq[i] >= dq[k - 1] && dq[i] > 0)
        {
            count++;
        }
    }

    cout << count << endl;
}