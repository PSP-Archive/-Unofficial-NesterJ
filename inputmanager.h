#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H
#include "nes/types.h"

// ���Lenum��char*array�͓��������ŕ���ł���K�v������܂��B
enum {
	RAPID_30COUNT = 0,
	RAPID_20COUNT,
	RAPID_15COUNT,
	RAPID_10COUNT,
	RAPID_COUNT	// Last
};

static const char *aszRapidModeName[] =
{
	"30count/sec(NTSC)",
	"20count/sec(NTSC)",
	"15count/sec(NTSC)",
	"10count/sec(NTSC)",
	NULL
};


void InputUpdatePad(void);
void InputUpdateRapid(void);

typedef struct {
	boolean bRapidA;
	boolean bRapidB;
	int nSpeedMode;
}KeyState;

extern KeyState stKeyState;

#endif
