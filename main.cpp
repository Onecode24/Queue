#include <iostream>
#include "Queue.h"

using namespace std;

int main(){
    int n, val;
    Queue my_queue;

    cout << "Welcome this is my Dequeue list "<<endl;
    cout <<"1. To add element at back"<<endl;
    cout <<"2. To remove element at front"<<endl;    
    cout <<"3. To get element at front"<<endl;
    cout <<"4. To exit this program"<<endl;
    while (true)
    {
        cout << "Your choice : ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter number to add : ";cin >> val;
            my_queue.addBack(val);
            break;
        case 2:
            my_queue.removeFront();
            break;
        case 3:
            cout << my_queue.getFront()<<endl;
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "Invalid choice"<<endl;
            break;
        }

    }
    
}