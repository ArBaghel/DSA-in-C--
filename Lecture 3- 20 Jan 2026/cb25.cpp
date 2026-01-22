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
                cout << "  ";
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
