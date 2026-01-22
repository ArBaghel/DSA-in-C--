// n = 5
//      * * * * *
//    * * * *
//   * * *
//  * *
// *
//  * *
//   * * *
//    * * * *
//     * * * * *
#include <iostream>
using namespace std;
int pattern(int n)
{
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=2;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"  ";
        }
        for (int j=1;j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}
int main()
{
    cout << pattern(5);
}
