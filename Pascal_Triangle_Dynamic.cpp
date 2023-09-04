#include<iostream>
using namespace std;
void pascaltriangle(int n){ 
   int arr[n][n];
    for(int i=0;i<n;i++){ // Initialising  to 1
        for (int j = 0; j < n; j++)
            arr[i][j]=1;  
    }
   for(int i=1;i<n;i++){
    for(int j=1;j<i;j++){
        arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
    }
   }
    for(int i=0;i<n;i++){
        for(int k=i;k<n;k++){
            cout<<" ";
        }
    for(int j=0;j<i;j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}
int main(){
int n;
cout<<"Enter the numebr of rows ";
cin>>n;
pascaltriangle(n);
return 0;
} 
