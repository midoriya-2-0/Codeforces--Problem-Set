#include <bits/stdc++.h>
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

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}