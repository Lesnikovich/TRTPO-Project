//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Overload.h"
#include "Call.h"
#include "DM.h"
#include "Phonebook.h"
#include "Report.h"
#include "Add.h"
#include "Editor.h"
#include "Search.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfOverload *fOverload;
//---------------------------------------------------------------------------
__fastcall TfOverload::TfOverload(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
template <typename T1>
class Assignment{
  private:
    int size;
  public:
    T1* data;
    __fastcall Assignment(int size){
      this->size=size;
      this->data=new T1 [size];
      for(int i=0; i<size; i++){
        data[i]=i;
      }
    }
    Assignment & __fastcall operator=(const Assignment & other){
      this->size=other.size;
      if(this->data!=nullptr){
        delete [] this->data;
      }
      this->data=new T1 [other.size];
      for(int i=0; i<other.size; i++){
        this->data[i]=other.data[i];
      }
      return *this;
    }
    __fastcall ~Assignment(){
      delete [] this->data;
    }
};
//---------------------------------------------------------------------------
template <typename T2>
class Compare{
  private:
    T2 x;
    T2 y;
  public:
    __fastcall Compare(){
      x=0;
      y=0;
    }

    __fastcall Compare(T2 valueX, T2 valueY){
      x=valueX;
      y=valueY;
    }

    bool __fastcall operator==(const Compare& other){
      return ((this->x==other.x) && (this->y==other.y));
    }

    bool __fastcall operator!=(const Compare& other){
      return !((this->x==other.x) && (this->y==other.y));
    }
};
//---------------------------------------------------------------------------
template <typename T3>
class Additional{
  private:
    T3 x;
    T3 y;
  public:
    __fastcall Additional(){
      x=0;
      y=0;
    }
    __fastcall Additional(T3 valueX, T3 valueY){
      x=valueX;
      y=valueY;
    }
    Additional __fastcall operator+(const Additional &other){
      Additional temp;
      temp.x = this->x+other.x;
      temp.y = this->y+other.y;
      return temp;
    }
};
//---------------------------------------------------------------------------
template <typename T4>
class Increment{
  private:
    T4 x;
    T4 y;
  public:
    __fastcall Increment(){
      x=0;
      y=0;
    }
    __fastcall Increment(T4 valueX, T4 valueY){
      x=valueX;
      y=valueY;
    }
    Increment & __fastcall operator ++(){
      this->x++;
      this->y++;
      return *this;
    }
    Increment & __fastcall operator ++(int value){
      Increment temp(*this);
      this->x++;
      this->y++;
      return *this;
    }
};
//---------------------------------------------------------------------------
template <typename T5>
class Decrement{
  private:
    T5 x;
    T5 y;
  public:
    __fastcall Decrement(){
      x=0;
      y=0;
    }
    __fastcall Decrement(T5 valueX, T5 valueY){
      x=valueX;
      y=valueY;
    }
    Decrement & __fastcall operator --(){
      this->x--;
      this->y--;
      return *this;
    }
    Decrement & __fastcall operator --(int value){
      Decrement temp(*this);
      this->x--;
      this->y--;
      return temp;
    }
};
//---------------------------------------------------------------------------


