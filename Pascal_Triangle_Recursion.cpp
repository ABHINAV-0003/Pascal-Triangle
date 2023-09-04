#include<iostream>
using namespace std;
int nCr(int n,int r){
   if(r==0||r==n){
    return 1;
   }
   else{
    return nCr(n-1,r-1)+nCr(n-1,r);
   }
}
   void pascaltriangle(int n){
    for(int i=0;i<n;i++){
        for(int k=i;k<n;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){ 
        cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
   }

int main (){ 
int n;
cin>>n;
pascaltriangle(n);
return 0;
}