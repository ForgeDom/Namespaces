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
            cout << "�����: " << title << ", �����: " << author << ", �������: " << pages << endl;
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
            cout << "��'�: " << name << ", ³�: " << age << endl;
        }
    };

    class Teacher {
    private:
        string name;
        string subject;

    public:
        Teacher(string n, string s) : name(n), subject(s) {}

        void printInfo() {
            cout << "ϲ�: " << name << ", �������: " << subject << endl;
        }
    };
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Library::Book book("��� ʳ���", "̳���� �� ���������", 180);
    University::Student student("������", 20);
    University::Teacher teacher("������ ��������", "����������");

    book.printInfo();
    student.printInfo();
    teacher.printInfo();

    return 0;
}
