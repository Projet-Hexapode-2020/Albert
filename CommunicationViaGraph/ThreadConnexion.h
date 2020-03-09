//---------------------------------------------------------------------------

#ifndef ThreadConnexionH
#define ThreadConnexionH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class ThreadConnexion : public TThread
{
private:
protected:

	void __fastcall AffMessage();
public:
	__fastcall ThreadConnexion(bool CreateSuspended);
	void __fastcall Execute();
};
//---------------------------------------------------------------------------
#endif
