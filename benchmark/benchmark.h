/*
 * Copyright (C) 2011 - David Goulet <david.goulet@polymtl.ca>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; only version 2
 * of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef _BENCHMARK_H
#define _BENCHMARK_H

#include <stdint.h>
#include <urcu/arch.h>

#include "cpu.h"
#include "measures.h"

#define RESULTS_FILE_NAME "/tmp/lttng-bench-results.txt"

void benchmark_print_boot_results(void);

#define record_cycles(name) \
	time_##name = get_cycles();

#define tracepoint(name, args...)		\
	do {								\
		record_cycles(name);			\
	} while (0)

#endif /* _BENCHMARK_H */
