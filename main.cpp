#include "vector.hpp"
#include <iostream>
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4
#define FIVE 5
#define SIX 6
#define SEVEN 7
using namespace std;

int main(void)
{
    int in[FIVE] = {ONE, TWO, THREE, FOUR, FIVE};
    myvector<int, FIVE> vec(in);
    vec.pushBack(SIX);
    vec.pushBack(SEVEN);
    vec.checkCreated();
    auto *current = vec.begin();
    for (auto &element : vec) {
        cout << "{" << element << "," << current << "}"
             << " ";
        current++;
    }
    cout << endl;
    return 0;
}
