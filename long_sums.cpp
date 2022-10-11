#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int len = max(str1.length(), str2.length()) + 1;
    int arr1[len] = {}, arr2[len] = {}, sum[len] = {};

    //Storing num1 into array
    for (int i = len - 1, j = str1.length() - 1; j >= 0; --i, --j)
    {
        arr1[i] = str1[j] - '0';
    }

    //Storing num2 into array
    for (int i = len - 1, j = str2.length() - 1; j >= 0; --i, --j)
    {
        arr2[i] = str2[j] - '0';
    }

    // Initialising carry with 0
    int carry = 0;

    for (int i = len - 1; i >= 0; --i)
    {
        // Adding and Taking the carry
        sum[i] = ((arr1[i] + arr2[i]) % 10) + carry;

        // Updating Carry
        carry = (arr1[i] + arr2[i]) / 10;
    }

    for (int i = 0; i < len; ++i)
    {
        if (sum[i] == 0 && i == 0)
            continue;

        cout << sum[i];
    }

    return 0;
}
