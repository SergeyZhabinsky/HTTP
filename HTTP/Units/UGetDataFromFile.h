//---------------------------------------------------------------------------

#ifndef UGetDataFromFileH
#define UGetDataFromFileH

#include "UDataFrom.h"


class GetDataFromFile : public GetDataFrom{

	public:
		GetDataFromFile(WideString sPath);
		WideString getData(){return sPath + " CHILD";}
};


//---------------------------------------------------------------------------
#endif
