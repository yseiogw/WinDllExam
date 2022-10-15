// stdafx.h : 標準のシステム インクルード ファイルのインクルード ファイル、または
// 参照回数が多く、かつあまり変更されない、プロジェクト専用のインクルード ファイル
// を記述します。
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーから使用されていない部分を除外します。
// Windows ヘッダー ファイル:
#include <windows.h>



// TODO: プログラムに必要な追加ヘッダーをここで参照してください。
// TODO: プログラムに必要な追加ヘッダーをここで参照してください。
#include <windowsx.h>           // DLL内で使用しているライブラリのヘッダ
#include "resource.h"           // リソースID等の定義
#include "WinDllExam.h"         // DLLのプロトタイプ

// 文字列関連Warningの抑制
#pragma warning ( disable : 4996 )      // VS2005 security warningのサプレス
#pragma warning ( disable : 4311 )      // '型キャスト'切り詰めのサプレス
#pragma warning ( disable : 4267 )      // 'size_t' から 'int' に変換のサプレス
#pragma warning ( disable : 4312 )      // 'LONG' からより大きい...のサプレス
