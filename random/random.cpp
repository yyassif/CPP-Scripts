#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>
#include <stdio.h>
using namespace std;

template <typename T>
T random(T a = 0, T b = 1, bool is_int = false) {
    srand(time(NULL));
    double arbitary = fmod(rand(), b - a);
    if (is_int) {
        return int(arbitary + a);
    } else {
        return arbitary + a;
    }
}

int main(int argc, char const *argv[])
{
    cout << random(5.16, 20.36); // Return double typed numbers  
    cout << random(5.16, 20.36, true); // Return int typed numbers  
    return 0;
}
