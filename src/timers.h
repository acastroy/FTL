/* Pi-hole: A black hole for Internet advertisements
*  (c) 2019 Pi-hole, LLC (https://pi-hole.net)
*  Network-wide ad blocking via your own hardware.
*
*  FTL Engine
*  Timer prototypes
*
*  This file is copyright under the latest version of the EUPL.
*  Please see LICENSE file for your rights under this license. */
#ifndef TIMERS_H
#define TIMERS_H

// Timer enumeration
enum { DATABASE_WRITE_TIMER, EXIT_TIMER, GC_TIMER, LISTS_TIMER, REGEX_TIMER, ARP_TIMER, LAST_TIMER };

#define NUMTIMERS LAST_TIMER

void timer_start(const int i);
double timer_elapsed_msec(const int i);
void sleepms(const int milliseconds);

#endif //TIMERS_H
