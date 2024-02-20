#ifndef UNTITLED_RECTANGLE_HPP
#define UNTITLED_RECTANGLE_HPP
class rectangle {
public:
    rectangle () = default;
    rectangle (double dlina, double shirina);
    double Perimetr ();
    double Ploshad ();
    void VyvodDlinaAndShirina ();
    ~rectangle() = default;
private:
    double dl = 0.0;
    double sh = 0.0;
};
#endif //UNTITLED_RECTANGLE_HPP
