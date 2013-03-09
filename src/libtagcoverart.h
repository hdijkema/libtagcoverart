/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 2; tab-width: 2 -*- */
/*
 * libtagcoverart.h
 * Copyright (C) 2013 Hans Oesterholt <debian@oesterholt.net>
 * 
 * libtagcoverart is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * libtagcoverart is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __TAGCOVERART_HOD
#define __TAGCOVERART_HOD

#ifdef __cplusplus
extern "C" {
#endif

#include <elementals.h>

typedef struct{
  char* media_file;
  void* ccover;
} tag_cover_art_t; 

tag_cover_art_t* tag_cover_art_new(const char* media_file);
el_bool tag_cover_art_extract(tag_cover_art_t* tag, const char* target_file);
void tag_cover_art_destroy(tag_cover_art_t* tag);

#ifdef __cplusplus
}
#endif


#endif
