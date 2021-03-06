//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *paddle1;
        TImage *ball;
        TShape *tlo;
        TImage *paddle2;
        TTimer *paddle1Up;
        TTimer *paddle1Down;
        TTimer *paddle2Up;
        TTimer *paddle2Down;
        TTimer *ballMovement;
        TButton *startGame;
        TButton *onceAgain;
        TLabel *paddle2scoreTable;
        TLabel *paddle1scoreTable;
        TLabel *bounceCount;
        TImage *Image1;
        void __fastcall ballMovementTimer(TObject *Sender);
        void __fastcall paddle1UpTimer(TObject *Sender);
        void __fastcall paddle1DownTimer(TObject *Sender);
        void __fastcall paddle2UpTimer(TObject *Sender);
        void __fastcall paddle2DownTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall startGameClick(TObject *Sender);
        void __fastcall onceAgainClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 