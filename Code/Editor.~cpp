//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Editor.h"
#include "Add.h"
#include "DM.h"
#include "Phonebook.h"
#include "Call.h"
#include "Report.h"
#include "Search.h"
#include "Overload.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfEditor *fEditor;
//---------------------------------------------------------------------------
__fastcall TfEditor::TfEditor(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfEditor::Button1Click(TObject *Sender)
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
    ShowMessage("Ошибка!\nВо время поиска что-то пошло не так!");
  }
  fEditor->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfEditor::Button2Click(TObject *Sender)
{
  My_search my_search;
  try{
    my_search.Switch();
  }
  catch(My_search_exception &ex){
    ShowMessage(ex.Message+ex.GetDataState());
  }
  catch(...){
    ShowMessage("Ошибка!\nВо время поиска что-то пошло не так!");
  }
  fEditor->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfEditor::Button3Click(TObject *Sender)
{
  fDM->ADOQuery1->Delete();
  My_search my_search;
  try{
    my_search.Switch();
  }
  catch(My_search_exception &ex){
    ShowMessage(ex.Message+ex.GetDataState());
  }
  catch(...){
    ShowMessage("Ошибка!\nВо время поиска что-то пошло не так!");
  }
  fEditor->Close();
}
//---------------------------------------------------------------------------

