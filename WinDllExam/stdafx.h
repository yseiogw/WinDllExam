// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Windows �w�b�_�[����g�p����Ă��Ȃ����������O���܂��B
// Windows �w�b�_�[ �t�@�C��:
#include <windows.h>



// TODO: �v���O�����ɕK�v�Ȓǉ��w�b�_�[�������ŎQ�Ƃ��Ă��������B
// TODO: �v���O�����ɕK�v�Ȓǉ��w�b�_�[�������ŎQ�Ƃ��Ă��������B
#include <windowsx.h>           // DLL���Ŏg�p���Ă��郉�C�u�����̃w�b�_
#include "resource.h"           // ���\�[�XID���̒�`
#include "WinDllExam.h"         // DLL�̃v���g�^�C�v

// ������֘AWarning�̗}��
#pragma warning ( disable : 4996 )      // VS2005 security warning�̃T�v���X
#pragma warning ( disable : 4311 )      // '�^�L���X�g'�؂�l�߂̃T�v���X
#pragma warning ( disable : 4267 )      // 'size_t' ���� 'int' �ɕϊ��̃T�v���X
#pragma warning ( disable : 4312 )      // 'LONG' ������傫��...�̃T�v���X
