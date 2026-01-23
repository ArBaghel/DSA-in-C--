//              1 
//           2  3  2
//        3  4  5  4  3
//     4  5  6  7  6  5  4
//  5  6  7  8  9  8  7  6  5
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
        int index=i;
        for (int j = 1; j <= i; j++){
            cout << " " << index << " ";
            index ++;
        }
        int temp=index;
        for (int j = 2; j <=i; j++){
            temp--;
            cout << " " << temp-1 << " ";
        }
        cout << endl;
    }
}
int main()
{
    pattern(5);
    return 0;
}