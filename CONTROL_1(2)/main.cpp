#include <iostream>

using namespace std;
int SUMAR(int A[],int m){
  int sum=0;
  if(m==0)
    return sum= sum+A[0];
  else
    return sum=  A[m]+ SUMAR(A,m-1);

  }
int main()
{
    int m= 2;
    int A[] = {5,3,2};

    cout<<"la suma de elementos es : "<< SUMAR( A, m);
    return 0;
}
