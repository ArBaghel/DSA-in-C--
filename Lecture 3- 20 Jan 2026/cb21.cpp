//  *                       * 
//  *  *                 *  *
//  *  *  *           *  *  *
//  *  *  *  *     *  *  *  *
//  *  *  *  *  *  *  *  *  *
#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        for (int j = 1; j <= 2 * (n - i) - 1; j++)
            cout << "   ";
        for (int j = 1; j <= i; j++)
            cout << " * ";
        cout << endl;
    }
    for (int i = 1; i <= 2 * n - 1; i++)
        cout << " * ";
}
int main()
{
    pattern(5);
    return 0;
}
