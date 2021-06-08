#ifndef FILER_H
#define FILER_H

extern char FilerMsg[];

// �g���q�Ǘ��p
typedef struct {
	char *szExt;
	int nExtId;
} EXTENTIONS, *LPEXTENTIONS;

int getExtId(const char *szFilePath, LPEXTENTIONS pExt);

int getFilePath(char *out, char *pszStartPath, LPEXTENTIONS pExt, int nOldSel);

// �L���Ȋg���q
enum {
	EXT_NES,
	EXT_ZIP,
	EXT_ALL,
	EXT_UNKNOWN
};



#endif
