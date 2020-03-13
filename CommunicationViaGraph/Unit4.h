//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include "Unit5.h"
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// Composants gérés par l'EDI
	TImage *Image1;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
