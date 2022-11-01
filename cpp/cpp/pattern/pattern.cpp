#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int i=1;
   
    while( i<=n){
         int j=1;
        while ( j<=n){
            cout<<j;
            j++;
        }
       
        cout<<endl;
         i++;
        }
        return 0;
    }
  /*  
#include<iostream>
using namespace std;
int main(){
int n,k=1;
int i=1,j=1;
cin>>n;
for(i=1;i<=n; i++){
    for(j=1;j<=n; j++){
        cout<<j;
        
        
        k++;
    }
    cout<<endl;
}
return 0;
}
*/