# include <iostream>
using namespace std;
int main(){
    int digit,sum=0;
    cout<<"Enter the digit:";
    cin>>digit;
    while (digit!=0){
        int rem=digit%10;
        cout<<"Last digit is:"<<rem<<endl;
        digit=digit/10;
        sum=sum+rem;
        cout<<"Sum of digits is:"<<sum<<endl;
    }

}
