//---------------------------------------------------------------------------

#ifndef UDataFromH
#define UDataFromH


#include <System.Classes.hpp>


class GetDataFrom{

	public:
		enum typeReceiving{tFile, tDb};
		GetDataFrom(){}
		GetDataFrom(WideString sPath);

		virtual WideString getData(){return sPath + "PARENT";}

	protected:
		WideString sPath;
};


//---------------------------------------------------------------------------
#endif
