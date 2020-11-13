/* Copyright (c) 2002, 2004 Marek Michalkiewicz
   Copyright (c) 2005, 2006, 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   avr/wdt.h - macros for AVR watchdog timer
 */

#ifndef _AVR_WDT_H_
#define _AVR_WDT_H_

#define wdt_reset()
#define wdt_enable(timeout)
#define wdt_disable()
#define WDTO_15MS   0

/** \ingroup avr_watchdog
    See \c WDTO_15MS */
#define WDTO_30MS   1

/** \ingroup avr_watchdog
    See \c WDTO_15MS */
#define WDTO_60MS   2

/** \ingroup avr_watchdog
    See \c WDTO_15MS */
#define WDTO_120MS  3

/** \ingroup avr_watchdog
    See \c WDTO_15MS */
#define WDTO_250MS  4

/** \ingroup avr_watchdog
    See \c WDTO_15MS */
#define WDTO_500MS  5

/** \ingroup avr_watchdog
    See \c WDTO_15MS */
#define WDTO_1S     6

/** \ingroup avr_watchdog
    See \c WDTO_15MS */
#define WDTO_2S     7

#define WDTO_4S     8

#define WDTO_8S     9

#endif /* _AVR_WDT_H_ */
