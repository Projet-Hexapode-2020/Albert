//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "ButtonUp.h"
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
#include <windows.h>
#pragma package(smart_init)

HANDLE hCom;
const wchar_t* device = L"COM8";
DWORD  result;

//---------------------------------------------------------------------------

//   Important : Les méthodes et les propriétés des objets de la VCL peuvent seulement être
//   utilisées dans une méthode appelée avec Synchronize, par exemple :
//
//      Synchronize(&UpdateCaption);
//
//   où UpdateCaption pourrait ressembler à :
//


//---------------------------------------------------------------------------
void __fastcall ButtonUp::UpdateCaption()
{
	Form1->Label9->Caption="Mise à jour dans un thread";
}
//---------------------------------------------------------------------------

__fastcall ButtonUp::ButtonUp(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall ButtonUp::Execute()
{
	//---- Placer le code du thread ici ----



   while(Terminated==false){
   if (Form1->SpeedButton1->OnMouseDown) {
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

	Synchronize(&UpdateCaption);
//	Synchronize(&Haut);
	Synchronize(&AffMessage);





		

}

}
//---------------------------------------------------------------------------
 void __fastcall ButtonUp::AffMessage()
{

		 Form1->Label12->Caption="Application externe 'up' lancée  ";

}
//---------------------------------------------------------------------------


