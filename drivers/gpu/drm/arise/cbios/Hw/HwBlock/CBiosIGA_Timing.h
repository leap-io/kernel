/*
 * Copyright © 2021 Glenfly Tech Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 */

#ifndef _CBIOS_IGA_TIMING_H_
#define _CBIOS_IGA_TIMING_H_

CBIOS_VOID cbProgramDclk(PCBIOS_VOID pvcbe, CBIOS_U8 IGAIndex, CBIOS_U32 ClockFreq);
CBIOS_VOID cbIGA_HW_SetMode(PCBIOS_VOID pvcbe, PCBIOS_DISP_MODE_PARAMS pModeParams);
CBIOS_VOID cbIGA_UpdateActiveDeviceToReg(PCBIOS_VOID pvcbe, PCBIOS_DISPLAY_MANAGER pDispMgr);
CBIOS_U32  cbIGA_GetActiveDeviceFromReg(PCBIOS_VOID pvcbe);

#endif
