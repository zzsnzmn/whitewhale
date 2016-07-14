#ifndef TR_ROW_H
#define TR_ROW_H
#include "types.h"

typedef struct {
	/* whale_pattern wp[16]; */
	/* u16 series_list[64]; */
	/* u8 series_start, series_end; */

	u8 loop_start;
    u8 loop_end;
    u8 loop_len;
    u8 loop_dir; // unused
	u16 step_choice;
	u8 tr_mode;
	/* step_modes step_mode; */
	u8 steps[16];
	u8 step_probs[16];
	u8 cv_probs[2][16];

    s8 pos;
    s8 cut_pos;
    s8 next_pos;
    s8 drunk_step;
    s8 triggered;
    u8 mute;
    u8 pattern;
    u8 next_pattern;
    u8 pattern_jump;
    u8 pin;

    u8 held_keys;
    u8 first_press;

} tr_row;

// extern void set_tr_defaults(tr_row *t);
void set_tr_defaults(tr_row *t);
#endif
