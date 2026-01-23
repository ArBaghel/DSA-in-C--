// n = 5

//      *
//    * ! *
//   * ! * ! *
//  * ! * ! * ! *
// * ! * ! * ! * ! *

#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
                cout << "  ";
            else if (j == n)
                cout << "*";
            else
                cout << "* ! ";
        }
        cout << endl;
    }
}
int main()
{
    pattern(5);
    return 0;
}
