#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

double median(vector<int> integers) {
    return integers.size() % 2 == 0 ? (integers[integers.size() / 2 - 1] + integers[integers.size() / 2]) / 2.0
                                    : integers[integers.size() / 2];
}

void quartiles(vector<int> integers) {
    const vector<int>::iterator middle_index = integers.begin() + integers.size() / 2;

    const vector<int> first(integers.begin(), middle_index);
    cout << "First quartil: " << median(first) << endl;

    const vector<int> second(integers.size() % 2 == 0 ? middle_index
                                                      : middle_index + 1, integers.end());
    cout << "Third quartil: " << median(second);

}