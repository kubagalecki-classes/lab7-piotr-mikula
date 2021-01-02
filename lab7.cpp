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
    catch (const std::bad_alloc& ba) {
        std::cout << "bad_alloc caught: " << ba.what() << '\n';
    }

    puts("\nOstatnia linijka kodu!");
}