#include <iostream>
using namespace std;

long sumOfAP(int a, int d, long n)
{
    return (n / 2.0) * (2 * a + (n - 1) * d);
}

int main() 
{
	long b; cin >> b;
	long SumOfOdd = sumOfAP(1, 2, b);
	long SumOfEven = sumOfAP(2, 2, b);
	cout << SumOfOdd << " " << SumOfEven;
	return 0;
}
