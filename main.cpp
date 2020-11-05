#include <iostream>

class Trapezoid {
private:
    double height;
    double a;
    double b;
public:
    Trapezoid() {
        height = 0.0;
        a = 0.0;
        b = 0.0;
    }

    Trapezoid(double heightInput, double aInput, double bInput) {
        height = heightInput;
        a = aInput;
        b = bInput;
    }

    double getHeight() const { return height; }

    double getA() const { return a; }

    double getB() const { return b; }

    double getArea() const { return ((a + b) / 2) * height; }

    void printTrapezoidShape() const {
        double whiteSpace = (b - a) / 2;

        std::cout << "Height: " << getHeight() << std::endl;
        std::cout << "A side: " << getA() << std::endl;
        std::cout << "B Side: " << getB() << std::endl;
        std::cout << "Trapezoid Area: " << getArea() << std::endl;
        std::cout << std::endl;

        // Draw trapezoid a side, b side and height
        for (int row = 0; row < height; row++) {
            if (row == 0) {
                for (int col = 0; col < b; col++) {
                    if (col < whiteSpace) {
                        std::cout << " ";
                    } else if (col > whiteSpace && (col < whiteSpace + a)) {
                        std::cout << "*";
                    }
                }
                std::cout << std::endl;
            } else if (row == height - 1) {
                for (int col = 0; col < b; col++) {
                    std::cout << "*";
                }
            } else {
                for (int col = 0; col < b; col++) {

                    if (col == int(whiteSpace) + 1 && row == int(height/2)) {
                        std::cout << "|  height";
                    } else if (col == int(whiteSpace) + 1) {
                        std::cout << "|";
                    } else {
                        std::cout << " ";
                    }
                }
                std::cout << std::endl;
            }

        }

    }
};

int main() {
    double heightInput, aInput, bInput;

    std::cout << "\nPlease enter the height of the trapezoid: " << std::endl;
    std::cin >> heightInput;

    std::cout << "\nPlease enter the width of the a side of the trapezoid: " << std::endl;
    std::cin >> aInput;

    std::cout << "\nPlease enter the width of the b side of the trapezoid: " << std::endl;
    std::cin >> bInput;

    Trapezoid trap((double(heightInput)), (double(aInput)), (double(bInput)));


    trap.printTrapezoidShape();

    return 0;
}
