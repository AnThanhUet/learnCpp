#include <iostream>

template <class val>
void swap(val &a, val &b)
{
	val temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 2;
	int y = 3;
	swap(x,y);
	std::cout << x << " "<< y;	
	return 0;
}
