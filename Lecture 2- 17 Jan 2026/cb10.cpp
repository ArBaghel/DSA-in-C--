# include <iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter the number:";
    cin>>n;
    if (n==0){
        cout<<"Factorial not possible \n";

    }
    if(n==1){
        cout<<"Factorial is 1 \n";
    }
    else{
        fact=1;
        while(n>=1){
            fact=fact*n;
            n-=1;

        }
        cout<<"Factorial is:"<<fact<<endl;
    }
        

        
    

}