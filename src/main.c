/* SPDX-License-Identifier: GPL-3.0-or-later
 *
 * main.c  This file is part of Woofer Headless
 * Copyright (C) 2022  Quico Augustijn
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed "as is" in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  If your
 * computer no longer boots, divides by 0 or explodes, you are the only
 * one responsible.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 3 along with this program.  If not, see
 * <https://www.gnu.org/licenses/gpl-3.0.html>.
 */

#include <glib.h>
#include <gio/gio.h>
#include <glib-object.h>
#include <woofer/app.h>

// Starting point of everything
int
main(int argc, char *argv[])
{
	WfApp *wf_app;
	GApplication *g_app;
	int status;

	wf_app = (WfApp *) g_object_new(WF_TYPE_APP, NULL);
	g_app = G_APPLICATION(wf_app);

	status = g_application_run(g_app, (gint) argc, (gchar **) argv);

	g_object_unref(wf_app);

	return status;
}

/* END OF FILE */
