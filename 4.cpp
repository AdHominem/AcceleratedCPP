#include <iostream>
#include <iomanip>
#include <limits>
#include <vector>

using namespace std;

// 4.2
void squares() {
    for (int i = 0; i <= 100; ++i) {
        cout << i << setw(10) << i * i << endl;
    }
}

int digits(int n) {
    if (n < 0) n = n == INT32_MIN ? INT32_MAX : -n;
    if (n < 10) return 1;
    if (n < 100) return 2;
    if (n < 1000) return 3;
    if (n < 10000) return 4;
    if (n < 100000) return 5;
    if (n < 1000000) return 6;
    if (n < 10000000) return 7;
    if (n < 100000000) return 8;
    if (n < 1000000000) return 9;
    else return 10;
}

// 4.3
void squares_robust() {
    for (int i = 0; i < 1000; ++i) {
        cout << i << setw(digits(999 * 999) + 1) << i * i << endl;
    }
}

// 4.5
istream& read(istream& in, vector<string>& words) {
    if (in) {
        words.clear();
        string word;
        while (in >> word && word.compare("end") != 0) {
            words.push_back(word);
        }
        in.clear();
    }
    return in;
}