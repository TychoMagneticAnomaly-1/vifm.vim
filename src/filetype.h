/* vifm
 * Copyright (C) 2001 Ken Steen.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#ifndef __FILETYPE_H__
#define __FILETYPE_H__

typedef struct
{
	char *type;
	char *ext;
	char *programs;
}filetype_t;

typedef struct
{
	char *ext;
	char *viewer;
}fileviewer_t;

filetype_t *filetypes;
fileviewer_t *fileviewers;
char * get_default_program_for_file(char *file);
char * get_viewer_for_file(char *file);
void add_filetype(char *description, char *extension, char *programs);
void add_fileviewer(char *extension, char *viewer);
void set_programs(char *extension, char *programs);
char * get_all_programs_for_file(char *file);

#endif

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab cinoptions-=(0 : */
/* vim: set cinoptions+=t0 : */
