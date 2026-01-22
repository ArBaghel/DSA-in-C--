#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << i;
            }
        }
        for (int k = 2; k <= i; k++)
        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    pattern(5);
    return 0;
}
