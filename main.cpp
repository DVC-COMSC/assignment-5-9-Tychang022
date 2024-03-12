
#include <iostream>
using namespace std;

int main()
{
	int prev = 0, current = 0;
	int i = 0;
	do {
		cin >> prev >> current;
		if  (i >= 1 && prev < current)
		{
			break;
		}
		i++;
 		} while (prev > current);
		std::cout << " " << endl;
		exit (0);
}
