﻿/*//Утраченнный клад
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

/*// Программа Designers Network
// Демонстрирует работу с логическими операторами

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string username;
    string password;
    bool success;
    cout << "\tGame Designer's Network\n";
    do 
    {
        cout << "\nUsername: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;
        if (username == "S.Meier" && password == "civilization") 
        {
            cout << "\nHey, Sid.";
            success = true;
        }
        else if (username == "S.Miyamoto" && password == "mariobros") 
        {
            cout << "\nWhat's up, Shigeru?";
            success = true;
        }
        else if (username == "W.Wright" && password == "thesims") 
        {
            cout << "\nHow goes it,Will?";
            success = true;
        }
        else if (username == "guest" || password == "guest") 
        {
            cout << "\nWelcome, guest.";
            success = true;
        }
        else 
        {
            cout << "\nYour login failed.";
            success = false;
        }
    } while (!success);
    return 0;
}*/


/*// Программа Die Roller
// Демонстрирует генерирование случайных чисел

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(static_cast<unsigned int>(time(0)));
    // запускаем генератор случайных чисел
    int randomNumber = rand(); // генерируем случайное число
    int die = (randomNumber % 6) + 1; // получаем число между 1 и 6
    cout << "You rolled a " << die << endl;
    return 0;
}*/


/*// Игра Guess My Number
// Классическая игра в угадывание чисел

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    srand(static_cast<unsigned int>(time(0))); // запускаем генератор случайных чисел
    int secretNumber = rand() % 100 + 1; // случайное число в диапазоне от 1 до 100
    int tries = 0;
    int guess;
    cout << "\tДобро пожаловать в «Угадай мой номер»\n\n";

    do 
    {
        cout << "Введите предположение: ";
        cin >> guess;
        ++tries;
        if (guess > secretNumber)
        {
            cout << "Слишком высоко!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Слишком низко!\n\n";
        }
        else 
        {
            cout << "\nВот и все! Вы угадали это с " << tries << " попытки!\n";
        }
    } while (guess != secretNumber);
    return 0;
}*/


// Guess My Number 2.0
// Классическая игра в угадывание чисел

#include <iostream>

using namespace std;

// игровой цикл

int main()
{
    // настройки
    setlocale(LC_ALL, "Russian");
    int secretNumber;
    cout << "Введите число от 0 до 100" << endl;
    cin >> secretNumber;

    int tries = 0;
    int guess, max = 100, min = 0;

    cout << "\tДобро пожаловать в «Угадай мой номер» 2.0\n\n";

    do
    {
        // получаем данные игрока

        guess = min + (max - min) / 2;
        cout << " Guess: " << guess << endl;
        ++tries;

        // обновляем внутренности и дисплей игры

        if (guess > secretNumber)
        {
            cout << "Слишком высоко!\n\n";
            max = guess;
        }
        else if (guess < secretNumber)
        {
            cout << "Слишком низко!\n\n";
            min = guess;
        }
        else
        {
            cout << "\nВот и все! Вы угадали это с " << tries << " попытки!\n";
        }
    } while (guess != secretNumber);

    return 0;
}