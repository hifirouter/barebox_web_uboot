/* GENERATED FILE - DO NOT EDIT */
/*
 * Copyright Altera Corporation (C) 2012-2014. All rights reserved
 *
 * SPDX-License-Identifier:    BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *    * Neither the name of Altera Corporation nor the
 *      names of its contributors may be used to endorse or promote products
 *      derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ALTERA CORPORATION BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <mach/scan-manager.h>

static const unsigned long iocsr_scan_chain0_table[((CONFIG_HPS_IOCSR_SCANCHAIN0_LENGTH / 32) + 1)] = {
	0x00000000,
	0x00000000,
	0x0FF00000,
	0xC0000000,
	0x0000003F,
	0x00008000,
	0x00060180,
	0x18060000,
	0x18000000,
	0x00018060,
	0x00000000,
	0x00004000,
	0x000300C0,
	0x0C030000,
	0x0C000000,
	0x00000030,
	0x0000C030,
	0x00002000,
	0x00018060,
	0x06018000,
	0x06000000,
	0x00000018,
	0x00006018,
	0x00001000,
};

static const unsigned long iocsr_scan_chain1_table[((CONFIG_HPS_IOCSR_SCANCHAIN1_LENGTH / 32) + 1)] = {
	0x000C0300,
	0x300C0000,
	0x300000C0,
	0x000000C0,
	0x000300C0,
	0x00008000,
	0x00060180,
	0x18060000,
	0x18000000,
	0x00000060,
	0x00018060,
	0x00004000,
	0x000300C0,
	0x0C030000,
	0x0C000000,
	0x00000030,
	0x0000C030,
	0x00002000,
	0x06018060,
	0x06018000,
	0x01FE0000,
	0xF8000000,
	0x00000007,
	0x00001000,
	0x0000C030,
	0x0300C000,
	0x03000000,
	0x0000300C,
	0x0000300C,
	0x00000800,
	0x00000000,
	0x00000000,
	0x01800000,
	0x00000006,
	0x00001806,
	0x00000400,
	0x00000000,
	0x00C03000,
	0x00000003,
	0x00000000,
	0x00000000,
	0x00000200,
	0x00601806,
	0x00000000,
	0x80600000,
	0x80000601,
	0x00000601,
	0x00000100,
	0x00300C03,
	0xC0300C00,
	0xC0300000,
	0xC0000300,
	0x000C0300,
	0x00000080,
};

static const unsigned long iocsr_scan_chain2_table[((CONFIG_HPS_IOCSR_SCANCHAIN2_LENGTH / 32) + 1)] = {
	0x300C0300,
	0x00000000,
	0x0FF00000,
	0x00000000,
	0x0C0300C0,
	0x00008000,
	0x18060180,
	0x18060000,
	0x18000100,
	0x00018060,
	0x00018060,
	0x00004000,
	0x200700C0,
	0x0C030000,
	0x00000030,
	0x00000000,
	0x0300C030,
	0x00002000,
	0x10018060,
	0x06018000,
	0x06000000,
	0x00010038,
	0x00006018,
	0x00001000,
	0x0000C030,
	0x00000000,
	0x03000000,
	0x0000800C,
	0x00C0300C,
	0x00000800,
};

static const unsigned long iocsr_scan_chain3_table[((CONFIG_HPS_IOCSR_SCANCHAIN3_LENGTH / 32) + 1)] = {
	0x0CC20D80,
	0x0C3000FF,
	0x0A804001,
	0x07900000,
	0x08020000,
	0x00100000,
	0x0A800000,
	0x07900000,
	0x08020000,
	0x00100000,
	0x20430000,
	0x0C003001,
	0x00C00481,
	0x00000000,
	0x00000021,
	0x82000004,
	0x05400000,
	0x03C80000,
	0x04010000,
	0x00080000,
	0x05400000,
	0x03C80000,
	0x05400000,
	0x03C80000,
	0x90218000,
	0x86001800,
	0x00600240,
	0x80090218,
	0x00000001,
	0x40000002,
	0x02A00000,
	0x01E40000,
	0x02A00000,
	0x01E40000,
	0x02A00000,
	0x01E40000,
	0x02A00000,
	0x01E40000,
	0x4810C000,
	0x43000C00,
	0x00300120,
	0xC004810C,
	0x12043000,
	0x20000300,
	0x00040000,
	0x50670000,
	0x00000010,
	0x24590000,
	0x00001000,
	0xA0000034,
	0x0D000001,
	0xC0680A28,
	0x45034030,
	0x12481A01,
	0x80A280D0,
	0x34030C06,
	0x01A01450,
	0x280D0000,
	0x30C0680A,
	0x02490340,
	0xD000001A,
	0x0680A280,
	0x10040000,
	0x00200000,
	0x10040000,
	0x00200000,
	0x15000000,
	0x0F200000,
	0x15000000,
	0x0F200000,
	0x01FE0000,
	0x18000000,
	0x01800902,
	0x00240860,
	0x007F8006,
	0x00000000,
	0x0A800001,
	0x07900000,
	0x0A800000,
	0x07900000,
	0x0A800000,
	0x07900000,
	0x08020000,
	0x00100000,
	0x20430000,
	0x0C003001,
	0x00C00481,
	0x00000FF0,
	0x4810C000,
	0x80000C00,
	0x05400000,
	0x02480000,
	0x04000000,
	0x00080000,
	0x05400000,
	0x03C80000,
	0x05400000,
	0x03C80000,
	0x90218000,
	0x86001800,
	0x00600240,
	0x80090218,
	0x24086001,
	0x40000600,
	0x02A00040,
	0x01E40000,
	0x02A00000,
	0x01E40000,
	0x02A00000,
	0x01E40000,
	0x02A00000,
	0x01E40000,
	0x4810C000,
	0x43000C00,
	0x00300120,
	0xC004810C,
	0x12043000,
	0x20000300,
	0x00040000,
	0x50670000,
	0x00000010,
	0x24590000,
	0x00001000,
	0xA0000034,
	0x0D000001,
	0xC0680A28,
	0x49034030,
	0x12481A02,
	0x80A280D0,
	0x34030C06,
	0x01A00040,
	0x280D0002,
	0x30C0680A,
	0x02490340,
	0xD00A281A,
	0x0680A280,
	0x10040000,
	0x00200000,
	0x10040000,
	0x00200000,
	0x15000000,
	0x0F200000,
	0x15000000,
	0x0F200000,
	0x01FE0000,
	0x18000000,
	0x01800902,
	0x00240860,
	0x007F8006,
	0x00000000,
	0x99300001,
	0x34343400,
	0xAA0D4000,
	0x01C3A800,
	0xAA0D4000,
	0x01C3A800,
	0xAA0D4000,
	0x01C3A800,
	0x00040100,
	0x00000800,
	0x00000000,
	0x00001208,
	0x00482000,
	0x01000000,
	0x00000000,
	0x00410482,
	0x0006A000,
	0x0001B400,
	0x00020000,
	0x00000400,
	0x0002A000,
	0x0001E400,
	0x5506A000,
	0x00E1D400,
	0x00000000,
	0x2043090C,
	0x00003001,
	0x90400000,
	0x00000000,
	0x2020C243,
	0x2A835000,
	0x0070EA00,
	0x2A835000,
	0x0070EA00,
	0x2A835000,
	0x0070EA00,
	0x00010040,
	0x00000200,
	0x00000000,
	0x00000482,
	0x00120800,
	0x00002000,
	0x80000000,
	0x00104120,
	0x00000200,
	0xAC0D5F80,
	0x7FFFFFFF,
	0x14F36080,
	0x1A041404,
	0x00D00000,
	0x18864000,
	0x49247A06,
	0xF228A3D5,
	0xF6D1451E,
	0x0342E388,
	0x821A0000,
	0x0000D000,
	0x05140680,
	0xD949247A,
	0x1EF228A3,
	0x88F6D145,
	0x000352E3,
	0x00080200,
	0x00001000,
	0x00080200,
	0x00001000,
	0x000A8000,
	0x00075000,
	0x541A8000,
	0x03875001,
	0x10000000,
	0x00000000,
	0x0080C000,
	0x41000000,
	0x00003FC2,
	0x00820000,
	0xAA0D4000,
	0x01C3A800,
	0xAA0D4000,
	0x01C3A800,
	0xAA0D4000,
	0x01C3A800,
	0x00040100,
	0x00000800,
	0x00000000,
	0x00001208,
	0x00482000,
	0x00008000,
	0x00000000,
	0x00410482,
	0x0006A000,
	0x0001B400,
	0x00020000,
	0x00000400,
	0x00020080,
	0x00000400,
	0x5506A000,
	0x00E1D400,
	0x00000000,
	0x0000090C,
	0x00000010,
	0x90400000,
	0x00000000,
	0x2020C243,
	0x2A835000,
	0x0070EA00,
	0x2A835000,
	0x0070EA00,
	0x2A835000,
	0x0070EA00,
	0x00015000,
	0x0000F200,
	0x00000000,
	0x00000482,
	0x86120800,
	0x00600240,
	0x80000000,
	0x00104120,
	0x00000200,
	0xAC0D5F80,
	0x7FFFFFFF,
	0x14F36080,
	0x1A041404,
	0x00D00000,
	0x18864000,
	0x49247A06,
	0xF3CF23D5,
	0xF4D1451E,
	0x034A9248,
	0x821A038E,
	0x0000D000,
	0x00000680,
	0xD949247A,
	0x1EF3CF23,
	0x88F4D145,
	0x000352E3,
	0x00080200,
	0x00001000,
	0x00080200,
	0x00001000,
	0x000A8000,
	0x00075000,
	0x541A8000,
	0x03875001,
	0x10000000,
	0x00000000,
	0x0080C000,
	0x41000000,
	0x04000002,
	0x00820000,
	0xAA0D4000,
	0x01C3A800,
	0xAA0D4000,
	0x01C3A800,
	0xAA0D4000,
	0x01C3A800,
	0x00040100,
	0x00000800,
	0x00000000,
	0x00001208,
	0x00482000,
	0x00008000,
	0x00000000,
	0x00410482,
	0x0006A000,
	0x0001B400,
	0x00020000,
	0x00000400,
	0x0002A000,
	0x0001E400,
	0x5506A000,
	0x00E1D400,
	0x00000000,
	0x2043090C,
	0x00003001,
	0x90400000,
	0x00000000,
	0x2020C243,
	0x2A835000,
	0x0070EA00,
	0x2A835000,
	0x0070EA00,
	0x2A835000,
	0x0070EA00,
	0x00010040,
	0x00000200,
	0x00000000,
	0x00000482,
	0x00120800,
	0x00002000,
	0x80000000,
	0x00104120,
	0x00000200,
	0xAC0D5F80,
	0x7FFFFFFF,
	0x14F36080,
	0x1A041404,
	0x00D00000,
	0x18864000,
	0x49247A06,
	0xF228A3D9,
	0xF4D1451E,
	0x034A9248,
	0x821A0000,
	0x0000D000,
	0x00000680,
	0xD949247A,
	0x1EF228A3,
	0x88F4D145,
	0x000352E3,
	0x00080200,
	0x00001000,
	0x00080200,
	0x00001000,
	0x000A8000,
	0x00075000,
	0x541A8000,
	0x03875001,
	0x10000000,
	0x00000000,
	0x0080C000,
	0x41000000,
	0x04000002,
	0x00820000,
	0xAA0D4000,
	0x01C3A800,
	0xAA0D4000,
	0x01C3A800,
	0xAA0D4000,
	0x01C3A800,
	0x00040100,
	0x00000800,
	0x00000000,
	0x00001208,
	0x00482000,
	0x00008000,
	0x00000000,
	0x00410482,
	0x0006A000,
	0x0001B400,
	0x00020000,
	0x00000400,
	0x00020080,
	0x00000400,
	0x5506A000,
	0x00E1D400,
	0x00000000,
	0x0000090C,
	0x00000010,
	0x90400000,
	0x00000000,
	0x2020C243,
	0x2A835000,
	0x0070EA00,
	0x2A835000,
	0x0070EA00,
	0x2A835000,
	0x0070EA00,
	0x00010040,
	0x00000200,
	0x00000000,
	0x00000482,
	0x00120800,
	0x00400000,
	0x80000000,
	0x00104120,
	0x00000200,
	0xAC0D5F80,
	0x7FFFFFFF,
	0x14F16080,
	0x1A041404,
	0x00D00000,
	0x08864000,
	0x49247A02,
	0xF3CF23D9,
	0xF4D1451E,
	0x0342E388,
	0x821A0000,
	0x0000D000,
	0x00000680,
	0xD949247A,
	0x1EF3CF23,
	0x88F4DE79,
	0x000342A2,
	0x00080200,
	0x00001000,
	0x00080200,
	0x00001000,
	0x000A8000,
	0x00075000,
	0x541A8000,
	0x03875001,
	0x10000000,
	0x00000000,
	0x0080C000,
	0x41000000,
	0x04000002,
	0x00820000,
	0x00489800,
	0x801A1A1A,
	0x00000200,
	0x80000004,
	0x00000200,
	0x80000004,
	0x00000200,
	0x80000004,
	0x00000200,
	0x00000004,
	0x00040000,
	0x10000000,
	0x00000000,
	0x00000040,
	0x00010000,
	0x40002000,
	0x00000100,
	0x40000002,
	0x00000100,
	0x40000002,
	0x00000100,
	0x40000002,
	0x00000100,
	0x00000002,
	0x00020000,
	0x08000000,
	0x00000000,
	0x00000020,
	0x00008000,
	0x20001000,
	0x00000080,
	0x20000001,
	0x00000080,
	0x20000001,
	0x00000080,
	0x20000001,
	0x00000080,
	0x00000001,
	0x00010000,
	0x04000000,
	0x00FF0000,
	0x00000000,
	0x00004000,
	0x00000800,
	0xC0000001,
	0x00041419,
	0x40000000,
	0x04000816,
	0x000D0000,
	0x00006800,
	0x00000340,
	0xD000001A,
	0x06800000,
	0x00340000,
	0x0001A000,
	0x00000D00,
	0x40000068,
	0x1A000003,
	0x00D00000,
	0x00068000,
	0x00003400,
	0x000001A0,
	0x00000401,
	0x00000008,
	0x00000401,
	0x00000008,
	0x00000401,
	0x00000008,
	0x00000401,
	0x80000008,
	0x0000007F,
	0x20000000,
	0x00000000,
	0xE0000080,
	0x0000001F,
	0x00004000,
};

