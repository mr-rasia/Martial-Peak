#include <iostream>
using namespace std;
void f(int count) {
    if (count == 4) return;
    cout << count << endl;
    f(count + 1); // increment count in recursive call
}

int main() {
    int count = 0;
    f(count);
    return 0;
}