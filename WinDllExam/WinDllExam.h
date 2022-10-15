// 以下の ifdef ブロックは DLL からのエクスポートを容易にするマクロを作成するための 
// 一般的な方法です。この DLL 内のすべてのファイルは、コマンド ラインで定義された WINDLLEXAM_EXPORTS
// シンボルでコンパイルされます。このシンボルは、この DLL を使うプロジェクトで定義することはできません。
// ソースファイルがこのファイルを含んでいる他のプロジェクトは、 
// WINDLLEXAM_API 関数を DLL からインポートされたと見なすのに対し、この DLL は、このマクロで定義された
// シンボルをエクスポートされたと見なします。
#ifndef __WINDLLEXAM_H__
#define __WINDLLEXAM_H__

#ifdef WINDLLEXAM_EXPORTS
#define WINDLLEXAM_API extern "C" __declspec(dllexport)
#else
#define WINDLLEXAM_API extern "C" __declspec(dllimport)
#endif

// このクラスは WinDllExam.dll からエクスポートされました。
//class WINDLLEXAM_API CWinDllExam {
//public:
//	CWinDllExam(void);
//	// TODO: メソッドをここに追加してください。
//};

//extern WINDLLEXAM_API int nWinDllExam;

//WINDLLEXAM_API int fnWinDllExam(void);
WINDLLEXAM_API char* CALLBACK WinDllExam(char* msg);
LRESULT CALLBACK InputBoxProc(HWND hDlg, UINT msg, WPARAM wp, LPARAM lp);

typedef struct inputbox_global {
	HINSTANCE       hinst;
	char            input_buffer[256];
	char            prompt[256];
} *inputbox_globalptr;

extern inputbox_global g;

#endif //__WINDLLEXAM_H__