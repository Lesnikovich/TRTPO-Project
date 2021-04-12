//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DM.h"
#include "Call.h"
#include "Editor.h"
#include "Phonebook.h"
#include "Add.h"
#include "Report.h"
#include "Search.h"
#include "Overload.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfDM *fDM;
//---------------------------------------------------------------------------
__fastcall TfDM::TfDM(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TfDM::DataSource1DataChange(TObject *Sender, TField *Field)
{
        fMain->Label17->Caption=fMain->DBGrid1->DataSource->DataSet->RecordCount;
}
//---------------------------------------------------------------------------




