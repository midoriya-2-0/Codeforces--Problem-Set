#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int count = 0;
    while(t--)
    {
        int pi, qi;
        cin >> pi >> qi;

        if (qi - pi >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}