#ifndef RENCACHE_H
#define RENCACHE_H

#include <stdbool.h>
#include <lua.h>
#include "renderer.h"

void  rencache_show_debug(bool enable);
void  rencache_set_clip_rect(RenRect rect);
void  rencache_draw_rect(RenRect rect, RenColor color);
double rencache_draw_text(RenWindow *window_renderer, RenFont **font, const char *text, size_t len, double x, double y, RenColor color);
void  rencache_invalidate(void);
void  rencache_begin_frame(RenWindow *window_renderer);
void  rencache_end_frame(RenWindow *window_renderer);

#endif
