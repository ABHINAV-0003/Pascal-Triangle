#include<iostream>
using namespace std;
int nCr(int n,int r){ //nCr calculator
int re=1;
for(int i=0;i<r;i++){
re=re*(n-1);
re=re/(i+1);
} 
return re;
}
void pascaltriangle(int r){ 
    for(int c=1;c<=r;c++){ 
    int num= nCr(r-1,c-1);
    cout<<num<<" ";
    }
    cout<<endl;
}
int main (){ //Find all elements of a given row
int r;
cin>>r;
pascaltriangle(r);
return 0;
}