//---------------------------------------------------------------------------

#ifndef UMainH
#define UMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <SHDocVw.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.OleCtrls.hpp>
#include "SHDocVw_OCX.h"
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *Button1;
	TCppWebBrowser *CppWebBrowser1;
	TMemo *Memo1;
	TStringGrid *StringGrid1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall WebBrowser1DocumentComplete(TObject *ASender, IDispatch * const pDisp,
          const OleVariant &URL);
private:	// User declarations


	void V();
    void __fastcall ExcelInit(WideString File);

public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
