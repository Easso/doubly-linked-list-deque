#include "deque.h"
#include <iostream>
//--------helper functions I made to retrieve the url and name from the "'stuff'" format commands are given as--------
std::string extract_name(std::string input);
std::string extract_url(std::string input);

std::string extract_name(std::string input_en) {
    std::string result_en = "";
    int j = 1;
    while (input_en[j] != '\"') {
        result_en = result_en + input_en[j];
        ++j;
    }
    return result_en;
}

std::string extract_url(std::string input_eu) {
    int counter = 0;
    int k = 0;
    std::string result = "";

    while (counter <3) {
        if(input_eu[k] == '\"') {
            ++counter;
        }
        ++k;
    }
    while (input_eu[k] != '\"') {
        result = result + input_eu[k];
        ++k;
    }
    return result;
}
int main () {

    //create a variable for the entry -- "command" "input"
    std::string entry;
    std::getline(std::cin, entry);

    //create variable for type of command
    std::string command;
    int i{0};

    // used to figure which command
    while (entry[i] != ' ') {
        command = command + entry[i];
        ++i;
    }

    std::string input_m{entry.substr(i+1)};
    Deque d1(stoi(input_m));

//--------------------End of the initialization phase --------------------------------


    for (std::string entry; std::getline(std::cin, entry);) {
        i = 0;
        command = "";
        while (entry[i] != ' ' && entry.length() > i) {
        command = command + entry[i];
        ++i;
        }

    std::string input = "";
    //std::cout << command << std::endl;
    // only three commands have a second part  of their entry, so i would go out of scope otherwise
    if (command == "push_front" || command == "push_back" || command == "find") {
      std::string input_in_if = entry.substr(i+1); 
       
      input = input_in_if;
    }

    
    
        if (command == "push_front") {
            d1.pushF(extract_name(input), extract_url(input));
        }
        if (command == "push_back") {
            d1.pushB(extract_name(input), extract_url(input));
        }
        if (command == "pop_front") {
            d1.popF();
        }
        if (command == "pop_back") {
            d1.popB();
        }
        if (command == "clear") {
            d1.deque_clear();
        }
        if (command == "size") {
            d1.size_d();
        }
        if (command == "front") {
            d1.front_d();
        }
        if (command == "back") {
            d1.back_d();
        }
        if (command == "empty") {
            d1.is_empty();
        }
        if (command == "find") {
            d1.find(extract_name(input));
        }
        if (command == "print") {
            d1.print();
        }
        if (command == "exit") {
            return 0;
        }

    }

    return 0;
}