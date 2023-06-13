#include <iostream>
#include "node.h"

//default constructor in case of invalid inputs
Node::Node() {
    next = nullptr;
    prev = nullptr;
    url = "";
    name = "";
};
//constructor
Node::Node(std::string new_url, std::string new_name) {
    url = new_url;
    name = new_name;
    next = nullptr;
    prev = nullptr;
};
//destructor
Node::~Node() {
    next = nullptr;
    prev = nullptr;
};
//return next node pointed to
Node* Node::get_next() {
    return next;
};
//return previous node pointed to
Node* Node::get_prev() {
    return prev;
};
//set next to new node
void Node::set_next(Node *next_node) {
    next = next_node;
};
//set prev to new node
void Node::set_prev(Node *prev_node) {
    prev = prev_node;
};
//return the name stored
std::string Node::get_name() {
    return name;
};
//return the url stored
std::string Node::get_url() {
    return url;
};


