//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "Unit1.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// Composants gérés par l'EDI
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TLabel *Label1;
	TButton *Button1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall CheckBox3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
