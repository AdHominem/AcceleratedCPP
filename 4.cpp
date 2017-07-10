#include <iostream>
#include <iomanip>

using namespace std;

// 4.2
void squares() {
    for (int i = 0; i < 100; ++i) {
        cout << i << setw(10) << i * i << endl;
    }
}