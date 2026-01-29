# include <iostream>
using namespace std;
bool isprime(int n){
    if (n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }


    }
    return true;
}
int main(){
    for(int num=1;num<=100;num++){
        if(num%3==0){
            continue;
        }
        if(isprime(num)){
            cout<<" "<<num<<" ";
        }
    }
    cout<<endl;
    return 0;
}