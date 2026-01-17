# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:\n";
    cin>>n;
    if (n>=300 && n<=460){
        cout<<"Prize is Macbook"<<endl;
    }
    else if(n>=200 && n<=280){
        cout<<"Prize is Kurkure"<<endl;
    }
    else if(n>=1100 && n<=15001){
        cout<<"Prize is cycle"<<endl;
    }
    else if(n>50 && n<=80){
        cout<<"Prize is Bike"<<endl;
    }
    else{
        cout<<"Better Luck Next Time"<<endl;
    }
}