#include <iostream>
#include "double_ll.h"

class Deque : public double_ll {
    private:
        int current_size;
        int max_size;
    public:
        Deque(int max);
        Deque();
        ~Deque();
        std::string is_empty();
        void find(std::string name);
        void print();
        void popF();
        void popB();
        void pushF(std::string name, std::string url);
        void pushB(std::string name, std::string url);
        Node front_d();
        Node back_d();
        void deque_clear();
        int size_d();
};