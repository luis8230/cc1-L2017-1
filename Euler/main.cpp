#include <iostream>

using namespace std;

int main(){
    int a=1;
    int b=1;
    int c;
    int sum= 0;
    {
	while(b <= 4000000) {
		if(b % 2 == 0)
			sum += b;
		c=b;
		b += a;
		a=c;
		}
	cout << sum << endl;}
    return 0;
}
