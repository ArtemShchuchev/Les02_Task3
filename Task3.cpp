#include <iostream>

//страна, город, улица, номер дома, номер квартиры и индекс
struct Address
{
    std::string name;
    std::string country = "Россия", city, street;
    unsigned short homeNum = 0, roomNum = 0; // Студия настаивает, что бы переменные были проинициализированы
    unsigned int postcode = 0; // Студия настаивает, что бы переменные были проинициализированы
};

void printAddress(const Address&);

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");   // задаём русский текст
    system("chcp 1251");            // настраиваем кодировку консоли
    std::system("cls");

    std::cout << "Задача 3. Вывод структуры\n";
    std::cout << "-------------------------\n" << std::endl;

    Address jonn{ "Джонн", "USA", "NewYork", "applestr", 123, 25, 235426};
    Address lena;
    lena.name = "Лена";
    lena.city = "Москва";
    lena.homeNum = 23;
    lena.postcode = 123456;
    lena.roomNum = 3;
    lena.street = "Кольцевая";

    printAddress(jonn);
    std::cout << std::endl;

    printAddress(lena);
    std::cout << std::endl;

    return 0;
}


void printAddress(const Address& address)
{
    using namespace std;

    cout << address.name << endl << "-----------" << endl
        << "Страна: " << address.country << endl
        << "Город: " << address.city << endl
        << "Улица: " << address.street << endl
        << "Номер дома: " << address.homeNum << endl
        << "Номер квартиры: " << address.roomNum << endl
        << "Индекс: " << address.postcode << endl;
}

/*
Описание
Создайте структуру для хранения адреса. Структура должна содержать название страны, города, улицы, номер дома, номер квартиры и индекс

Создайте функцию для вывода структуры на консоль

Протестируйте созданную функцию - создайте в коде экземпляры структуры, передайте их в функцию и выведите на консоль получившиеся экземпляры структуры

Пример работы программы
Город: Москва
Улица: Арбат
Номер дома: 12
Номер квартиры: 8
Индекс: 123456

Город: Ижевск
Улица: Пушкина
Номер дома: 59
Номер квартиры: 143
Индекс: 953769
*/