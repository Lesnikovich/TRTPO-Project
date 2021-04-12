//---------------------------------------------------------------------------

#ifndef CallH
#define CallH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TfCall : public TForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
        __fastcall TfCall(TComponent* Owner);
};
//---------------------------------------------------------------------------
class My_call_exception:public Exception
{
    public:
    __fastcall My_call_exception(AnsiString Msg, char DataState):Exception(Msg){
        this->DataState=DataState;
    }
    char __fastcall GetDataState(){
        return DataState;
    }
    private:
        char DataState;
};
//---------------------------------------------------------------------------
class Call{
    private:
    AnsiString mess;
    public:
    __fastcall Call(AnsiString mess);
    friend void __fastcall friend_call(Call &call);
};
//---------------------------------------------------------------------------
void __fastcall friend_call(Call &call);
//---------------------------------------------------------------------------
extern PACKAGE TfCall *fCall;
//---------------------------------------------------------------------------
#endif
