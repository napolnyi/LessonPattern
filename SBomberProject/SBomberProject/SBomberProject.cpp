﻿
#include <conio.h>

#include "SBomber.h"
//#include "MyTools.h"
#include "FileLogger.h"

using namespace std;

FileLogger* logger;
//========================================================================================================================

int main(void)
{
    logger = new FileLogger;
    //MyTools::OpenLogFile("log.txt");

    SBomber game;

    do {
        game.TimeStart();

        if (_kbhit())
        {
            game.ProcessKBHit();
        }

        MyTools::ClrScr();

        game.DrawFrame();
        game.MoveObjects();
        game.CheckObjects();

        game.TimeFinish();

    } while (!game.GetExitFlag());

    //MyTools::CloseLogFile();

    return 0;
}
