#include <iostream>
using namespace std;
void sum()
{
	int a = 0, b = 1, next;
	cout << a << " , " << b;
	next = a + b;
	while (next <= 55)
	{
		cout << " , " << next;
		a = b;
		b = next;
		next =a+ b;
	}
}
	int main()
	{
		sum();
		return 0;
	}