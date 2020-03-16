//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
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
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Form1->Close();
}//---------------------------------------------------------------------------std::wstring TForm1::StringToWString(const std::string& s){
	std::wstring temp(s.length(),L' ');
	std::copy(s.begin(), s.end(), temp.begin());
    return temp;
}//---------------------------------------------------------------------------
void __fastcall  TForm1::FinDeMonThread(TObject *Sender)
{
	Label10->Caption = "Thread terminé";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
		TimerHaut->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
TimerHaut->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHautTimer(TObject *Sender)
{
		BYTE buffer[] = { 0x61, 0x76, 0x61, 0x6E, 0x63, 0x65, 0x72, 0x30, 0x31 };
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
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerGaucheTimer(TObject *Sender)
{
		// --------------Gauche-------------

		BYTE buffer[] = { 0x67, 0x61, 0x75, 0x63, 0x68, 0x65, 0x30, 0x31  };
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
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerBasTimer(TObject *Sender)
{
		// --------------Reculer-------------

		BYTE buffer[] = { 0x72, 0x65, 0x63, 0x75, 0x6C, 0x65, 0x72, 0x30, 0x31 };
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
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerDroiteTimer(TObject *Sender)
{
	 // --------------Droite-------------

		BYTE buffer[] = { 0x64, 0x72, 0x6F, 0x69, 0x74, 0x65, 0x30, 0x31   };
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
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
TimerGauche->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
TimerGauche->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
TimerBas->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
TimerBas->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
TimerDroite->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4MouseUp(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, int X, int Y)
{
TimerDroite->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
	Form5->Visible=true;
	Form1->Visible=false;
}
//---------------------------------------------------------------------------

