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

    int x, y;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    //! The Manhattan distance between two points is the sum of the absolute differences of their coordinates.
    //! In this case, the Manhattan distance between the point (x, y) and the point (3, 3) is |x - 3| + |y - 3|.
    cout << abs(x - 3) + abs(y - 3) << endl;
}