#pragma once

#include <windows.h>
#include <commctrl.h>
#include <map>
#include "tstring.h"

using namespace std;

class UI
{
public:
	UI();
	~UI();

	void connectControl(tstring name, HWND handle);
	void setFileName(tstring filename);
	void setProgressInfo(DWORDLONG totalSize, DWORDLONG totalDownloaded, DWORDLONG fileSize, DWORDLONG fileDownloaded);

	bool detailed;

protected:
	static void setLabelText(HWND l, tstring text);
	static void setProgressBarPos(HWND pb, int pos);

	map<string, HWND> controls;
};