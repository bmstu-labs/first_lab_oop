#include "factory/rectangle.hpp"
#include "shapes/rectangle.hpp"

#include "exceptions.hpp"

Shapes::Shape *RectangleFactory::create_shape() const {
    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;

    Shapes::Vector left_bottom_point;
    std::cin >> left_bottom_point;

    Shapes::Vector right_upper_point;
    std::cin >> right_upper_point;

    if (Shapes::Vector::one_point_check(right_upper_point, left_bottom_point)) {
        throw OnePointError("Two points cannot have the same coordinates");
    } 
    
    return new Shapes::Rectangle(name, left_bottom_point, right_upper_point);
}