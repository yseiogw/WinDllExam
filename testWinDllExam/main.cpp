#include <windows.h>
#include <stdio.h>
#include "WinDllExam.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInstance, 
LPSTR lpCmdLine, int nCmdShow)
{
	char line[256];

	strcpy(line,WinDllExam("���Ȃ��̖��O�́H"));
	sprintf(line,"%s����A����ɂ��́I",line);
	MessageBox(NULL,line,"��������",0);

	return 0;
}
