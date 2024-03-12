
#include <iostream>
using namespace std;

int main()
{
	int prev = 0, current = 0;
    cin >> prev;

    cin >> current;

    while (current < prev) {
        
        cout << prev << " ";
        prev = current;
        cin >> current;
    }

    if (current >= prev) {
        cout << prev << endl;
    }

    return 0;
}
    

    