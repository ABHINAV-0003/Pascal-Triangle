#include<iostream>
using namespace std;
int nCr(int n,int r){ //nCr calculator
int re=1;
for(int i=0;i<r;i++){
re=re*(n-i);
re=re/(i+1);
} 
return re;
}
int pascaltriangle(int r ,int c){ 
    int num= nCr(r-1,c-1);
    return num;
}
int main (){   //Given row and column find element
int r,c;
cin>>r>>c;
cout<<pascaltriangle(r,c);
    return 0;
}