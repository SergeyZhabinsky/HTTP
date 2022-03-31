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
	IdSMTP1->Username = "szhab@list.ru";//{Должно совпадать с msg.From.Address}
	IdSMTP1->Password = "gobli0000";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
IdSSLIOHandlerSocketOpenSSL1->SSLOptions->Method=sslvTLSv1;//Метод отправики TLS версии 1
IdSMTP1->IOHandler=IdSSLIOHandlerSocketOpenSSL1;//Присоединяем SSL
IdSMTP1->AuthType=satDefault; //Использоватб авторизацию
IdSMTP1->UseTLS=utUseImplicitTLS;//Использовать TLS
IdSMTP1->Port=465;//Порт
IdSMTP1->Username="szhab";//  Логин почтовика отправителя
IdSMTP1->Password="gobli0000";// Пароль от почтовика отправителя
IdSMTP1->Host="smtp.mail.ru";//Хост отправителя
IdSMTP1->ReadTimeout=15000;//Таймаут
//Само письмо
IdMessage1->CharSet="UTF-8"; //Кодировка для письма. Чтобы не пришли вместо букв символы.
IdMessage1->Subject="Первое письмо на С++";//Тема письма
IdMessage1->Body->Text=L"Тестовое письмо";// Текст поля письма
IdMessage1->From->Text="szhab@list.ru";// Кто отправил
 IdMessage1->Recipients->EMailAddresses="szhab@list.ru";//Кому письмо

 //Соединяемся
  IdSMTP1->Connect();
  //Отправляем письмо
  IdSMTP1->Send(IdMessage1);
  //Закрываем соединение
  IdSMTP1->Disconnect();}
//---------------------------------------------------------------------------
