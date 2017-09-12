#include <iostream>

using namespace std;

int main()
{
long long int i = 2;
    long long int max = 0;
	while(i*i <= 600851475143) {
		if(600851475143 % i == 0) {
			bool check = true;
			for( int n = 2; n*n <= i; ++n) {
				if(i % n == 0) {
					check = false;
					break;
					}
				}
			if(check)
				max = i;
			}
		++i;
		}
	if(600851475143 % max == 0)
	cout << max << endl;
    return 0;
}
