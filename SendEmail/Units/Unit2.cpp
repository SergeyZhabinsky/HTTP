//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormShow(TObject *Sender)
{
	IdSMTP1->Host = "smtp.yandex.ru";
	IdSMTP1->Port = 465;
	IdSMTP1->AuthType = satDefault;
	IdSMTP1->Username = "szhab@list.ru";//{������ ��������� � msg.From.Address}
	IdSMTP1->Password = "gobli0000";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
IdSSLIOHandlerSocketOpenSSL1->SSLOptions->Method=sslvTLSv1;//����� ��������� TLS ������ 1
IdSMTP1->IOHandler=IdSSLIOHandlerSocketOpenSSL1;//������������ SSL
IdSMTP1->AuthType=satDefault; //������������ �����������
IdSMTP1->UseTLS=utUseImplicitTLS;//������������ TLS
IdSMTP1->Port=465;//����
IdSMTP1->Username="szhab";//  ����� ��������� �����������
IdSMTP1->Password="gobli0000";// ������ �� ��������� �����������
IdSMTP1->Host="smtp.mail.ru";//���� �����������
IdSMTP1->ReadTimeout=15000;//�������
//���� ������
IdMessage1->CharSet="UTF-8"; //��������� ��� ������. ����� �� ������ ������ ���� �������.
IdMessage1->Subject="������ ������ �� �++";//���� ������
IdMessage1->Body->Text=L"�������� ������";// ����� ���� ������
IdMessage1->From->Text="szhab@list.ru";// ��� ��������
 IdMessage1->Recipients->EMailAddresses="szhab@list.ru";//���� ������

 //�����������
  IdSMTP1->Connect();
  //���������� ������
  IdSMTP1->Send(IdMessage1);
  //��������� ����������
  IdSMTP1->Disconnect();}
//---------------------------------------------------------------------------
