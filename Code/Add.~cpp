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
    ShowMessage("Ошибка!\nВо время поиска что-то пошло не так!");
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
    ShowMessage("Ошибка!\nВо время поиска что-то пошло не так!");
  }
fAdd->Close();        
}
//---------------------------------------------------------------------------



void __fastcall TfAdd::DBEdit1KeyPress(TObject *Sender, char &Key)
{
         DBEdit1->MaxLength = 20;
           if(DBEdit1->Text.Length()<=20){
             if (((Key>=' ')&&(Key<='@'))||((Key>='[')&&(Key<='`'))||((Key>='{')&&(Key<='~'))){
              ShowMessage("Ошибка!\nПоле \"Фамилия\" не может содержать цифр и специальных символов.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit1->Clear();
             DBEdit1->Text = "";
             Key = 0;
           }                
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit2KeyPress(TObject *Sender, char &Key)
{
        DBEdit2->MaxLength = 20;
           if(DBEdit2->Text.Length()<=20){
             if (((Key>=' ')&&(Key<='@'))||((Key>='[')&&(Key<='`'))||((Key>='{')&&(Key<='~'))){
              ShowMessage("Ошибка!\nПоле \"Имя\" не может содержать цифр и специальных символов.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit2->Clear();
             DBEdit2->Text = "";
             Key = 0;
           }        
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit3KeyPress(TObject *Sender, char &Key)
{
        DBEdit3->MaxLength = 20;
           if(DBEdit3->Text.Length()<=20){
             if (((Key>=' ')&&(Key<='@'))||((Key>='[')&&(Key<='`'))||((Key>='{')&&(Key<='~'))){
              ShowMessage("Ошибка!\nПоле \"Отчество\" не может содержать цифр и специальных символов.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit3->Clear();
             DBEdit3->Text = "";
             Key = 0;
           }            
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit4KeyPress(TObject *Sender, char &Key)
{
        DBEdit4->MaxLength = 11;
           if(DBEdit4->Text.Length()<=11){
             if (!(((Key>='0')&&(Key<='9'))||(Key==8))){
              ShowMessage("Ошибка!\nПоле \"Мобильный телефон\" должно содержать только цифры.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit4->Clear();
             DBEdit4->Text = "";
             Key = 0;
           }             
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit5KeyPress(TObject *Sender, char &Key)
{
        DBEdit5->MaxLength = 20;
           if(DBEdit5->Text.Length()<=20){
             if (((Key>=' ')&&(Key<='@'))||((Key>='[')&&(Key<='`'))||((Key>='{')&&(Key<='~'))){
              ShowMessage("Ошибка!\nПоле \"Город\" не может содержать цифр и специальных символов.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit5->Clear();
             DBEdit5->Text = "";
             Key = 0;
           }        
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit6KeyPress(TObject *Sender, char &Key)
{
        DBEdit6->MaxLength = 20;
           if(DBEdit6->Text.Length()<=20){
             if (((Key>=' ')&&(Key<='@'))||((Key>='[')&&(Key<='`'))||((Key>='{')&&(Key<='~'))){
              ShowMessage("Ошибка!\nПоле \"Улица\" не может содержать цифр и специальных символов.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit6->Clear();
             DBEdit6->Text = "";
             Key = 0;
           }        
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit7KeyPress(TObject *Sender, char &Key)
{
        DBEdit7->MaxLength = 4;
           if(DBEdit7->Text.Length()<=4){
             if (!(((Key>='0')&&(Key<='9'))||(Key==8))){
              ShowMessage("Ошибка!\nПоле \"Дом\" должно содержать только цифры.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit7->Clear();
             DBEdit7->Text = "";
             Key = 0;
           }        
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit8KeyPress(TObject *Sender, char &Key)
{
         DBEdit8->MaxLength = 1;
           if(DBEdit8->Text.Length()<=1){
             if (!(((Key>='0')&&(Key<='9'))||((Key>='a')&&(Key<='z'))||((Key>='а')&&(Key<='я'))||(Key=='-')||(Key==8))){
              ShowMessage("Ошибка!\nПоле \"Корпус\" должно содержать только цифры, прописные буквы и спецсимвол.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit8->Clear();
             DBEdit8->Text = "";
             Key = 0;
           }             
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit9KeyPress(TObject *Sender, char &Key)
{
        DBEdit9->MaxLength = 4;
           if(DBEdit9->Text.Length()<=4){
             if (!(((Key>='0')&&(Key<='9'))||(Key==8)||(Key=='-'))){
              ShowMessage("Ошибка!\nПоле \"Квартира\" должно содержать только цифры или \"прочерк\".\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit9->Clear();
             DBEdit9->Text = "";
             Key = 0;
           }                
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit10KeyPress(TObject *Sender, char &Key)
{
        DBEdit10->MaxLength = 11;
           if(DBEdit10->Text.Length()<=11){
             if (!(((Key>='0')&&(Key<='9'))||(Key==8))){
              ShowMessage("Ошибка!\nПоле \"Домашний телефон\" должно содержать только цифры.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit10->Clear();
             DBEdit10->Text = "";
             Key = 0;
           }        
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit11KeyPress(TObject *Sender, char &Key)
{
        DBEdit11->MaxLength = 20;
          if(DBEdit11->Text.Length()>20){
            ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
            DBEdit1->Clear();
            DBEdit1->Text = "";
            Key = 0;
          }        
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit12KeyPress(TObject *Sender, char &Key)
{
        DBEdit12->MaxLength = 20;
          if(DBEdit12->Text.Length()>20){
            ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
            DBEdit12->Clear();
            DBEdit12->Text = "";
            Key = 0;
          }        
}
//---------------------------------------------------------------------------

void __fastcall TfAdd::DBEdit13KeyPress(TObject *Sender, char &Key)
{
        DBEdit13->MaxLength = 11;
           if(DBEdit13->Text.Length()<=11){
             if (!(((Key>='0')&&(Key<='9'))||(Key==8))){
              ShowMessage("Ошибка!\nПоле \"Рабочий телефон\" должно содержать только цифры.\nВы ввели недопустимый символ: \""+(AnsiString)Key+"\"");
              Key = 0;
             }
           }else{
             ShowMessage("Ошибка!\nПревышен лимит вводимых символов!");
             DBEdit13->Clear();
             DBEdit13->Text = "";
             Key = 0;
           }              
}
//---------------------------------------------------------------------------


