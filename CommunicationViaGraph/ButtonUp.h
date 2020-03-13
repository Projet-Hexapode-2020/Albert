//---------------------------------------------------------------------------

#ifndef ButtonUpH
#define ButtonUpH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class ButtonUp : public TThread
{
private:
protected:
void __fastcall Execute();
	void __fastcall AffMessage();
	void __fastcall Haut();
	void __fastcall UpdateCaption();
public:
	__fastcall ButtonUp(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
