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

#ifndef __FILE_ROLLER_PLUGIN_H__
#define __FILE_ROLLER_PLUGIN_H__


#define FILE_ROLLER_PLUGIN(obj) \
	GTK_CHECK_CAST (obj, file_roller_plugin_get_type (), FileRollerPlugin)
#define FILE_ROLLER_PLUGIN_CLASS(klass) \
	GTK_CHECK_CLASS_CAST (klass, file_roller_plugin_get_type (), FileRollerPluginClass)
#define IS_FILE_ROLLER_PLUGIN(obj) \
    GTK_CHECK_TYPE (obj, file_roller_plugin_get_type ())


typedef struct _FileRollerPlugin FileRollerPlugin;
typedef struct _FileRollerPluginClass FileRollerPluginClass;
typedef struct _FileRollerPluginPrivate FileRollerPluginPrivate;

struct _FileRollerPlugin
{
	GnomeCmdPlugin parent;

	FileRollerPluginPrivate *priv;
};

struct _FileRollerPluginClass
{
	GnomeCmdPluginClass parent_class;
};


GtkType
file_roller_plugin_get_type (void);

GnomeCmdPlugin *
file_roller_plugin_new (void);



#endif //__FILE_ROLLER_PLUGIN_H__
