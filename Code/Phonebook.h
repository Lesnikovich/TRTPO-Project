//---------------------------------------------------------------------------

#ifndef PhonebookH
#define PhonebookH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <MPlayer.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TfMain : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TPanel *Panel2;
        TLabel *Label1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TDBGrid *DBGrid1;
        TPanel *Panel3;
        TPanel *Panel4;
        TGroupBox *GroupBox1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TGroupBox *GroupBox2;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TDBEdit *DBEdit5;
        TDBEdit *DBEdit6;
        TDBEdit *DBEdit7;
        TDBEdit *DBEdit8;
        TDBEdit *DBEdit9;
        TDBEdit *DBEdit10;
        TGroupBox *GroupBox3;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TDBEdit *DBEdit11;
        TDBEdit *DBEdit12;
        TDBEdit *DBEdit13;
        TBevel *Bevel1;
        TEdit *Edit1;
        TBitBtn *BitBtn1;
        TComboBox *ComboBox1;
        TLabel *Label15;
        TMediaPlayer *MediaPlayer1;
        TMediaPlayer *MediaPlayer2;
        TMediaPlayer *MediaPlayer3;
        TMediaPlayer *MediaPlayer4;
        TMediaPlayer *MediaPlayer5;
        TMediaPlayer *MediaPlayer6;
        TMediaPlayer *MediaPlayer7;
        TMediaPlayer *MediaPlayer8;
        TMediaPlayer *MediaPlayer9;
        TMediaPlayer *MediaPlayer10;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton3;
        TComboBox *ComboBox2;
        TLabel *Label16;
        TOpenDialog *OpenDialog1;
        TLabel *Label17;
        TLabel *Label18;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TBevel *Bevel2;
        TBevel *Bevel3;
        TBevel *Bevel4;
        TDBNavigator *DBNavigator1;
        TBevel *Bevel5;
        TSpeedButton *SpeedButton4;
        TBevel *Bevel6;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall ComboBox2Change(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfMain *fMain;
//---------------------------------------------------------------------------
#endif
