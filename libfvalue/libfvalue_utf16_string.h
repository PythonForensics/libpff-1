/*
 * UTF-16 string value functions
 *
 * Copyright (C) 2010-2018, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _LIBVALUE_UTF16_STRING_H )
#define _LIBVALUE_UTF16_STRING_H

#include <common.h>
#include <types.h>

#include "libfvalue_definitions.h"
#include "libfvalue_extern.h"
#include "libfvalue_libcerror.h"
#include "libfvalue_types.h"

#if defined( _cplusplus )
extern "C" {
#endif

LIBFVALUE_EXTERN \
int libfvalue_utf16_string_split(
     const uint16_t *utf16_string,
     size_t utf16_string_size,
     uint16_t delimiter,
     libfvalue_split_utf16_string_t **split_string,
     libcerror_error_t **error );

#if defined( _cplusplus )
}
#endif

#endif /* !defined( _LIBVALUE_UTF16_STRING_H ) */

