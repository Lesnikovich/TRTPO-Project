//---------------------------------------------------------------------------

#ifndef SearchH
#define SearchH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TfSearch : public TForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
        __fastcall TfSearch(TComponent* Owner);
};
//---------------------------------------------------------------------------
class My_search_exception:public Exception{
  private:
    int DataState;
  public:
    __fastcall My_search_exception(AnsiString Msg, int DataState):Exception(Msg){
      this->DataState=DataState;
    }
    int __fastcall GetDataState(){
        return DataState;
    }
};
//---------------------------------------------------------------------------
class My_choose{
  public:
    void __fastcall Choose(AnsiString Parameter);
};
//---------------------------------------------------------------------------
class My_search:public My_choose{
  public:
    void __fastcall Switch();
};
//---------------------------------------------------------------------------
extern PACKAGE TfSearch *fSearch;
//---------------------------------------------------------------------------
#endif
