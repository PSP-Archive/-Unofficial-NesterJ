#ifndef _SCREEN_MANAGER
#define _SCREEN_MANAGER

#include "nes/types.h"
#include "nes/pixmap.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

// ���Lenum��char*array�͓��������ŕ���ł���K�v������܂��B
enum {
	SCREEN_NORMAL = 0,
	SCREEN_FULL,
	SCREEN_X15,
	SCREEN_X15_CROPPED,
    SCREEN_GPU_NORMAL,
    SCREEN_GPU_X15,
    SCREEN_GPU_FULL,
	SCREEN_COUNT	// Last
};

static const char *aszScreenName[] =
{
	"NORMAL",
	"FULL SCREEN",
	"x1.5 [4:2.8333]",
	"x1.5 [4:2.9166](cropped)",
    "GPU NORMAL",
    "GPU 4:3",
    "GPU FULL SCREEN",
	NULL
};

// ��ʂɃ��b�Z�[�W�\���p
void Scr_SetMessage(const char *pszMsg);

// �p���b�g�ʒm pal[NES_MAX_COLORS][3]
void Scr_AssertPalette(uint8 pal[][3]);

// ��ʃ��[�h PAL or NTSC
void Scr_SetScreenMode(const unsigned char ScreenMode);

// �w�肵���F�œh��Ԃ�
void Scr_ClearScreen(const uint8 PalNum);

// ��ʂ֓]��
void Scr_BltScreen(void);

// �`�惍�b�N
boolean Scr_Lock(pixmap *p);

// �`��A�����b�N
void Scr_Unlock(void);


// create thumbnail from current emu
boolean CreateThumnailFile(char *szThumbnailPath);
// load thumbnail
boolean LoadThumnailFile(char *szThumbnailPath, uint16 *pBuf);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif
