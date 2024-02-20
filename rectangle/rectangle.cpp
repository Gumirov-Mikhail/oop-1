#include "rectangle.hpp"
rectangle::rectangle (double dlina, double shirina) {
    dl = dlina;
    sh = shirina;
}
double rectangle::Perimetr () {
    return 2 * (dl + sh);
}
double rectangle::Ploshad () {
    return dl * sh;
}
void rectangle::VyvodDlinaAndShirina () {
    std::cout << "Dlina = " << dl << '\t' << "Shirina = " << sh << std::endl;
}
