/*
 * obdtrace (header file) - is useful for tracing and performance
 * debug of the Lustre obd protocol stack. obdtrace is a transparent
 * logical obd driver that prints commands their in- and outbound
 * parameters.  obdtrace maintains statistics about number and latency
 * of the obd commands that pass through it. As such it is also use
 * for performance analysis.
 *
 * Copyright (c) 2001  Rumi Zahir <rumi.zahir@intel.com>
 */

#ifndef __OBD_TRACE_H
#define __OBD_TRACE_H

struct obd_device;
struct obdtrace_opstats;

struct trace_obd {
  struct obdtrace_opstats *stats;
};

#endif
