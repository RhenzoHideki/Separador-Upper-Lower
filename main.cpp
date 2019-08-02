#include <iostream>

using namespace std;

void inverte(string & s) {
    int p1=0, p2=s.size()-1;

    while (p1 < p2) {
        char c = s[p1];
        s[p1] = s[p2];
        s[p2] = c;
        p1++;
        p2--;
    }
}

int main() {
    string w;

    getline(cin, w);
    inverte(w);
    cout << w << endl;
    return 0;
}