//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Call.h"
#include "Phonebook.h"
#include "DM.h"
#include "Editor.h"
#include "Add.h"
#include "Report.h"
#include "Search.h"
#include "Overload.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfCall *fCall;
//---------------------------------------------------------------------------
__fastcall TfCall::TfCall(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
__fastcall Call::Call(AnsiString mess){
        this->mess=mess;
}
//---------------------------------------------------------------------------
void __fastcall friend_call(Call &call){
int i = 1,x;
ShowMessage("?? ????????? ?????: "+call.mess+"\n?????????? ??? ??????? ? ????????? ????? ? ????????? ? ???????? ??????????.\n????? ??????? ?????? ??.");
  while(i<=call.mess.Length()){
        x=(int)call.mess[i++];
        switch(x){
           case '1':{
                fMain->MediaPlayer1->Play();
                Sleep(200);
                break;
           }
           case '2':{
                fMain->MediaPlayer2->Play();
                Sleep(200);
                break;
           }
           case '3':{
                fMain->MediaPlayer3->Play();
                Sleep(200);
                break;
           }
           case '4':{
                fMain->MediaPlayer4->Play();
                Sleep(200);
                break;
           }
           case '5':{
                fMain->MediaPlayer5->Play();
                Sleep(200);
                break;
           }
           case '6':{
                fMain->MediaPlayer6->Play();
                Sleep(200);
                break;
           }
           case '7':{
                fMain->MediaPlayer7->Play();
                Sleep(200);
                break;
           }
           case '8':{
                fMain->MediaPlayer8->Play();
                Sleep(200);
                break;
           }
           case '9':{
                fMain->MediaPlayer9->Play();
                Sleep(200);
                break;
           }
           case '0':{
                fMain->MediaPlayer10->Play();
                Sleep(200);
                break;
           }
           default: {
           throw My_call_exception("??????!\n??????????? ?????? ?????!\n???????????? ??? ?????? ??????: ", call.mess[i-1]);
           //break;
           }
        }
  }
}
//---------------------------------------------------------------------------

