#include "Queue.h"

Queue::Queue(/* args */)
{
    isRemove=false;
}

Queue::~Queue()
{
}

void Queue::addBack(int n){
    if(isRemove && values.size()!=0) values.pop_back();
    values.push_back(n);
    isRemove=false;
}
void Queue::removeFront(){
    int s=values.size();
    for (size_t i = 1; i < values.size(); i++) values[i-1]=values[i];
    isRemove=true;
}
int Queue::getFront(){
    return values[0];
}
