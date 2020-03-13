//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;

#include <iostream>
#include <thread>
#include <winscard.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <stdlib.h>
#include "DecToAscii.h"
#include <string>
#include <algorithm>



HANDLE hCom;
const wchar_t* device = L"COM8";
DWORD  result;
Convert convert;
using namespace std;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm5::CheckBox1Click(TObject *Sender)
{
	if (CheckBox1->Checked) {

		BYTE buffer[] = { 118, 105, 116, 101, 115, 115, 101, 49, 48 };
		hCom = CreateFile(
		device,
		GENERIC_READ | GENERIC_WRITE,
		0,
		0,
		OPEN_EXISTING,
		0,
		0);

	if (hCom != INVALID_HANDLE_VALUE)
	{

		WriteFile(hCom, buffer, (DWORD)sizeof(buffer), &result, NULL);
		if (GetLastError() != ERROR_IO_PENDING)
		{
		}

	}

	CloseHandle(hCom);
	Form5->Visible=false;
	Form1->Visible=true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::CheckBox2Click(TObject *Sender)
{
if (CheckBox2->Checked) {

		BYTE buffer[] = { 118, 105, 116, 101, 115, 115, 101, 52, 48 };
		hCom = CreateFile(
		device,
		GENERIC_READ | GENERIC_WRITE,
		0,
		0,
		OPEN_EXISTING,
		0,
		0);

	if (hCom != INVALID_HANDLE_VALUE)
	{

		WriteFile(hCom, buffer, (DWORD)sizeof(buffer), &result, NULL);
		if (GetLastError() != ERROR_IO_PENDING)
		{
		}

	}

	CloseHandle(hCom);
    Form5->Visible=false;
	Form1->Visible=true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::CheckBox3Click(TObject *Sender)
{
	if (CheckBox3->Checked) {

		BYTE buffer[] = { 118, 105, 116, 101, 115, 115, 101, 57, 48 };
		hCom = CreateFile(
		device,
		GENERIC_READ | GENERIC_WRITE,
		0,
		0,
		OPEN_EXISTING,
		0,
		0);

	if (hCom != INVALID_HANDLE_VALUE)
	{

		WriteFile(hCom, buffer, (DWORD)sizeof(buffer), &result, NULL);
		if (GetLastError() != ERROR_IO_PENDING)
		{
		}

	}

	CloseHandle(hCom);
    Form5->Visible=false;
	Form1->Visible=true;
	}
}
//---------------------------------------------------------------------------
