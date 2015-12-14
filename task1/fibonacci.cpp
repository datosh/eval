#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv	) {
    int firstTerm = 1, secondTerm = 1, nextTerm;
    int n = atoi(argv[1]);

    for (int i = 1; i <= n-2; ++i) {
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    cout << nextTerm;

    return 0;
}