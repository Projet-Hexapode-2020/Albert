//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Buttons.hpp>
//#include "Unit3.h"
#include "ThreadConnexion.h"
#include "ButtonUp.h"
#include <Vcl.ExtCtrls.hpp>
#include <string>
#include "Unit4.h"
#include "Unit5.h"
using namespace std;
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TLabel *Label1;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TLabel *Label9;
	TLabel *Label10;
	TTimer *TimerHaut;
	TTimer *TimerGauche;
	TTimer *TimerDroite;
	TTimer *TimerBas;
	TSpeedButton *SpeedButton5;
	TButton *Button1;
	TButton *Button2;
	void __fastcall SpeedButton1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall SpeedButton1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall TimerHautTimer(TObject *Sender);
	void __fastcall TimerGaucheTimer(TObject *Sender);
	void __fastcall TimerBasTimer(TObject *Sender);
	void __fastcall TimerDroiteTimer(TObject *Sender);
	void __fastcall SpeedButton2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall SpeedButton2MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall SpeedButton3MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall SpeedButton3MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall SpeedButton4MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall SpeedButton4MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall SpeedButton5Click(TObject *Sender);


private:	// Déclarations utilisateur
//		ThreadConnexion *MonThread;
        ButtonUp *Haut;
		void __fastcall FinDeMonThread(TObject *Sender);
		std::wstring StringToWString(const std::string& s);
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
