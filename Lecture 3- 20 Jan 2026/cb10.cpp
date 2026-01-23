// *********
//  *******
//   *****
//    ***
//     *
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (j <= n - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = i; j <= n - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
