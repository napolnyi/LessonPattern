﻿
#include <conio.h>

#include "SBomber.h"
#include "ScreenSingleton.h" 
#include "FileLoggerSingletone.h"



using namespace std;

//========================================================================================================================

int main(void)
{
    FileLoggerSingletone::getInstance().OpenLogFile("log.txt");

    SBomber game;

    do {
        game.TimeStart();

        if (_kbhit())
        {
            game.ProcessKBHit();
        }

        ScreenSingleton::getInstance().ClrScr();

        game.DrawFrame();
        game.MoveObjects();
        game.CheckObjects();

        game.TimeFinish();
       

    } while (!game.GetExitFlag());

    FileLoggerSingletone::getInstance().CloseLogFile();

    return 0;
}
