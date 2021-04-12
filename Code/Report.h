//---------------------------------------------------------------------------

#ifndef ReportH
#define ReportH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TfReport : public TForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
        __fastcall TfReport(TComponent* Owner);
};
//---------------------------------------------------------------------------
class Report{
protected:
Variant mExcel ,wdApp;
public:
void __fastcall report();
};
//---------------------------------------------------------------------------
class Excel_report:public Report{
public:
void __fastcall excel_report();
};
//---------------------------------------------------------------------------
extern PACKAGE TfReport *fReport;
//---------------------------------------------------------------------------
#endif
