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
        Edit1->Clear();
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


void __fastcall TfMain::Edit1KeyPress(TObject *Sender, char &Key)
{
  switch(ComboBox1->ItemIndex){
        case 0:{
           Edit1->MaxLength = 20;
           if(Edit1->Text.Length()<=20){
             if (((Key>=' ')&&(Key<='@'))||((Key>='[')&&(Key<='`'))||((Key>='{')&&(Key<='~'))){
              ShowMessage("Ошибка!\nПоле \"Фамилия\" не может содержать цифр и специальных символов.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        }

        case 1:{
        Edit1->MaxLength = 20;
           if(Edit1->Text.Length()<=20){
             if (((Key>=' ')&&(Key<='@'))||((Key>='[')&&(Key<='`'))||((Key>='{')&&(Key<='~'))){
              ShowMessage("Ошибка!\nПоле \"Имя\" не может содержать цифр и специальных символов.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        }

        case 2:{
        Edit1->MaxLength = 20;
           if(Edit1->Text.Length()<=20){
             if (((Key>=' ')&&(Key<='@'))||((Key>='[')&&(Key<='`'))||((Key>='{')&&(Key<='~'))){
              ShowMessage("Ошибка!\nПоле \"Отчество\" не может содержать цифр и специальных символов.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        }

        case 3:{
        Edit1->MaxLength = 11;
           if(Edit1->Text.Length()<=11){
             if (!(((Key>='0')&&(Key<='9'))||(Key==8))){
              ShowMessage("Ошибка!\nПоле \"Мобильный телефон\" должно содержать только цифры.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        };

        case 4:{
           Edit1->MaxLength = 20;
           if(Edit1->Text.Length()<=20){
             if (((Key>=' ')&&(Key<='@'))||((Key>='[')&&(Key<='`'))||((Key>='{')&&(Key<='~'))){
              ShowMessage("Ошибка!\nПоле \"Город\" не может содержать цифр и специальных символов.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        }

        case 5:{
           Edit1->MaxLength = 20;
           if(Edit1->Text.Length()<=20){
             if (((Key>=' ')&&(Key<='@'))||((Key>='[')&&(Key<='`'))||((Key>='{')&&(Key<='~'))){
              ShowMessage("Ошибка!\nПоле \"Улица\" не может содержать цифр и специальных символов.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        }

        case 6:{
        Edit1->MaxLength = 4;
           if(Edit1->Text.Length()<=4){
             if (!(((Key>='0')&&(Key<='9'))||(Key==8))){
              ShowMessage("Ошибка!\nПоле \"Дом\" должно содержать только цифры.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        }

        case 7:{
        Edit1->MaxLength = 1;
           if(Edit1->Text.Length()<=1){
             if (!(((Key>='0')&&(Key<='9'))||((Key>='a')&&(Key<='z'))||((Key>='а')&&(Key<='я'))||(Key=='-')||(Key==8))){
              ShowMessage("Ошибка!\nПоле \"Корпус\" должно содержать только цифры, прописные буквы и спецсимвол.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        }

        case 8:{
        Edit1->MaxLength = 4;
           if(Edit1->Text.Length()<=4){
             if (!(((Key>='0')&&(Key<='9'))||(Key==8)||(Key=='-'))){
              ShowMessage("Ошибка!\nПоле \"Квартира\" должно содержать только цифры или \"прочерк\".\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        }

        case 9:{
         Edit1->MaxLength = 11;
           if(Edit1->Text.Length()<=11){
             if (!(((Key>='0')&&(Key<='9'))||(Key==8))){
              ShowMessage("Ошибка!\nПоле \"Домашний телефон\" должно содержать только цифры.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        }

        case 10:{
          Edit1->MaxLength = 20;
          if(Edit1->Text.Length()>20){
            ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
            Edit1->Clear();
            Edit1->Text = "";
            Key = 0;
          }
          break;
        }

        case 11:{
         Edit1->MaxLength = 20;
          if(Edit1->Text.Length()>20){
            ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
            Edit1->Clear();
            Edit1->Text = "";
            Key = 0;
          }
          break;
        }

        case 12:{
          Edit1->MaxLength = 11;
           if(Edit1->Text.Length()<=11){
             if (!(((Key>='0')&&(Key<='9'))||(Key==8))){
              ShowMessage("Ошибка!\nПоле \"Рабочий телефон\" должно содержать только цифры.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             Edit1->Clear();
             Edit1->Text = "";
             Key = 0;
           }
        break;
        }
}
}
//---------------------------------------------------------------------------

