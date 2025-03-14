#pragma once

#include "printer/abstract_printer.hpp"
#include "shapes/shapes.hpp"

class PrinterPerim : public BasePrinter {
public:
    void visit_circle(const Shapes::Circle&) const override;

    void visit_triangle(const Shapes::Triangle&) const override;

    void visit_rectangle(const Shapes::Rectangle&) const override;

    void visit_polyangle(const Shapes::Polyangle&) const override;
};