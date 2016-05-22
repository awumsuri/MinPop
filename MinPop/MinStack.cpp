//
//  MinStack.cpp
//  MinPop
//
//  Created by Suri on 5/21/16.
//  Copyright © 2016 Suri. All rights reserved.
//

#include "MinStack.h"

int MinStack::MinPop(){
    if(!minStack.empty())
        return minStack.top();
    return 0;
}
void MinStack::push(int _v) {
    MinStack::stack::push(_v);
    
    if(minStack.empty() || _v < minStack.top()) {
        minStack.push(_v);
    }    
    else {
        minStack.push(minStack.top());
        return;
    }    
}
void MinStack::pop() {
    minStack.pop();
    MinStack::stack::pop();
}