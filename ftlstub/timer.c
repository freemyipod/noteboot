//
//
//    Copyright 2009 TheSeven
//
//
//    This file is part of iLoader.
//
//    TheSeven's iBugger is free software: you can redistribute it and/or
//    modify it under the terms of the GNU General Public License as
//    published by the Free Software Foundation, either version 2 of the
//    License, or (at your option) any later version.
//
//    TheSeven's iBugger is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//    See the GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with iLoader.  If not, see <http://www.gnu.org/licenses/>.
//
//


#include <toolkit.h>
#include <timer.h>


void sleep(long duration)  /* in usec steps */
{
    long timestamp = USEC_TIMER;
    while (!TIMEOUT_EXPIRED(timestamp, duration));
}
