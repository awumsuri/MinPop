//
//  MInStack.h
//  MinPop
//
//  Created by Suri on 5/21/16.
//  Copyright © 2016 Suri. All rights reserved.
//

#ifndef MinStack_h
#define MinStack_h
#include <stack>
#include <string>

class MinStack: public std::stack<int>
{
private:
    std::stack<int> minStack;
public:
    MinStack(){};
    int MinPop();
    void push(int);
    void pop();
};

#endif /* MInStack_h */