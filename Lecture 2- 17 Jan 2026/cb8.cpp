# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the nth natural number:";
    cin>>n;
    int sum=n*(n+1)/2;
    cout<<"Sum of n natural numbers:"<<n<<"is:"<<sum;
}