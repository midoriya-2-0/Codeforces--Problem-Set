#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int groups = 1;

    string prevMagnet;
    cin >> prevMagnet;

    for (int i = 1; i < n; i++)
    {
        string currMagnet;
        cin >> currMagnet;

        if (currMagnet != prevMagnet)
        {
            groups++;
        }

        prevMagnet = currMagnet;
    }

    cout << groups << endl;

    return 0;
}