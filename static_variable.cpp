#include <bits/stdc++.h>
using namespace std;

// This will not preserve function call count
void goo()
{
    int x = 1;
    cout << x << endl;
    ++x;
}

// This will preserve function call count in every function call
void foo()
{
    static int x = 1;
    cout << x << endl;
    ++x;
}

int main()
{
    for (int i = 0; i < 2; ++i)
    {
        foo();
    }
    for (int i = 0; i < 2; ++i)
    {
        goo();
    }
    return 0;
}