#include <iostream>
using namespace std;
int pattern(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
        cout << " * ";
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i ; j++)
        {
            cout << " * ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= n - i; j++)
            cout << " * ";
        cout << endl;
    }
}
int main(){
    pattern(5);
    return 0;
}