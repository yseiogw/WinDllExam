// WinDllExam.cpp : DLL �A�v���P�[�V�����p�ɃG�N�X�|�[�g�����֐����`���܂��B
//

#include "stdafx.h"
#include "WinDllExam.h"

inputbox_global g;

// ����́A�G�N�X�|�[�g���ꂽ�ϐ��̗�ł��B
WINDLLEXAM_API int nWinDllExam=0;

// ����́A�G�N�X�|�[�g���ꂽ�֐��̗�ł��B
//WINDLLEXAM_API int fnWinDllExam(void)
//{
//	return 42;
//}

// ����́A�G�N�X�|�[�g���ꂽ�N���X�̃R���X�g���N�^�ł��B
// �N���X��`�Ɋւ��Ă� WinDllExam.h ���Q�Ƃ��Ă��������B
//CWinDllExam::CWinDllExam()
//{
//	return;
//}

WINDLLEXAM_API char* CALLBACK WinDllExam(char* msg)
{
	strcpy(g.prompt,msg);
	if (DialogBox(g.hinst,MAKEINTRESOURCE(IDD_DIALOG1), NULL, (DLGPROC)InputBoxProc) == -1) {
		MessageBox(NULL, "DialogBox error!", "InputBox Error", MB_OK);
		strcpy(g.input_buffer,"");
	}
	return (g.input_buffer);
}
LRESULT CALLBACK InputBoxProc(HWND hDlg, UINT msg, WPARAM wp, LPARAM lp)
{
	switch (msg) {
		case WM_INITDIALOG:
			// �^�C�g���ƃv�����v�g�̕\��
			SetWindowText(hDlg,"InputBox");
			SetWindowText(GetDlgItem(hDlg,IDC_STATIC1),g.prompt);
			return TRUE;
		case WM_COMMAND:
			switch (LOWORD(wp)) {
				case IDOK:
					Edit_GetText(GetDlgItem(hDlg,IDC_EDIT1),g.input_buffer, sizeof(g.input_buffer));
					EndDialog(hDlg, IDOK);
					return TRUE;
				case IDCANCEL:
					EndDialog(hDlg, IDCANCEL);
					return TRUE;
			}
			break;
	}
	return FALSE;
}
