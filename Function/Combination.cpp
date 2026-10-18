#include<iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact *=i;
            
    }
    return fact;
}

int main(){
    int n,r;
    cout<<"enter n and r:"; // correct input(10,4 [Input fist is always greater then b ])
    cin>>n>>r;

    // int ncr = fact(n) / (fact(r)*fact(n-r));  ncr
      int npr = fact(n) /(fact(n-r));  //npr
    cout<<npr;
}