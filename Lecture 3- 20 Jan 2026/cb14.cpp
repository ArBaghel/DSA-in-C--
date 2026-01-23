//             *
//           *  *
//        *  *  *
//     *  *  *  *
//  *  *  *  *  *
//     *  *  *  *
//        *  *  *
//           *  *
//              *
#include <iostream>
using namespace std;
int pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "   ";
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;
    cout << pattern(n);
}