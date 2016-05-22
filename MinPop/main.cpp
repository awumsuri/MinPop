#include <iostream>
#include <cstdio>
#include <stack>
#include "MinStack.h"
using namespace std;

int main() {
    MinStack s;
    s.push(90);
    s.push(5);
    s.push(2);
    s.push(1);
    s.push(-1);
    s.push(90);
    
    while (!s.empty()) {
   
        cout << "Stack Values:" <<  s.top();
        cout << " Min Values:" << s.MinPop() << endl;
        s.pop();
    }
    
    cout << "Min:" << s.MinPop() << endl;
    
    return 0;
}