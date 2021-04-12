//---------------------------------------------------------------------------

#include <vcl.h>
#include <ComObj.hpp>
#pragma hdrstop

#include "Report.h"
#include "Add.h"
#include "Call.h"
#include "DM.h"
#include "Phonebook.h"
#include "Editor.h"
#include "Search.h"
#include "Overload.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfReport *fReport;
//---------------------------------------------------------------------------
__fastcall TfReport::TfReport(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Report::report(){
        BYTE keys[256];
        GetKeyboardState(keys);
        keys[17] = 128;
        SetKeyboardState(keys);
        keybd_event(86, 0, 0, 0);
        keybd_event(VK_RETURN, 0, 0 ,0);
        keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP,0);

        if (fMain->OpenDialog1->InitialDir == "") {
          fMain->OpenDialog1->InitialDir = ExtractFilePath(Application->ExeName);
          fMain->OpenDialog1->Title = "Выберите шаблон, на основе которого будет создан новый документ";
        }

        if (!(fMain->OpenDialog1->Execute())) {
          return;
        }

        if (!(FileExists(fMain->OpenDialog1->FileName))) {
          MessageDlg("Файл с заданным именем не найден. Действие отменено.",mtWarning, TMsgDlgButtons()<<mbOK, 0);
          return;
        }

        try {
          wdApp = CreateOleObject("Word.Application");
        }
        catch(...) {
          ShowMessage("Не удалось запустить MS Exel. Действие отменено.");
          return;
        }
}
//---------------------------------------------------------------------------
void __fastcall Excel_report::excel_report(){
AnsiString path = fMain->OpenDialog1->FileName;
//AnsiString path = LoadFromFile(ParamStr(0)) + "\\form.xtl";
mExcel = CreateOleObject("Excel.Application"); //Запускаем экземпляр Excel
mExcel.OlePropertySet("Visible", True); //Делаем экземпляр видимым
mExcel.OlePropertyGet("WorkBooks").OleProcedure("Open", WideString(path));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 3, "B").OlePropertySet("Value",  WideString(fMain->DBEdit1->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 4, "B").OlePropertySet("Value",  WideString(fMain->DBEdit2->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 5, "B").OlePropertySet("Value",  WideString(fMain->DBEdit3->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 6, "B").OlePropertySet("Value",  WideString(fMain->DBEdit4->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 3, "D").OlePropertySet("Value",  WideString(fMain->DBEdit5->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 4, "D").OlePropertySet("Value",  WideString(fMain->DBEdit6->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 5, "D").OlePropertySet("Value",  WideString(fMain->DBEdit7->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 6, "D").OlePropertySet("Value",  WideString(fMain->DBEdit8->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 7, "D").OlePropertySet("Value",  WideString(fMain->DBEdit9->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 8, "D").OlePropertySet("Value",  WideString(fMain->DBEdit10->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 3, "F").OlePropertySet("Value",  WideString(fMain->DBEdit11->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 4, "F").OlePropertySet("Value",  WideString(fMain->DBEdit12->Text));
mExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("Cells", 5, "F").OlePropertySet("Value",  WideString(fMain->DBEdit13->Text));
}
//---------------------------------------------------------------------------

