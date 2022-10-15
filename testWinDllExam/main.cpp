#include <windows.h>
#include <stdio.h>
#include "WinDllExam.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInstance, 
LPSTR lpCmdLine, int nCmdShow)
{
	char line[256];

	strcpy(line,WinDllExam("あなたの名前は？"));
	sprintf(line,"%sさん、こんにちは！",line);
	MessageBox(NULL,line,"あいさつ",0);

	return 0;
}
