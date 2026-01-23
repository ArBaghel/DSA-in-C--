//  5  4  3  2  1 
//  5  4  3  2  1 
//  5  4  3  2  1 
//  5  4  3  2  1 
//  5  4  3  2  1
# include <iostream>
using namespace std;
int pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            cout <<" "<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern(5);
    return 0;
}