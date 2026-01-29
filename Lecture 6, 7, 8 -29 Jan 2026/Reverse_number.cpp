#include <iostream>
using namespace std;
int reverse(int n)
{
    int temp = n;
    int ans = 0;
    while (temp > 0)
    {
        ans = ans * 10 + temp % 10;
        temp /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;
    cout << "Reverse:" << reverse(n);
    return 0;
}