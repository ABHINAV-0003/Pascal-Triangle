#include<iostream>
using namespace std;
long long nCr(int n,int r){ //nCr calculator
long long re=1;
for(int i=0;i<r;i++){
re=re*(n-i);
re=re/(i+1);
} 
return re;
}
void pascaltriangle(int n){ //Pascal Triangle Generator
    for(int x=1;x<=n;x++){  
    for(int i=x;i<n;i++){
        cout<<" ";
    }
    for(int c=1;c<=x;c++){ 
    int num= nCr(x-1,c-1);
    cout<<num<<" ";
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