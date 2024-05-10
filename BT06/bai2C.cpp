#include <iostream>
#include <string>

using namespace std;

void creatWords(int N, int K, string word = "") {
    if (K == 0) {
        cout << word << endl;
        return;
    }

    for (char letter = 'a'; letter < 'a' + N; ++letter) {
        if (word.find(letter) == string::npos) {
            string newWord = word + letter;
            creatWords(N, K - 1, newWord);
        }
    }
}

int main() {
    int N, K;
    cin>> N>>K;
    if (N < K) {
        return 1;
    }

    creatWords(N, K);

    return 0;
}
