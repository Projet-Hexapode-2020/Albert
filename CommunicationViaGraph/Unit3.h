//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class ButtonPush : public TThread
{
private:
protected:
	void __fastcall Execute();
    void __fastcall AffMessage();
public:
	__fastcall ButtonPush(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
