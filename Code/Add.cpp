//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Add.h"
#include "DM.h"
#include "Phonebook.h"
#include "Call.h"
#include "Editor.h"
#include "Report.h"
#include "Search.h"
#include "Overload.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfAdd *fAdd;
//---------------------------------------------------------------------------
__fastcall TfAdd::TfAdd(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfAdd::Button1Click(TObject *Sender)
{
  if(fDM->ADOQuery1->Modified){
    fDM->ADOQuery1->Post();
  }

  My_search my_search;
  try{
    my_search.Switch();
  }
  catch(My_search_exception &ex){
    ShowMessage(ex.Message+ex.GetDataState());
  }
  catch(...){
    ShowMessage("������!\n�� ����� ������ ���-�� ����� �� ���!");
  }
fAdd->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::Button2Click(TObject *Sender)
{
  My_search my_search;
  try{
    my_search.Switch();
  }
  catch(My_search_exception &ex){
    ShowMessage(ex.Message+ex.GetDataState());
  }
  catch(...){
    ShowMessage("������!\n�� ����� ������ ���-�� ����� �� ���!");
  }
fAdd->Close();        
}
//---------------------------------------------------------------------------

