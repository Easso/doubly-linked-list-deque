#include <iostream>
#include "node.h"

class double_ll {
    private:
       Node *head;
       Node *tail;
    public:
        double_ll();
        ~double_ll();
        void push_front(std::string name, std::string url);
        void push_back(std::string name, std::string url);
        void pop_front();
        void pop_back();
        void clear();
        Node front();
        Node back();
        void find(std::string name_to_search);
        void print();
};      

