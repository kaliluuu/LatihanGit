#include <iostream>
using namespace std;
int main()
{
    int n, i, r;
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        for (r = 1; r <= i; ++r)
        {
            cout << r;
        }
        cout << endl;
    }
    return 0;
}