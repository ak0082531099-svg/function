#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter number:";
   cin>>n;

   for(int i = 1;i<=n;i++){
    for(int j=1;j<=n-i;j++){  // n+1-i ki jagah n-i
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }

    cout<<endl;
   }
}
