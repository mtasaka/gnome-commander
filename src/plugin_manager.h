/*
    GNOME Commander - A GNOME based file manager 
    Copyright (C) 2001-2003 Marcus Bjurman

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/ 

#ifndef __PLUGIN_MANAGER_H__
#define __PLUGIN_MANAGER_H__

#include <gmodule.h>

typedef struct {
	gboolean active;
	gboolean loaded;
	gboolean autoload;
	gchar *fname;
	gchar *fpath;	
	GnomeCmdPlugin *plugin;
	PluginInfo *info;
	GtkWidget *menu;
	GModule *module;
} PluginData;


void plugin_manager_init (void);
void plugin_manager_shutdown (void);
GList *plugin_manager_get_all (void);
void plugin_manager_show (void);

#endif //__PLUGIN_MANAGER_H__
