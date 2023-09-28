
#include<iostream>
using namespace std;

int main(){
int i,j,k,rows;
cout<<"Enter pyramid star pattern row: ";
cin>>rows;
cout<<"Pyramid star pattern\n";
for(i=1;i<=rows;i++){
    for(j=0;j<=rows-i;j++){
        cout<<" ";
    }
    for(k=0;k<i*2-1;k++){
        cout<<"*";
    }
    cout<<"\n";
}
return 0;
}


