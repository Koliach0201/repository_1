/*//Утраченнный клад
//Персонализированная приключенческая игра
//Комментарий для коммита
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;

    // получаю информацию
    cout << "Добро пожаловать в утраченный клад!\n\n";
    cout << "Пожалуйста, заполните следующее для вашего персонализированного приключения\n\n";
    cout << "Введите количество искателей: ";
    cin >> adventurers;
    cout << "Введите количество убитых (меньше первого): ";
    cin >> killed;
    survivors = adventurers - killed;
    cout << "Введите имя пользователя: ";
    cin >> leader;
    // сюжет
    cout << "\nОтважная группа из " << adventurers << " искателей отправилась на поиски ";
    cout << "затерянного сокровища Древних Гномов. ";
    cout << "Группу возглавлял тот самый легендарный негодяй - " << leader << ". \n";
    cout << "\nПо пути, банда мародерствующих огров устроила на группу засаду. ";
    cout << "Все храбро сражались под командованием " << leader;
    cout << ". И огры были побеждены, но ценой жизни некоторых искателей. ";
    cout << "Из искателей " << killed << " были повержены. ";
    cout << "Остались только " << survivors << " в группе.\n";
    cout << "\nГруппа искателей была готова оставить всякую надежду. ";
    cout << "Но когда хоронили умерших. ";
    cout << "Они наткнулись на закопанное состояние. ";
    cout << "Итак, искатели приключений поделили " << GOLD_PIECES << " золотых кусков.";
    cout << leader << " получил остаток " << (GOLD_PIECES % survivors);
    cout << " чтобы все было честно.\n";
    return 0;
}*/


/*// Программа Score Rater 2.0
// Демонстрирует работу с условием else

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int score;
    cout << "Введите свой результат: ";
    cin >> score;

    if (score >= 1000)
    {
        cout << "Вы набрали 1000 или больше. Впечатляет!\n";
    }
    else
    {
        cout << "Вы набрали меньше 1000.\n";
    }
    return 0;
}*/


/*// Программа Score Rater 3.0
// Демонстрирует работу с последовательностью if else - if else

#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    int score;
    cout << "Введите свой результат: ";
    cin >> score;

    if (score >= 1000) 
    {
        cout << "Вы набрали 1000 или больше. Впечатляет!\n";
    }
    else if (score >= 500) 
    {
        cout << "Вы набрали 500 или больше. Отлично.\n";
    }
    else if (score >= 250) 
    {
        cout << "Вы набрали 250 или больше. Достойно.\n";
    }
    else 
    {
        cout << "Вы набрали меньше 250. Нечем хвастаться.\n";
    }
    return 0;
}*/


/*// Программа Menu Chooser
// Демонстрирует работу с инструкцией switch

#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    cout << "Уровни сложности\n\n";
    cout << "1 - Легкий\n";
    cout << "2 - Нормальный\n";
    cout << "3 - Сложный\n";

    int choice;
    cout << "Выбор: ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout << "Вы выбрали - Легкий.\n";
        break;
        case 2:
            cout << "Вы выбрали - Нормальный.\n";
        break;
        case 3:
            cout << "Вы выбрали - Сложный.\n";
        break;
        default:
            cout << "Вы сделали неправильный выбор.\n";
    }
    return 0;
}*/


/*// Программа Play Again
// Демонстрирует работу с циклами while

#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    char again = 'y';
    while (again == 'y') 
    {
        cout << "\n**Сыграйте в захватывающую игру**";
        cout << "\nХотите сыграть еще раз? (y/n): ";
        cin >> again;
    }
    cout << "\nХорошо, Пока.";
    return 0;
}*/


/*// Программа Play Again 2.0
// Демонстрирует работу с циклами do

#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    char again;
    do 
    {
        cout << "\n**Сыграйте в захватывающую игру**";
        cout << "\nХотите сыграть еще раз? (y/n): ";
        cin >> again;
    } while (again == 'y');
    cout << "\nХорошо, Пока.";
    return 0;
}*/


/*// Программа Finicky Counter
// Демонстрирует работу с инструкциями break и continue

#include <iostream>

using namespace std;

int main() 
{
    int count = 0;
    while (true) 
    {
        count += 1;
        // заканчиваем цикл, если значение count превышает 10
        if (count > 10)
        {
            break;
        }
        // пропускаем число 5
        if (count == 5)
        {
            continue;
        }
        cout << count << endl;
    }
    return 0;
}*/


