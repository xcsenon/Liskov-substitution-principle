#include <iostream>

// Базовий клас, що представляє геометричну фігуру
class Shape {
public:
    // Віртуальний метод для отримання площі фігури
    virtual double getArea() const = 0;
};

// Підклас, який реалізує коло
class Circle : public Shape {
private:
    double radius;

public:
    // Конструктор, який приймає радіус кола
    Circle(double r) : radius(r) {}

    // Реалізація віртуального методу для обчислення площі кола
    double getArea() const override {
        return 3.14159 * radius * radius;
    }
};

// Підклас, який реалізує квадрат
class Square : public Shape {
private:
    double side;

public:
    // Конструктор, який приймає довжину сторони квадрата
    Square(double s) : side(s) {}

    // Реалізація віртуального методу для обчислення площі квадрата
    double getArea() const override {
        return side * side;
    }
};

// Функція, яка використовує об'єкт базового класу
void printArea(const Shape& shape) {
    std::cout << "Area: " << shape.getArea() << std::endl;
}

int main() {
    // Створюємо об'єкти підкласів та передаємо їх функції
    Circle circle(5.0);
    Square square(4.0);

    // Викликаємо функцію, яка працює з базовим класом
    printArea(circle); // Площа кола
    printArea(square); // Площа квадрата

    return 0;
}
