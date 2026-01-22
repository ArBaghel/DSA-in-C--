# include<iostream>
using namespace std;
int pattern(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if( j==2*i-1||j==1) cout<<"*";
            else cout<<" ";
        }
         cout<< endl;
       
        }
        for(int i=n-1;i>=1;i--){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=2*i-1;j++){
                if(j==1 ||j==2*i-1) cout<<"*";
                else cout<<" ";
            }
            cout<<endl;

        }
        
        
    }

int main(){
    pattern (4);
    return 0;
}