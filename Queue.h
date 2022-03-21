#include <vector>

class Queue
{
private:
    std::vector<int> values;
    bool isRemove;
public:
    Queue(/* args */);
    ~Queue();
    void addBack(int n);
    void removeFront();
    int getFront();
};
