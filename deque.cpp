#include "deque.h"
#include <iostream>


Deque::Deque(int max) {
    max_size = max;
    current_size = 0;
    std::cout << "success" << std::endl;
}
Deque::Deque() {
    max_size = 0;
    current_size = 0;
};
Deque::~Deque() {
    max_size = 0;
    current_size = 0;
}
std::string Deque::is_empty() {
    if (current_size == 0) {
        std::cout << "empty 1" << std::endl;
    } else if (current_size > 0) {
        std::cout << "empty 0" << std::endl;
    }
    return "";
}
void Deque::find(std::string searched_name) {
    double_ll::find(searched_name);    
}
void Deque::print() {
    if (current_size > 0) {
        double_ll::print();
    } else {
        std::cout << "deque is empty" << std::endl;
    }
}
void Deque::popF() {
    if (current_size >= 1) {
        double_ll::pop_front();
        current_size = current_size - 1;
        std::cout << "success" << std::endl;
    } else {
        std::cout << "failure" << std::endl;
    }
}
void Deque::popB() {
    if (current_size >= 1) {
        double_ll::pop_back();
        current_size = current_size - 1;
        std::cout << "success" << std::endl;
    } else {
        std::cout << "failure" << std::endl;
    }
}
void Deque::pushF(std::string name, std::string url) {
    if (current_size == max_size) {
        double_ll::pop_back();
        --current_size;
    }
    double_ll::push_front(name, url);
    ++current_size;
    std::cout << "success" << std::endl;
}
void Deque::pushB(std::string name, std::string url) {
    if (current_size == max_size) {
        double_ll::pop_front();
        --current_size;
    }
    double_ll::push_back(name, url);
    ++current_size;
    std::cout << "success" << std::endl;
}
void Deque::deque_clear() {
    double_ll::clear();
    current_size = 0;
    std::cout << "success" << std::endl;
}
int Deque::size_d() {
    std::cout << "size is " << current_size << std::endl;
    return current_size;
}
Node Deque::front_d() {
    if (current_size > 0) {
        std::cout << "front is " << double_ll::front().get_name() << "-" << double_ll::front().get_url() << std::endl;
        return double_ll::front();
    } else {
        std::cout << "failure" << std::endl;
    }
    return Node();
}
Node Deque::back_d() {
if (current_size > 0) {
        std::cout << "back is " << double_ll::back().get_name() << "-" << double_ll::back().get_url() << std::endl;
        return double_ll::back();
    } else {
        std::cout << "failure" << std::endl;
    }
    return Node();
}