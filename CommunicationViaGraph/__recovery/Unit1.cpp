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

//BYTE buffer[] = { 0x74, 0x6F, 0x75, 0x72, 0x6E, 0x65, 0x72, 0x38, 0x30 };
HANDLE hCom;
String value = Form1->ComboBox1->Text;
const wchar_t* t = value.c_str();
const wchar_t* device = L""+t+"";
DWORD  result;
Convert convert;
using namespace std;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
{
		// ----------Tourner-------------
		int value= ScrollBar1->Position + 48;
		int value2 = ScrollBar4->Position + 48;



//		BYTE buffer[] = { 0x74, 0x6F, 0x75, 0x72, 0x6E, 0x65, 0x72, 0x38, 0x30};
		BYTE buffer[] = { 116, 111, 117, 114, 110, 101, 114, (unsigned char)value, (unsigned char)value2};
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
void __fastcall TForm1::Button2Click(TObject *Sender)
{

		//-----------Vitesse--------------


		int value= ScrollBar2->Position + 48;
		int value2 = ScrollBar3->Position + 48;
//		BYTE buffer[] = { 0x76, 0x69, 0x74, 0x65, 0x73, 0x73, 0x65, 0x31, 0x30 };
		BYTE buffer[] = { 118, 105, 116, 101, 115, 115, 101, (unsigned char)value, (unsigned char)value2 };
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
void __fastcall TForm1::Button3Click(TObject *Sender)
{

String value = ComboBox1->Text;

Button3->Caption="Connecté";
Label3->Caption = ComboBox1->Text;
Label4->Visible=true;



}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
	Label5->Caption = ScrollBar1->Position;
	Label8->Caption = ScrollBar4->Position;

//	// Convert Decimal to Hexa
//	int value = ScrollBar1->Position;
//	char hexString[20];
//	itoa(value, hexString, 16);
//	Label10->Caption = hexString;
//
//	// Convert Decimal to ASCII
//	int x = ScrollBar1->Position;
//	convert.ConvertDecimalToASCII(x);
//	Label15->Caption = x;


}

//---------------------------------------------------------------------------


void __fastcall TForm1::ScrollBar2Change(TObject *Sender)
{
	Label6->Caption = ScrollBar2->Position;


//	// Convert Decimal to Hexa
//	int value = ScrollBar2->Position;
//	char hexString[20];
//	itoa(value, hexString, 16);
//	Label13->Caption = hexString;
//
//	// Convert Decimal to ASCII
//	int x = ScrollBar2->Position;
////	char buf [3];
////	itoa(x,buf,10);
////	printf(buf);
//	Label17->Caption = (char)x;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
		// --------------Avancer-------------
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
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
		// --------------Reculer-------------
		BYTE buffer[] = { 0x72, 0x65, 0x63, 0x75, 0x6C, 0x65, 0x72, 0x31, 0x30 };
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

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
	// --------------Gauche-------------

		BYTE buffer[] = { 0x67, 0x61, 0x75, 0x63, 0x68, 0x65, 0x31, 0x30  };
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
void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
	 // --------------Droite-------------
		BYTE buffer[] = { 0x64, 0x72, 0x6F, 0x69, 0x74, 0x65, 0x31, 0x30   };
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
void __fastcall TForm1::Edit1Change(TObject *Sender)
{
//UnicodeString x = Edit1->Text;
//
//// first convert to AnsiString instead of Unicode.
//AnsiString ansiX(x);
//
//// allocate enough memory for your char array (and the null terminator)
//char* str = new char[ansiX.Length()+1];
//
//// copy the contents of the AnsiString into your char array
//strcpy(str, ansiX.c_str());
//
//// the rest of your code goes here
//Label19->Caption=str;
//
//// remember to delete your char array when done
//delete[] str;
//
//char* a = str;
//char A[100];
//strcpy(a,A);
//Label18->Caption=A;
//
//int ia = (int)a;
//
////ia = Edit1->Text;
//char hexString[20];
//itoa(ia, hexString, 16);
////Label18->Caption = hexString;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{

//	UnicodeString x = Edit1->Text;
//	AnsiString ansiX(x);
//	char* str = new char[ansiX.Length()+1];
//	strcpy(str, ansiX.c_str());
//	Label19->Caption=str;
//	delete[] str;
//
//	char z= *str;
//
////	char A2[20];
////	scanf(A2,str);
//
//	int ia = (int)z;
//	char hexString[20];
//	itoa(ia, hexString, 16);
//	Label18->Caption = hexString;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar3Change(TObject *Sender)
{
	Label21->Caption=ScrollBar3->Position;
}
//---------------------------------------------------------------------------
  void __fastcall TForm1::ScrollBar4Change(TObject *Sender)
{
	Label8->Caption=ScrollBar4->Position;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
	Button3->Caption="Connexion";
}
//---------------------------------------------------------------------------
