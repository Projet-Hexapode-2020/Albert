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

//   Important : Les m�thodes et les propri�t�s des objets de la VCL peuvent seulement �tre
//   utilis�es dans une m�thode appel�e avec Synchronize, par exemple :
//
//      Synchronize(&UpdateCaption);
//
//   o� UpdateCaption pourrait ressembler � :
//
	 void __fastcall ButtonUp::UpdateCaption()
	  {
		Form1->Button3->Caption="Mis � jour dans un thread";
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

	FreeOnTerminate = true;
	int i=1;

		while(i<100){

		if (Form1->SpeedButton1->OnMouseDown) {

		BYTE buffer[] = { 0x61, 0x76, 0x61, 0x6E, 0x63, 0x65, 0x72, 0x31, 0x30 };
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
		}else{

		Sleep(5000);

        }
		
}
Synchronize(&UpdateCaption);

}
//---------------------------------------------------------------------------
 void __fastcall ButtonUp::AffMessage()
{
	   if (Form1->Button4->OnClick) {

		 Form1->Label12->Caption="Application externe 'up' lanc�e  ";
	   }

}