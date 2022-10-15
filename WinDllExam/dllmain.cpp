// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include "stdafx.h"

//DLLのメインルーチンである、DLLMainの雛型が作成されているので、
//これに、DLLの初期設定や終了処理を追加する。
BOOL APIENTRY DllMain(	HMODULE hModule,
						DWORD  ul_reason_for_call,
						LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		g.hinst = (HINSTANCE)hModule;
		strcpy(g.input_buffer,"");
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
//DLLのローディング時に実行される、DLL_PROCESS_ATTACHで、初期化を行う。
//Windowsプログラムで、インスタンスハンドルはいろいろ使うので、確保しておきたい。
//DllMainの第一引数は、HINSTANCEのようなので、キャストしてグローバルに保存しておく。
//後処理が必要な場合は、DLL_PROCESS_DETACHに記述する。
//このプログラムでは、何もしていない。
}

