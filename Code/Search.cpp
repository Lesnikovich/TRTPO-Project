//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Search.h"
#include "Call.h"
#include "DM.h"
#include "Phonebook.h"
#include "Add.h"
#include "Editor.h"
#include "Report.h"
#include "Overload.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfSearch *fSearch;
//---------------------------------------------------------------------------
__fastcall TfSearch::TfSearch(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall My_choose::Choose(AnsiString Parameter){
        fDM->ADOQuery1->Close();
        fDM->ADOQuery1->SQL->Clear();
        if (fMain->ComboBox2->ItemIndex){
          if(fMain->RadioButton1->Checked){
            fDM->ADOQuery1->SQL->Text="SELECT * FROM ??????????_?????????? WHERE "+Parameter+" LIKE '%"+fMain->Edit1->Text+"%'"+"ORDER BY ???????";
          }else{
            fDM->ADOQuery1->SQL->Text="SELECT * FROM ??????????_?????????? WHERE "+Parameter+" LIKE '%"+fMain->Edit1->Text+"%'"+"ORDER BY ??????? DESC";
          }
        }
        else {
          if(fMain->RadioButton1->Checked){
            fDM->ADOQuery1->SQL->Text="SELECT * FROM ??????????_?????????? WHERE "+Parameter+" LIKE '"+fMain->Edit1->Text+"%'"+"ORDER BY ???????";
          }else{
            fDM->ADOQuery1->SQL->Text="SELECT * FROM ??????????_?????????? WHERE "+Parameter+" LIKE '"+fMain->Edit1->Text+"%'"+"ORDER BY ??????? DESC";
          }
        }
        fDM->ADOQuery1->Open();
        fMain->Label17->Caption=fMain->DBGrid1->DataSource->DataSet->RecordCount;
}
//---------------------------------------------------------------------------
void __fastcall My_search::Switch(){
switch(fMain->ComboBox1->ItemIndex){
        case 0:{
          Choose("???????");
        break;
        }

        case 1:{
          Choose("???");
        break;
        }

        case 2:{
          Choose("????????");
        break;
        }

        case 3:{
          Choose("?????????_???????");
        break;
        }

        case 4:{
          Choose("?????");
        break;
        }

        case 5:{
          Choose("?????");
        break;
        }

        case 6:{
          Choose("???");
        break;
        }

        case 7:{
          Choose("??????");
        break;
        }

        case 8:{
          Choose("????????");
        break;
        }

        case 9:{
          Choose("????????_???????");
        break;
        }

        case 10:{
          Choose("???????????");
        break;
        }

        case 11:{
          Choose("?????????");
        break;
        }

        case 12:{
          Choose("???????_???????");
        break;
        }

        default:{
          throw My_search_exception("??????!\n???????? ???????? ??????!\n???????? ??????: ",fMain->ComboBox1->ItemIndex);
        //break;
        }
}
}

