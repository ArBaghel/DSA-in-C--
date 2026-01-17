# include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    if(marks>80){
        cout <<"A grade"<<endl;
    }
    if(marks>45 && marks<70){
        cout <<"B grade"<<endl;
    }
    else{
        cout<<"C Grade";
    }

}