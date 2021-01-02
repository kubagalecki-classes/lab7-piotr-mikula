#include <iostream>
#include <variant>
#include <vector>

int main()
{
    std::cout << "Podaj liczbe calkowita a: ";
    int a;
    std::cin >> a;

    std::cout << "Podaj liczbe calkowita b: ";
    int b;
    std::cin >> b;

    try {
        std::vector< int >                      vec(a, 0);
        std::variant< int, float, std::string > var;
        if (b % 2 == 0)
            var = 42;
        else
            var = "nieparzyste";
        std::cout << std::get< int >(var) << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "exception caught: " << e.what() << '\n';
    }

    puts("\nOstatnia linijka kodu!");
}