/*
 * Verbose functions
 *
 * Copyright (C) 2008-2018, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBCNOTIFY_VERBOSE_H )
#define _LIBCNOTIFY_VERBOSE_H

#include <common.h>
#include <types.h>

#include "libcnotify_extern.h"

#if defined( __cplusplus )
extern "C" {
#endif

#if !defined( __CYGWIN__ )
extern int libcnotify_verbose;
#else
int libcnotify_verbose;
#endif

LIBCNOTIFY_EXTERN \
void libcnotify_verbose_set(
      int verbose );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBCNOTIFY_VERBOSE_H ) */

