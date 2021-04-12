//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Phonebook.cpp", fMain);
USEFORM("DM.cpp", fDM); /* TDataModule: File Type */
USEFORM("Add.cpp", fAdd);
USEFORM("Editor.cpp", fEditor);
USEFORM("Call.cpp", fCall);
USEFORM("Report.cpp", fReport);
USEFORM("Search.cpp", fSearch);
USEFORM("Overload.cpp", fOverload);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TfMain), &fMain);
                 Application->CreateForm(__classid(TfDM), &fDM);
                 Application->CreateForm(__classid(TfAdd), &fAdd);
                 Application->CreateForm(__classid(TfEditor), &fEditor);
                 Application->CreateForm(__classid(TfCall), &fCall);
                 Application->CreateForm(__classid(TfReport), &fReport);
                 Application->CreateForm(__classid(TfSearch), &fSearch);
                 Application->CreateForm(__classid(TfOverload), &fOverload);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
