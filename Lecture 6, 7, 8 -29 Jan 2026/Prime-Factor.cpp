#include <iostream>
using namespace std;
int Primefactor(int n){
    int i=2;
    while (i<=n){
        if(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
        else{
            i++;
        }
    }
}
int main(){
    int n;
    cout<<"Enter a number to find its prime factors: ";
    cin>>n;
    cout<<"Prime factors of "<<n<<" are: ";
    Primefactor(n);
    cout<<endl;
    return 0;
}