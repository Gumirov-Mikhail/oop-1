#include <iostream>

class rectangle {
public:
    rectangle () = default;
    rectangle (double dlina, double shirina) {
        dl = dlina;
        sh = shirina;
    }
    double Perimetr () {
        return 2 * (dl + sh);
    }
    double Ploshad () {
        return dl * sh;
    }
    void VyvodDlinaandShirina () {
        std::cout << dl << '\t' << sh << std::endl;
    }
private:
    double dl = 0.0;
    double sh = 0.0;
};

int main() {
    double dlina;
    double shirina;
    std::cin >> dlina >> shirina;
    rectangle Prymoygolnik1(dlina, shirina);
    std::cout << Prymoygolnik1.Perimetr() << std::endl;
    std::cout << Prymoygolnik1.Ploshad() << std::endl;
    Prymoygolnik1.VyvodDlinaandShirina();
}
