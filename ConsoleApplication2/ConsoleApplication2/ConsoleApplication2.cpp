#pragma comment(lib, "audiere.lib")
#include <iostream>

#include "conio.h"
#include "windows.h"
#include "audiere.h"

using namespace std;
using namespace audiere;


int main()
{
    string filename, re1,mi1,fa1,sol1,la1,si1,do4, do_oc;
    do_oc = "C://Users//svita//source//repos//ConsoleApplication3//Debug//do-.wav";
    do4 = "C://Users//svita//source//repos//ConsoleApplication3//Debug//do.wav";
    si1 = "C://Users//svita//source//repos//ConsoleApplication3//Debug//si.wav";
    la1 = "C://Users//svita//source//repos//ConsoleApplication3//Debug//la.wav";
    sol1 = "C://Users//svita//source//repos//ConsoleApplication3//Debug//sol.wav";
    fa1 = "C://Users//svita//source//repos//ConsoleApplication3//Debug//fa.wav";
    mi1 = "C://Users//svita//source//repos//ConsoleApplication3//Debug//mi.wav";
    re1 = "C://Users//svita//source//repos//ConsoleApplication3//Debug//re.wav";
    filename = "C://Users//svita//source//repos//ConsoleApplication3//Debug//sound.mp3";
    setlocale(0, "Russian");

    cout << "Играйте клавишами Q W E R T Y U I O . X - для выхода" << endl;
    AudioDevicePtr device = OpenDevice();
    OutputStreamPtr do1 = OpenSound(device, do4.c_str(), false);//здесь мы начинаем создание потоков со звуками определённой высоты
    OutputStreamPtr re = OpenSound(device, re1.c_str(), false);
    OutputStreamPtr mi = OpenSound(device, mi1.c_str(), false);
    OutputStreamPtr fa = OpenSound(device, fa1.c_str(), false);
    OutputStreamPtr sol = OpenSound(device, sol1.c_str(), false);
    OutputStreamPtr la = OpenSound(device, la1.c_str(), false);
    OutputStreamPtr si = OpenSound(device, si1.c_str(), false);
    OutputStreamPtr do2 = OpenSound(device, do_oc.c_str(), false); //заканчиваем октавой - вновь нота до, но уже следующей октавы

    char notePlay = '1'; //инициализируем символьную переменную с произвольным значением

    while (notePlay != 'x') //цикл выполняется, пока не нажата клавиша "x"
    {
        notePlay = _getch();

        if (notePlay == 'q') do1->play();
        else if (notePlay == 'w') re->play();
        else if (notePlay == 'e') mi->play();
        else if (notePlay == 'r') fa->play();
        else if (notePlay == 't') sol->play();
        else if (notePlay == 'y') la->play();
        else if (notePlay == 'u') si->play();
        else if (notePlay == 'i') do2->play();

    }

    return 0;
}