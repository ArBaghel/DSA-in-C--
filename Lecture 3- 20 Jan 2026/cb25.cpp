//              1 
//           2  3  4
//        5  6  7  8  9
//     10  11  12  13  14  15  16
//  17  18  19  20  21  22  23  24  25
#include <iostream>
using namespace std;
void pattern(int n)
{
    int count=1;
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
                cout <<" "<<count <<" ";
                count++;
            }
        }
        for (int k = 2; k <= i; k++)
        {
            cout <<" " <<count<<" ";
            count++;
        }
        cout << endl;
    }
}
int main()
{
    pattern(5);
    return 0;
}
