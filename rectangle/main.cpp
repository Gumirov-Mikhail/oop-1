#include <iostream>
#include "rectangle.cpp"

int main() {
    double dlina;
    double shirina;
    std::cin >> dlina >> shirina;
    rectangle Prymoygolnik1(dlina, shirina);
    std::cout << "Perimetr = " << Prymoygolnik1.Perimetr() << std::endl;
    std::cout << "Ploshad = " << Prymoygolnik1.Ploshad() << std::endl;
    Prymoygolnik1.VyvodDlinaAndShirina();
}
