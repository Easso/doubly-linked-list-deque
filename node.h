#include <iostream>

class Node {
    private:
        Node *prev;
        Node *next;
        std::string url;
        std::string name;
    public:
        Node();
        Node(std::string new_url, std::string new_name);
        ~Node();
        Node *get_next();
        Node *get_prev();
        void set_next(Node *next_node);
        void set_prev(Node *prev_node);
        std::string get_name();
        std::string get_url();
};