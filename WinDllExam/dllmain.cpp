// dllmain.cpp : DLL �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
#include "stdafx.h"

//DLL�̃��C�����[�`���ł���ADLLMain�̐��^���쐬����Ă���̂ŁA
//����ɁADLL�̏����ݒ��I��������ǉ�����B
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
//DLL�̃��[�f�B���O���Ɏ��s�����ADLL_PROCESS_ATTACH�ŁA���������s���B
//Windows�v���O�����ŁA�C���X�^���X�n���h���͂��낢��g���̂ŁA�m�ۂ��Ă��������B
//DllMain�̑������́AHINSTANCE�̂悤�Ȃ̂ŁA�L���X�g���ăO���[�o���ɕۑ����Ă����B
//�㏈�����K�v�ȏꍇ�́ADLL_PROCESS_DETACH�ɋL�q����B
//���̃v���O�����ł́A�������Ă��Ȃ��B
}

