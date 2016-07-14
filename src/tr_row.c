#include "tr_row.h"

void set_tr_defaults(tr_row *t) {
	/* whale_pattern wp[16]; */
	/* u16 series_list[64]; */
	/* u8 series_start, series_end; */

	t->loop_start = 0;
    t->loop_end = 15;
    t->loop_len = 15;
    t->loop_dir = 0; // unused
	t->step_choice = 0;
	t->tr_mode = 0;
    for (int i = 0; i < 16; i++) {
        t->steps[i] = 0;
    }
	// u8 t.step_probs[16];
	// u16 t.cv_values[16];
	// u16 t.cv_steps[2][16];
	// u16 t.cv_curves[2][16];
	// u8 t.cv_probs[2][16];

    t->held_keys = 0;
    t->first_press = 0;
    t->pos = 0;
    t->cut_pos = 0;
    t->next_pos = 0;
    t->drunk_step = 0;
    t->triggered = 0 ;
    t->mute = 1;
    t->pattern = 0;
    t->next_pattern = 0;
    t->pattern_jump = 0;
}
