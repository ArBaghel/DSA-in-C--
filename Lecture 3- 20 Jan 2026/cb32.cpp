//  1
//  2 * 2
//  3 * 3 * 3
//  4 * 4 * 4 * 4
//  5 * 5 * 5 * 5 * 5
//  4 * 4 * 4 * 4
//  3 * 3 * 3
//  2 * 2
//  1
#include <iostream>
using namespace std;
int pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 != 0)
                cout << " " << i << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 != 0)
                cout << " " << i << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
   
}

int main()
{
    pattern(5);
    return 0;
}