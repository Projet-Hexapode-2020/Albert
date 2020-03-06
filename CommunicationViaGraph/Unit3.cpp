//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"

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
TForm1 *Form1;

HANDLE hCom;
const wchar_t* device = L"COM8";
DWORD  result;
//Convert convert;
using namespace std;
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important : Les m�thodes et les propri�t�s des objets de la VCL peuvent seulement �tre
//   utilis�es dans une m�thode appel�e avec Synchronize, par exemple :
//
//      Synchronize(&UpdateCaption);
//
//   o� UpdateCaption pourrait ressembler � :
//
//      void __fastcall ButtonPush::UpdateCaption()
//      {
//        Form1->Caption = "Mis � jour dans un thread";
//      }
//---------------------------------------------------------------------------

__fastcall ButtonPush::ButtonPush(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall ButtonPush::Execute()
{
int i=0;
while(i > 1000){


	if (Form1->SpeedButton1->OnMouseDown) {

    	BYTE buffer[] = { 0x76, 0x69, 0x74, 0x65, 0x73, 0x73, 0x65, 0x31, 0x30 };
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




}
}
//---------------------------------------------------------------------------
void __fastcall ButtonPush::AffMessage()
{
	   Form1->Label22->Caption = "Application externe lanc�.";

}