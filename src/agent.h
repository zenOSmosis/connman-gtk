/*
 * ConnMan GTK GUI
 *
 * Copyright (C) 2015 Intel Corporation. All rights reserved.
 * Author: Jaakko Hannikainen <jaakko.hannikainen@intel.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CONNMAN_GTK_AGENT_H
#define _CONNMAN_GTK_AGENT_H

#include <gio/gio.h>

void register_agent(GDBusConnection *connection, GDBusProxy *manager);
void register_vpn_agent(GDBusConnection *connection, GDBusProxy *vpn_manager);
void agent_release(void);
void vpn_agent_release(void);

#endif /* _CONNMAN_GTK_AGENT_H */
