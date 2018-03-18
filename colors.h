/*
 * Copyright (C) 2018 Hamza Muric
 *
 * Calls the graphics functions specified by the following values.
 * These specified functions remain active until the next occurrence of this escape sequence.
 * Graphics mode changes the colors and attributes of text
 * (such as bold and underline) displayed on the screen.
 *
 * You can find ANSI Escape codes at ASCII table website:
 * http://ascii-table.com/ansi-escape-sequences.php
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#ifndef COLORS_H
#define COLORS_H

#define RESET     "\x1B[0m" // reset to normal
#define BOLD      "\x1B[1m" // bolded text
#define DIM       "\x1B[2m" // dimmed text
#define UNDER     "\x1B[4m" // on monochrome display adapter only
#define BLINK     "\x1B[5m" // doesn't work
#define REVERSE   "\x1B[7m" // reverse background and roreground colors
#define CONCEALED "\x1B[8m" // transparent text

// Foreground (text) colors
#define BLK   "\x1B[30m"  // black
#define RED   "\x1B[31m"  // red
#define GRN   "\x1B[32m"  // green
#define YEL   "\x1B[33m"  // yellow
#define BLU   "\x1B[34m"  // blue
#define MAG   "\x1B[35m"  // magenta
#define CYN   "\x1B[36m"  // cyan
#define WHT   "\x1B[37m"  // white

// Backgroung colors
#define BGBLK   "\x1B[40m"
#define BGRED   "\x1B[41m"
#define BGGRN   "\x1B[42m"
#define BGYEL   "\x1B[43m"
#define BGBLU   "\x1B[44m"
#define BGMAG   "\x1B[45m"
#define BGCYN   "\x1B[46m"
#define BGWHT   "\x1B[47m"

#endif // COLORS_H
