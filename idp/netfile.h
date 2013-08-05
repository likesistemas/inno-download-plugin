#pragma once

#include "tstring.h"
#include "url.h"

using namespace std;

class NetFile
{
public:
	NetFile(tstring url, tstring filename, int filesize = -1);
	~NetFile();

	tstring getShortName();

	Url       url;
	tstring   name;
	DWORDLONG size;
	DWORDLONG bytesDownloaded;
	bool      downloaded;
};
