// �ȉ��� ifdef �u���b�N�� DLL ����̃G�N�X�|�[�g��e�Ղɂ���}�N�����쐬���邽�߂� 
// ��ʓI�ȕ��@�ł��B���� DLL ���̂��ׂẴt�@�C���́A�R�}���h ���C���Œ�`���ꂽ WINDLLEXAM_EXPORTS
// �V���{���ŃR���p�C������܂��B���̃V���{���́A���� DLL ���g���v���W�F�N�g�Œ�`���邱�Ƃ͂ł��܂���B
// �\�[�X�t�@�C�������̃t�@�C�����܂�ł��鑼�̃v���W�F�N�g�́A 
// WINDLLEXAM_API �֐��� DLL ����C���|�[�g���ꂽ�ƌ��Ȃ��̂ɑ΂��A���� DLL �́A���̃}�N���Œ�`���ꂽ
// �V���{�����G�N�X�|�[�g���ꂽ�ƌ��Ȃ��܂��B
#ifndef __WINDLLEXAM_H__
#define __WINDLLEXAM_H__

#ifdef WINDLLEXAM_EXPORTS
#define WINDLLEXAM_API extern "C" __declspec(dllexport)
#else
#define WINDLLEXAM_API extern "C" __declspec(dllimport)
#endif

// ���̃N���X�� WinDllExam.dll ����G�N�X�|�[�g����܂����B
//class WINDLLEXAM_API CWinDllExam {
//public:
//	CWinDllExam(void);
//	// TODO: ���\�b�h�������ɒǉ����Ă��������B
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