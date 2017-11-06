#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int findSum(int X, int N, int num){
    //check if we overshoot, still need to add more, or have a match
    if(pow(num, N) < X)
    //check the next increment assuming we add the past number or throw it away
        return findSum(X - pow(num, N), N, num + 1) + findSum(X, N, num + 1);
    else if(pow(num, N) == X)
        return 1;
    else
        return 0;
}

int main() {
    int X, N;
    cin >> X >> N;
    cout << findSum(X, N, 1);
    return 0;
}