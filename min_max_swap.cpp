#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x = 20;
    int y = 100;
    // min function
    cout << min({1, 2, 3, 4, 5, 6}) << endl;

    // max function
    cout << max({1, 2, 3, 4, 5, 6}) << endl;

    // swap function
    swap(x, y);
    cout << x << " " << y << endl;

    return 0;
}