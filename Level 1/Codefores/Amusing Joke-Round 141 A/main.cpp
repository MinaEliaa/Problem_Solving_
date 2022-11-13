#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string x, y, z, o;
    cin >> x >> y >> z;

    o = x + y;

    sort(o.begin(), o.end());
    sort(z.begin(), z.end());

    if(o == z)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
