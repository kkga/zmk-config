#define XXX &none
#define ___ &trans

// Layer definitions
#define QWR 0
#define CLM 1
#define NUM 2
#define SYM 3
#define EXT 4
#define FUN 5

// Custom keycodes
#define MEH    LS(LA(LCTRL))
#define D_LT   LC(LG(LEFT))
#define D_RT   LC(LG(RIGHT))
#define TAB_RT LC(TAB)
#define TAB_LT LC(LS(TAB))
#define BSPWRD LA(LC(BSPC))

// Custom behaviors to emulate callum-style sticky keys, implemented in keymap file
#define SK(KEY)   &nk     KEY   KEY
#define MO(LAYER) &mo_tap LAYER F24

// Keep sticky keys active for a long time so they effectively do not time out
#define STICKY_KEY_TIMEOUT 60000
