#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

double median(vector<int> integers) {
    return integers.size() % 2 == 0 ? (integers[integers.size() / 2 - 1] + integers[integers.size() / 2]) / 2.0
                                    : integers[integers.size() / 2];
}

void quartiles(vector<int> integers) {
    const vector<int>::iterator middle_index = integers.begin() + integers.size() / 2;

    const vector<int> first(integers.begin(), middle_index);
    cout << "First quartile: " << median(first) << endl;

    const vector<int> second(integers.size() % 2 == 0 ? middle_index
                                                      : middle_index + 1, integers.end());
    cout << "Third quartile: " << median(second);
}

vector<string> filter(vector<string> v, string key) {
    vector<string> result;
    for (string word : v) {
        if (word.compare(key) != 0) {
            result.push_back(word);
        }
    }
    return result;
}

void count_words() {
    cout << "Please enter some words: \n";

    vector<string> words;
    string word;
    while (cin >> word && word.compare("end") != 0) {
        words.push_back(word);
    }

    while (!words.empty()) {
        word = words[0];
        cout << word << ": " << count(words.begin(), words.end(), word) << endl;
        words = filter(words, word);
    }
}

void word_length() {
    cout << "Please enter some words: \n";

    string word;
    string longest;
    string shortest;
    while (cin >> word && word.compare("end") != 0) {
        if (shortest.length() == 0 || word.length() < shortest.length()) {
            shortest = word;
        }
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    cout << "Longest was " << longest << " and shortest was " << shortest;
}