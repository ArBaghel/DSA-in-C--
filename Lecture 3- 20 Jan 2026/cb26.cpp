//              1 
//           1  2  3
//        1  2  3  4  5
//     1  2  3  4  5  6  7
//  1  2  3  4  5  6  7  8  9
#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= i; j++)
            cout << " " << j << " ";
        for (int j = 2; j <= i; j++)
            cout << " " << i + j - 1 << " ";
        cout << endl;
    }
}
int main()
{
    pattern(5);
    return 0;
}