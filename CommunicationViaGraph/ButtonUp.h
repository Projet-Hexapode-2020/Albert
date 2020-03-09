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
public:
	__fastcall ButtonUp(bool CreateSuspended);
	void __fastcall UpdateCaption();
};
//---------------------------------------------------------------------------
#endif
