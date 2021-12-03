#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


void solve2(vector<int> &arr) {
        int K = 3;
    int ans = 0;
    int prevSum = INT_MAX;
    for (int i = 0;i<arr.size()-2;i++) {
        int sum  = 0;
        for (int j = i;j<i+K;j++) {
            cout << arr[j] << endl;
            sum += arr[j];
        }
        if (prevSum != INT_MAX) {
            if (sum > prevSum) ans++;
        }
        cout << "----" << endl;
        prevSum = sum;
        
    }
    cout << "ANS:";
    cout << ans << endl;
}

void solve1(vector<int> &arr) {
    int ans = 0;
    for (int i = 1;i<arr.size();i++) {
        if (arr[i] > arr[i-1]) ans++;
    }
    cout << ans << endl;
}

int main() {

    ifstream FILE;
    FILE.open("./inputs/input1.txt");
    int number;
    vector<int> arr;
    while ( FILE >> number) {
        arr.push_back(number);
    }
    solve1(arr);
    solve2(arr);

    return 0;
}