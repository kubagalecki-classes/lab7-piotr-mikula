#include <iostream>
#include <variant>
#include <vector>

class Informer
{
public:
    Informer() { std::cout << "Utworzono Informer" << std::endl; }
    ~Informer() { std::cout << "Zniszczono Informer" << std::endl; }
};

double podziel(int a, int b)
{
    if (b == 0)
        throw 0;
    else
        return (double)a / (double)b;
}

int main()
{
    int a, b;

    std::cout << "Podaj liczbe calkowita a: ";
    std::cin >> a;

    std::cout << "Podaj liczbe calkowita b: ";
    std::cin >> b;

    try {
        Informer informer1;
        std::cout << podziel(a, b) << std::endl;
    }
    catch (int& i) {
        std::cout << "Nie możesz dzielić przez " << i << std::endl;
    }

    puts("\nOstatnia linijka kodu!");
}