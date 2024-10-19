#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

namespace Library {
    class Book {
    private:
        string title;
        string author;
        int pages;

    public:
        Book(string t, string a, int p) : title(t), author(a), pages(p) {}

        void printInfo() {
            cout << "Назва: " << title << ", Автор: " << author << ", Сторінки: " << pages << endl;
        }
    };
}

namespace University {
    class Student {
    private:
        string name;
        int age;

    public:
        Student(string n, int a) : name(n), age(a) {}

        void printInfo() {
            cout << "Ім'я: " << name << ", Вік: " << age << endl;
        }
    };

    class Teacher {
    private:
        string name;
        string subject;

    public:
        Teacher(string n, string s) : name(n), subject(s) {}

        void printInfo() {
            cout << "ПІБ: " << name << ", Предмет: " << subject << endl;
        }
    };
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Library::Book book("Дон Кіхот", "Мігель Де Сервантез", 180);
    University::Student student("Максим", 20);
    University::Teacher teacher("Галина Василівна", "Математика");

    book.printInfo();
    student.printInfo();
    teacher.printInfo();

    return 0;
}
