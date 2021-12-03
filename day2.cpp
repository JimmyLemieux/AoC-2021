#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <utility>
#include <sstream>

using namespace std; 


void solve1(vector<pair<string, int> > &input) {

    int x = 0, y = 0;

    for (auto i : input) {
        if (i.first == "forward") {
            x += i.second;
        } else if (i.first == "up") {
            y -= i.second;
            if (y < 0) y = 0;
        } else {
            y += i.second;
        }
    }

    cout << x * y << endl;
}

void solve2(vector<pair<string, int> > &input) {
    int x = 0, y = 0, z = 0;

    for (auto i : input) {
        if (i.first == "forward") {
            x += i.second;
            y += (z * i.second);
        } else if (i.first == "up") {
            z -= i.second;
        } else if (i.first == "down") {
            z += i.second;
        }
    }

    cout << x * y << endl;  


}

int main() {
    ifstream f;

    f.open("./inputs/in2.txt");
    string s;
    int n;
    vector<pair<string, int> > in;

    while(f >> s >> n) {
        in.push_back(make_pair(s, n));
    }

    solve2(in);
    

    return 0;
}