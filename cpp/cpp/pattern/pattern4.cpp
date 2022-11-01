// // make pattern
// 123
// 456
// 789

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int count=1;
    for(int i=1;i<=3;i++){
        for (int j=1;j<=3;j++){
            cout<<count;
            count=count+1;
        }
        cout<<endl;
    }
}