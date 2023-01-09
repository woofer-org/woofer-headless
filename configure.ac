# SPDX-License-Identifier: GPL-3.0-or-later
#
# configure.ac  This file is part of Woofer Headless
# Copyright (C) 2022  Quico Augustijn
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed "as is" in the hope that it will be
# useful, but WITHOUT ANY WARRANTY; without even the implied warranty
# of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  If your
# computer no longer boots, divides by 0 or explodes, you are the only
# one responsible.  See the GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# version 3 along with this program.  If not, see
# <https://www.gnu.org/licenses/gpl-3.0.html>.
#
#
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.69)
AC_INIT([Woofer], [0.1.0], [quico.public@gmail.com], [woofer-headless], [https://github.com/woofer-org/woofer-headless])

# Checks for programs
AC_PROG_CC
AC_PROG_CC_STDC
AC_PROG_MKDIR_P

# Checks for application library
AC_CHECK_LIB([woofer], [wf_app_get_type])

# Check required libraries
PKG_CHECK_MODULES([GLIB], [glib-2.0 >= 2.0])
PKG_CHECK_MODULES([GIO], [gio-2.0 >= 2.0])
PKG_CHECK_MODULES([GOBJECT], [gobject-2.0 >= 2.0])
PKG_CHECK_MODULES([GSTREAMER], [gstreamer-1.0 >= 1.0])

AC_CONFIG_FILES([Makefile])

AC_OUTPUT
