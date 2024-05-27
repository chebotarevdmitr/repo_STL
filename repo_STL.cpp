
//### Обновленный код с возможностью изменения времени задачи :
#include <iostream>
#include <queue>
#include <string>
#include <vector>

struct Task {
    std::string time;
    std::string description;
};

void displaySchedule(const std::vector<Task>& schedule) {
    for (const auto& task : schedule) {
        std::cout << task.time << " - " << task.description << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    std::vector<Task> schedule;

    // Изначальное расписание
    schedule.push_back({ "07:00", "Просыпаюсь" });
    schedule.push_back({ "07:30", "Завтрак" });
    schedule.push_back({ "08:00", "Идём на работу" });
    schedule.push_back({ "12:00", "Обед" });
    schedule.push_back({ "13:00", "Возвращаемся к работе" });
    schedule.push_back({ "16:00", "Заканчиваем работу" });
    schedule.push_back({ "18:00", "Ужин" });
    schedule.push_back({ "22:00", "Ложимся спать" });

    int choice;
    do {
        std::cout << "\nТекущее расписание:\n";
        displaySchedule(schedule);

        std::cout << "\nМеню:\n";
        std::cout << "1. Добавить задачу\n";
        std::cout << "2. Удалить задачу\n";
        std::cout << "3. Изменить время задачи\n";
        std::cout << "4. Выйти\n";
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        if (choice == 1) {
            Task newTask;
            std::cout << "Введите время задачи (HH:MM): ";
            std::cin >> newTask.time;
            std::cin.ignore(); // Игнорируем оставшийся символ новой строки
            std::cout << "Введите описание задачи: ";
            std::getline(std::cin, newTask.description);
            schedule.push_back(newTask);
        }
        else if (choice == 2) {
            if (!schedule.empty()) {
                schedule.erase(schedule.begin());
                std::cout << "Задача удалена.\n";
            }
            else {
                std::cout << "Расписание пусто.\n";
            }
        }
        else if (choice == 3) {
            if (!schedule.empty()) {
                int taskIndex;
                std::cout << "Введите номер задачи для изменения (1-" << schedule.size() << "): ";
                std::cin >> taskIndex;
                if (taskIndex > 0 && taskIndex <= schedule.size()) {
                    std::cout << "Введите новое время задачи (HH:MM): ";
                    std::cin >> schedule[taskIndex - 1].time;
                }
                else {
                    std::cout << "Неверный номер задачи.\n";
                }
            }
            else {
                std::cout << "Расписание пусто.\n";
            }
        }
    } while (choice != 4);

    return 0;
}
/*
### Объяснение изменений :
1. * *Использование `std: : vector` вместо `std::queue`* * :
-Мы заменили `std: : queue` на `std::vector`, чтобы иметь возможность доступа к элементам по индексу и изменять их.

2. * *Функция `displaySchedule`* * :
-Обновлена для работы с `std: : vector`.

3. * *Добавление опции изменения времени задачи * *:
-В меню добавлена опция "3. Изменить время задачи".
- Пользователь вводит номер задачи, которую хочет изменить.
- Программа проверяет корректность введенного номера и позволяет изменить время задачи.

### Как использовать программу :
1. * *Запуск программы * *:
    -Скомпилируйте и запустите программу на вашем компьютере.

    2. * *Просмотрите текущее расписание * *:
    -Программа автоматически отобразит текущее расписание.

    3. * *Добавление задачи * *:
    -Выберите опцию "1" в меню.
    - Введите время задачи в формате "HH:MM".
    - Введите описание задачи.

    4. * *Удаление задачи * *:
    -Выберите опцию "2" в меню.
    - Первая задача в расписании будет удалена.

    5. * *Изменение времени задачи * *:
    -Выберите опцию "3" в меню.
    - Введите номер задачи, которую хотите изменить.
    - Введите новое время задачи в формате "HH:MM".

    6. * *Выход из программы * *:
    */
