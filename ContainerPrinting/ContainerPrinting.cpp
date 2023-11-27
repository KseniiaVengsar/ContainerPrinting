// ContainerPrinting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Нужно реализовать шаблонную функцию, которая печатает содержимое контейнера.Контейнер может быть любым

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>
#include <iterator>

template <typename TContainer>

void print_container(TContainer& container) {

    for (const auto& element : container) {
        std::cout << element <<" ";
    }
    std::cout << std::endl;
}


int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four one three two. помните почему такой порядок? :)
    
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
