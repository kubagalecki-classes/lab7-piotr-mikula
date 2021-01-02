#include <iostream>
#include <vector>

int main()
{
    std::cout << "Podaj liczbe calkowita: ";
    int n;
    std::cin >> n;
    try {
        std::vector< int > vec(n, 0);
    }
    catch (...) {
        std::cout << "Wyjatek!\n";
    }

    puts("\nOstatnia linijka kodu!");
}