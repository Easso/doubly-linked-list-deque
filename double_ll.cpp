#include "double_ll.h"
#include <iostream>


double_ll::double_ll() {
    head = new Node;
    tail = new Node;
    head->set_next(tail);
    head->set_prev(nullptr);
    tail->set_prev(head);
    tail->set_next(nullptr);
};
double_ll::~double_ll() {
    Node *destructor = head->get_next();
    while (destructor != tail) {
        Node *temp = destructor->get_next();
        destructor->set_next(nullptr);
        destructor->set_prev(nullptr);
        delete destructor;
        destructor = temp;
    }
    head->set_next(nullptr);
    head->set_prev(nullptr);
    tail->set_next(nullptr);
    tail->set_prev(nullptr);
    delete head;
    delete tail;
};

void double_ll::push_front(std::string name, std::string url) {
    Node *new_node = new Node(url, name);
        new_node->set_prev(head);
        new_node->set_next(head->get_next());
        (head->get_next())->set_prev(new_node);
        head->set_next(new_node);
};

void double_ll::push_back(std::string name, std::string url) {
    Node *new_node = new Node(url, name);
    
        new_node->set_prev(tail->get_prev());
        new_node->set_next(tail);
        (tail->get_prev())->set_next(new_node);
        tail->set_prev(new_node);
};

void double_ll::pop_front() {
    Node *temp = (head->get_next());
    head->set_next(temp->get_next());
    (head->get_next())->set_prev(head);
    delete temp;    
};
void double_ll::pop_back() {
    Node *temp = tail->get_prev();
    tail->set_prev(temp->get_prev());
    (tail->get_prev())->set_next(tail);
    delete temp;
};
void double_ll::clear() {
    while (tail->get_prev() != head) {
       pop_back();
    }
};

Node double_ll::front() { 
    return *head->get_next();
};

Node double_ll::back() {
    return *tail->get_prev();
};

void double_ll::find(std::string searched_name) {
    Node *current = tail->get_prev();
    bool found = false;
    while (current != head) {
        if (current->get_name() == searched_name) {
            std::cout << "found \"" << current->get_name() << "\" \"" << current->get_url() <<"\"" << std::endl;
            found = true;
            break;
        }
        current = current->get_prev();
    }
    if (!found) {
        std::cout << "not found \"" << searched_name << "\"" << std::endl;
    }
};
void double_ll::print() {
    Node *current = tail->get_prev();
    while (current != head) {
        std::cout << "\"" << current->get_name() << "\" \"" << current->get_url() << "\"" << std::endl;
        current = current->get_prev();
    }
};

