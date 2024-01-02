#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int probImplmnts = 0;
    int x, y, z;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;

        if (x + y + z > 1)
        {
            probImplmnts++;
        }
    }

    cout << probImplmnts;

    return 0;
}