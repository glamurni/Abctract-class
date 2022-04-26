// Абстрактный класс Фигура.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Figure
{
public:
    virtual double getSquare() = 0;
    virtual double getPerimeter() = 0;
    virtual void showFigureType() = 0;
};
class Rectangle : public Figure
{
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h)
    {
    }
    double getSquare() override
    {
        return width * height;
    }
    double getPerimeter() override
    {
        return width * 2 + height * 2;
    }
    void showFigureType()
    {
        std::cout << "Rectangle" << endl;
    }
};
class Circle : public Figure
{
private:
    double radius;
public:
    Circle(double r) : radius(r)
    {
    }
    double getSquare() override
    {
        return radius * radius * 3.14;
    }
    double getPerimeter() override
    {
        return 2 * 3.14 * radius;
    }
    void showFigureType()
    {
        std::cout << "Circle" <<endl;
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    Rectangle rect(30, 50);
    Circle circle(30);

 cout << "Площадь прямоугольника: " << rect.getSquare() <<endl;
cout << "Площадь круга: " << circle.getSquare() << endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
