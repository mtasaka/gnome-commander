/** 
 * @file gnome-cmd-remote-dialog.h
 * @copyright (C) 2001-2006 Marcus Bjurman\n
 * @copyright (C) 2007-2012 Piotr Eljasiak\n
 * @copyright (C) 2013-2019 Uwe Scholz\n
 *
 * @copyright This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * @copyright This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * @copyright You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 */
#pragma once

#define GNOME_CMD_TYPE_REMOTE_DIALOG              (gnome_cmd_remote_dialog_get_type ())
#define GNOME_CMD_REMOTE_DIALOG(obj)              (G_TYPE_CHECK_INSTANCE_CAST((obj), GNOME_CMD_TYPE_REMOTE_DIALOG, GnomeCmdRemoteDialog))
#define GNOME_CMD_REMOTE_DIALOG_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST((klass), GNOME_CMD_TYPE_REMOTE_DIALOG, GnomeCmdRemoteDialogClass))
#define GNOME_CMD_IS_REMOTE_DIALOG(obj)           (G_TYPE_CHECK_INSTANCE_TYPE((obj), GNOME_CMD_TYPE_REMOTE_DIALOG))
#define GNOME_CMD_IS_REMOTE_DIALOG_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOME_CMD_TYPE_REMOTE_DIALOG))
#define GNOME_CMD_REMOTE_DIALOG_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS((obj), GNOME_CMD_TYPE_REMOTE_DIALOG, GnomeCmdRemoteDialogClass))

#include "gnome-cmd-con-remote.h"

struct GnomeCmdRemoteDialog
{
    GnomeCmdDialog parent;

    struct Private;

    Private *priv;

    operator GObject * () const             {  return G_OBJECT (this);          }
    operator GtkWidget * () const           {  return GTK_WIDGET (this);        }
    operator GnomeCmdDialog * () const      {  return GNOME_CMD_DIALOG (this);  }

    void do_connect(GnomeCmdConRemote *server=NULL);
};


struct GnomeCmdRemoteDialogClass
{
    GnomeCmdDialogClass parent_class;
};


GType gnome_cmd_remote_dialog_get_type ();

GtkWidget *gnome_cmd_remote_dialog_new ();

void show_quick_connect_dialog ();
