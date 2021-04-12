//---------------------------------------------------------------------------

#include <vcl.h>
#include <dos.h>
#include <stdlib.h>
#include <ComObj.hpp>
#include <utilcls.h>
#pragma hdrstop

#include "Phonebook.h"
#include "DM.h"
#include "Add.h"
#include "Editor.h"
#include "Call.h"
#include "Report.h"
#include "Search.h"
#include "Overload.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfMain *fMain;
//---------------------------------------------------------------------------
__fastcall TfMain::TfMain(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TfMain::Button1Click(TObject *Sender)
{
  fEditor->Show();
  fDM->ADOQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfMain::Button3Click(TObject *Sender)
{
  fAdd->Show();
  fDM->ADOQuery1->Open();
  fDM->ADOQuery1->Append();
}
//---------------------------------------------------------------------------


void __fastcall TfMain::Edit1Change(TObject *Sender)
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
}
//---------------------------------------------------------------------------

void __fastcall TfMain::Button4Click(TObject *Sender)
{
        fMain->Close();
}
//---------------------------------------------------------------------------


void __fastcall TfMain::SpeedButton2Click(TObject *Sender)
{
        Call call(DBEdit4->Field->AsString);
        try{
        friend_call(call);
        }
        catch(My_call_exception &ex)
        {
        ShowMessage(ex.Message+ex.GetDataState());
        }
        catch(...){
        ShowMessage("Ошибка!/nПри наборе номера что-то пошло не так!");
        }
}
//---------------------------------------------------------------------------

void __fastcall TfMain::SpeedButton1Click(TObject *Sender)
{
        Call call(DBEdit10->Field->AsString);
        try{
        friend_call(call);
        }
        catch(My_call_exception &ex)
        {
        ShowMessage(ex.Message+ex.GetDataState());
        }
        catch(...){
        ShowMessage("Ошибка!/nПри наборе номера что-то пошло не так!");
        }
}
//---------------------------------------------------------------------------


void __fastcall TfMain::SpeedButton3Click(TObject *Sender)
{
        Call call(DBEdit13->Field->AsString);
        try{
        friend_call(call);
        }
        catch(My_call_exception &ex)
        {
        ShowMessage(ex.Message+ex.GetDataState());
        }
        catch(...){
        ShowMessage("Ошибка!/nПри наборе номера что-то пошло не так!");
        }
}
//---------------------------------------------------------------------------


void __fastcall TfMain::BitBtn1Click(TObject *Sender)
{
Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TfMain::Button2Click(TObject *Sender)
{
  Excel_report my_report;
  my_report.report();
  my_report.excel_report();
}
//---------------------------------------------------------------------------




void __fastcall TfMain::RadioButton1Click(TObject *Sender)
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
}
//---------------------------------------------------------------------------

void __fastcall TfMain::RadioButton2Click(TObject *Sender)
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
}
//---------------------------------------------------------------------------

void __fastcall TfMain::ComboBox1Change(TObject *Sender)
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
}
//---------------------------------------------------------------------------

void __fastcall TfMain::ComboBox2Change(TObject *Sender)
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
}
//---------------------------------------------------------------------------



void __fastcall TfMain::SpeedButton4Click(TObject *Sender)
{
  try{
  AnsiString HelpFile;
  HelpFile=GetCurrentDir()+"\\Phonebook_help.chm";
  ShellExecute(Handle, "open" , HelpFile.c_str(), 0, 0, SW_SHOWNORMAL);
  }
  catch(...){
  ShowMessage("Ошибка!\nПри открытии справочника что-то пошло не так!");
  }
}
//---------------------------------------------------------------------------

