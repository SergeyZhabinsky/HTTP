//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
//	WideString sPath = "ya.ru";
//	WideString sPath = "yandex.ru";
	WideString sPath = "about:blank";
//	CppWebBrowser1->Navigate( StringToOleStr(sPath) );
//	EdgeBrowser1->Navigate( sPath );
//	WebBrowser1->Navigate( sPath );
//Variant(WebBrowser1->Document).OlePropertyGet("body").OlePropertySet("outerHTML", "werwrwr");
//	WebBrowser1->Document.
//	WebBrowser1->Navigate("ffff4");
//	IdHTTP1->Get(sPath);
//	WebBrowser1->Document;
//	WebBrowser1->Document->Text;
//	WebBrowser1->OleObject->Document;

/*
TMemoryStream *stm = new TMemoryStream();
char s[] = "<html><head><title>������ �������� </title></head><body>��� ��� ������ ����.\
<br>\
<a href='https://yandex.ru/'> ������� �� yandex </a>\
</body></html>" ;
for (int i=0 ; i < sizeof(s); ++i)
	stm->Write(&s[i],sizeof(char));
stm->Seek(0,0);
IPersistStreamInit *psi;
//TStreamAdapter *sa = new TStreamAdapter(stm,soReference);
_di_IStream sa(*(new TStreamAdapter(stm, soReference)));
CppWebBrowser1->Navigate(sPath.c_bstr());
if (SUCCEEDED(CppWebBrowser1->Document->QueryInterface(IID_IPersistStreamInit,(void **)&psi)))
{
	psi->Load(sa);
	psi->Release();
}
delete stm;
*/
//	V();
	ExcelInit("D:\\myProj\\HTTP\\1.xls");

}
//---------------------------------------------------------------------------
void __fastcall TForm2::WebBrowser1DocumentComplete(TObject *ASender, IDispatch * const pDisp,
		  const OleVariant &URL)
{
//	Memo1->Text = Variant(WebBrowser1->Document).OlePropertyGet("body").OlePropertyGet("parentElement").OlePropertyGet("outerHTML");
//	Variant(WebBrowser1->Document).OlePropertyGet("body").OlePropertyGet("parentElement").OlePropertyGet("outerHTML");
//Variant(WebBrowser1->Document).OlePropertyGet("body").OlePropertyGet("parentElement").OlePropertySet("outerHTML", "werwrwr");
}
//---------------------------------------------------------------------------




void TForm2::V(){
		Variant MyExcel, Bs;
		MyExcel = CreateOleObject("Excel.Application");
		Bs = MyExcel.Exec(PropertyGet("WorkBooks"));
//		Bs.Exec(Function("Open") << L"D:\\\\myProj\\HTTP\\1.xls");
//        Bs.OleProp
		Bs.OlePropertyGet("WorkBooks").OleProcedure("Open", "D:\\myProj\\HTTP\\1.xls");
/*
		MyExcel.OlePropertyGet("WorkBooks").OleProcedure("Open", "D:\\myProj\\HTTP\\1.xls");
		// ��������� ���������� �������: ���-�� �����, ��������
		int iFirstRow = MyExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("UsedRange").OlePropertyGet("Row");
		int iFirstCol = MyExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("UsedRange").OlePropertyGet("Column");
		int iRowsCount = MyExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("UsedRange").OlePropertyGet("Rows").OlePropertyGet("Count");
		int iColsCount = MyExcel.OlePropertyGet("ActiveSheet").OlePropertyGet("UsedRange").OlePropertyGet("Columns").OlePropertyGet("Count");

		// ����� ���������� ������� � Memo
		Memo1->Lines->Add("iFirstRow = " + String(iFirstRow));
		Memo1->Lines->Add("iFirstCol = " + String(iFirstCol));
		Memo1->Lines->Add("iRowsCount = " + String(iRowsCount));
		Memo1->Lines->Add("iColsCount = " + String(iColsCount));

		// ����� ��������� ��� StringGrid
		StringGrid1->FixedCols = 0;
		StringGrid1->FixedRows = 0;
		StringGrid1->RowCount = iRowsCount;
		StringGrid1->ColCount = iColsCount;

		// ���������� StringGrid ���������� �� Excel-�������
		Variant vCells = MyExcel.OlePropertyGet("Cells");

		for ( int i = iFirstRow; i < iFirstRow+iRowsCount; i++ )
		{
				for ( int j = iFirstCol; j < iFirstCol+iColsCount; j++ )
				{
						int iValue = vCells.OlePropertyGet("Item", i, j);
						StringGrid1->Cells[j-iFirstCol][i-iFirstRow] = iValue;
				}
		}
 */
		MyExcel.OleProcedure("Quit"); // �������� Excel}
}




void __fastcall TForm2::ExcelInit(WideString ffile)
{
/*
Variant App,Sh;
// ���� Excel ������� � ������������ � ����
try {
App=Variant::GetActiveObject("Excel.Application");
} catch(...) {
// Excel �� ������� � ��������� ���
try { App=Variant::CreateObject("Excel.Application"); } catch (...) {
Application->MessageBox(L"���������� ������� Microsoft Excel! �������� Excel �� ���������� �� ����������.",L"������",MB_OK+MB_ICONERROR);
} }
try {
Application->MessageBox(ffile.c_bstr(), L"F I L E",MB_OK);
if(ffile!="")
App.OlePropertyGet("WorkBooks").OleProcedure("Open", ffile.c_bstr());
else
App.OlePropertyGet("WorkBooks").OleProcedure("add");
Sh=App.OlePropertyGet("WorkSheets",1);
} catch(...) {
Application->MessageBox(L"������ �������� ����� Microsoft Excel!", L"������",MB_OK+MB_ICONERROR);
}
*/

/*
Variant Excel;
Variant Book;
Variant Sheet;

Excel=CreateOleObject("Excel.Application");
Excel.OlePropertySet("Visible",true);  //����� ������� Excel �������, ����� ���������������� ������
Book=Excel.OlePropertyGet("Workbooks").OlePropertyGet("Open", ffile); //��������� �����, ������ � ���
Sheet=Book.OlePropertyGet("Worksheets", 1); //�������� � ��������� ����� �����
Sheet.OlePropertyGet("Range", "A1");
//this->StringGrid1->Cells[0][0]=Sheet.OlePropertyGet("Range", "A1"); //������� � StringGrid1 �� Excel �������� ������ �1
//
Excel.OleProcedure("Quit");  //��� �� EXCEL.exe �� ���������, ���� �� ������ � �������
*/
//String a=OpenDialog1->FileName;
Variant cnn ;
bool st=false;
try
{
cnn = CreateOleObject("EXCEL.Application");
st=true;
}
catch (...)
{
// MessageBox(0, L"������ ��� �������� ������� excel", L"������", MB_OK);
  return;
  }
 cnn.OlePropertyGet("Workbooks").OlePropertyGet("Open", ffile.c_bstr());

this->StringGrid1->Cells[0][0]=cnn.OlePropertyGet("Cells",1,1);

}/* ExcelInit() */
