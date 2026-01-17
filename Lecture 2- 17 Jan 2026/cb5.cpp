# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number:\n";
    cin>>a>>b>>c;
    if (a>b && a>c){
        cout<<"a is greater:"<<a<<endl;
    }
    if (b>a && b>c){
        cout<<"b is greater:"<<b<<endl;
    }
    else{
        cout<<"b is greater:"<<c;
    }

}