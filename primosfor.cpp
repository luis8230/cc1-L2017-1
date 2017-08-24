#include <iostream>

using namespace std;

int main()
{
    int a,i,n;
    a=0;
    cout<<"Ingrese numero"<<endl;
    cin>>n;

    for(i=1;i<n;i=i+1){
        if(n%i==0)
        a=a+1;
        }

    if(a!=1)
    cout<<"No es Primo";
    else
    cout<<"Si es Primo";

    return 0;
}
