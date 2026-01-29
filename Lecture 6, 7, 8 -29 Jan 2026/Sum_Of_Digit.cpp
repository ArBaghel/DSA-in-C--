#include <iostream>
using namespace std;
int Sumdigit(int n)
{
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the Number:";
    cin >> n;
    cout << "Sum of the digits of the number: " << Sumdigit(n);
    return 0;
}