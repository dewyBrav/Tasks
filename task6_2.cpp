#include <iostream>
#include <string>
#include <utility>

/*Создайте структуру, содержащую имя и оценку учащегося (по шкале от 0 до 100).
Спросите у пользователя, сколько учеников он хочет ввести.
Динамически выделите массив для хранения всех студентов.
Затем попросите пользователя ввести для каждого студента его имя и оценку.
Как только пользователь ввел все имена и оценки,
отсортируйте список оценок студентов по убыванию (сначала самый высокий бал).
Затем выведите все имена и оценки в отсортированном виде.*/

struct Student
{
    std::string name;
    int grade;
};

void Sort(Student *student, int countSt)
{

    for (int i = 0; i < countSt; ++i)
    {
        int temp = i;
        for (int y = i + 1; y < countSt; ++y)
        {
            if (student[y].grade > student[temp].grade)
            {

                temp = y;
            }
        }

        std::swap(student[i], student[temp]);
    }
}
int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    std::cout << "Введите количество студентов: ";
    std::cout << std::endl;

    int countStudents = 0;
    bool cont = false;
    do
    {
        std::cin >> countStudents;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Попробуйте еще раз!!!" << std::endl;
            cont = false;
        }
        else
        {
            std::cin.ignore(32767, '\n');
            cont = true;
        }

    } while (!cont);

    Student *stArray = new Student[countStudents];
    std::cout << "Введите имя студента и его оценку: " << std::endl;
    for (int i = 0; i < countStudents; ++i)
    {
        std::cout << "Введите имя студента: ";
        //не считывает русские символы, only eng
        //std::cin >> stArray[i].name;
        std::getline(std::cin>>std::ws, stArray[i].name);
        std::cout << "Оценка: ";
        std::cin >> stArray[i].grade;
    }
    Sort(stArray, countStudents);

    for (int i = 0; i < countStudents; ++i)
    {
        std::cout << stArray[i].name << " has " << stArray[i].grade << std::endl;
    }

    delete[] stArray;
    return 0;
}