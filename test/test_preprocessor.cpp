#include <iostream>
#define BLO

int main()
{

#ifdef ALO
	std::cout << "alo";
#endif

#ifdef BLO
	std::cout << "blo";
#endif

	return 0;
}
