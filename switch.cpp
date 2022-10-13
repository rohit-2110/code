#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 1;

    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;

    // default:
    //     break;
    // }

    switch (++x + 10)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;

    default:
        cout << "Default Statement";
        break;
    }

    return 0;
}