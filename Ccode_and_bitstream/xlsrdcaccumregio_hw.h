// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.3
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================

// CONTROL
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of stepsMC
//        bit 31~0 - stepsMC[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of pathsMC
//        bit 31~0 - pathsMC[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of peekStep_x0
//        bit 31~0 - peekStep_x0[31:0] (Read)
// 0x24 : Control signal of peekStep_x0
//        bit 0  - peekStep_x0_ap_vld (Read/COR)
//        others - reserved
// 0x28 : Data signal of peekStep_x1
//        bit 31~0 - peekStep_x1[31:0] (Read)
// 0x2c : Control signal of peekStep_x1
//        bit 0  - peekStep_x1_ap_vld (Read/COR)
//        others - reserved
// 0x30 : Data signal of peekStep_x2
//        bit 31~0 - peekStep_x2[31:0] (Read)
// 0x34 : Control signal of peekStep_x2
//        bit 0  - peekStep_x2_ap_vld (Read/COR)
//        others - reserved
// 0x38 : Data signal of peekStep_x3
//        bit 31~0 - peekStep_x3[31:0] (Read)
// 0x3c : Control signal of peekStep_x3
//        bit 0  - peekStep_x3_ap_vld (Read/COR)
//        others - reserved
// 0x40 : Data signal of peekStep_x4
//        bit 31~0 - peekStep_x4[31:0] (Read)
// 0x44 : Control signal of peekStep_x4
//        bit 0  - peekStep_x4_ap_vld (Read/COR)
//        others - reserved
// 0x48 : Data signal of peekStep_y
//        bit 31~0 - peekStep_y[31:0] (Read)
// 0x4c : Control signal of peekStep_y
//        bit 0  - peekStep_y_ap_vld (Read/COR)
//        others - reserved
// 0x50 : Data signal of peekStep_yx
//        bit 31~0 - peekStep_yx[31:0] (Read)
// 0x54 : Control signal of peekStep_yx
//        bit 0  - peekStep_yx_ap_vld (Read/COR)
//        others - reserved
// 0x58 : Data signal of peekStep_yx2
//        bit 31~0 - peekStep_yx2[31:0] (Read)
// 0x5c : Control signal of peekStep_yx2
//        bit 0  - peekStep_yx2_ap_vld (Read/COR)
//        others - reserved
// 0x60 : Data signal of peekPath_x0
//        bit 31~0 - peekPath_x0[31:0] (Read)
// 0x64 : Control signal of peekPath_x0
//        bit 0  - peekPath_x0_ap_vld (Read/COR)
//        others - reserved
// 0x68 : Data signal of peekPath_x1
//        bit 31~0 - peekPath_x1[31:0] (Read)
// 0x6c : Control signal of peekPath_x1
//        bit 0  - peekPath_x1_ap_vld (Read/COR)
//        others - reserved
// 0x70 : Data signal of peekPath_x2
//        bit 31~0 - peekPath_x2[31:0] (Read)
// 0x74 : Control signal of peekPath_x2
//        bit 0  - peekPath_x2_ap_vld (Read/COR)
//        others - reserved
// 0x78 : Data signal of peekPath_x3
//        bit 31~0 - peekPath_x3[31:0] (Read)
// 0x7c : Control signal of peekPath_x3
//        bit 0  - peekPath_x3_ap_vld (Read/COR)
//        others - reserved
// 0x80 : Data signal of peekPath_x4
//        bit 31~0 - peekPath_x4[31:0] (Read)
// 0x84 : Control signal of peekPath_x4
//        bit 0  - peekPath_x4_ap_vld (Read/COR)
//        others - reserved
// 0x88 : Data signal of peekPath_y
//        bit 31~0 - peekPath_y[31:0] (Read)
// 0x8c : Control signal of peekPath_y
//        bit 0  - peekPath_y_ap_vld (Read/COR)
//        others - reserved
// 0x90 : Data signal of peekPath_yx
//        bit 31~0 - peekPath_yx[31:0] (Read)
// 0x94 : Control signal of peekPath_yx
//        bit 0  - peekPath_yx_ap_vld (Read/COR)
//        others - reserved
// 0x98 : Data signal of peekPath_yx2
//        bit 31~0 - peekPath_yx2[31:0] (Read)
// 0x9c : Control signal of peekPath_yx2
//        bit 0  - peekPath_yx2_ap_vld (Read/COR)
//        others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XLSRDCACCUMREGIO_CONTROL_ADDR_AP_CTRL           0x00
#define XLSRDCACCUMREGIO_CONTROL_ADDR_GIE               0x04
#define XLSRDCACCUMREGIO_CONTROL_ADDR_IER               0x08
#define XLSRDCACCUMREGIO_CONTROL_ADDR_ISR               0x0c
#define XLSRDCACCUMREGIO_CONTROL_ADDR_STEPSMC_DATA      0x10
#define XLSRDCACCUMREGIO_CONTROL_BITS_STEPSMC_DATA      32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PATHSMC_DATA      0x18
#define XLSRDCACCUMREGIO_CONTROL_BITS_PATHSMC_DATA      32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_X0_DATA  0x20
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKSTEP_X0_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_X0_CTRL  0x24
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_X1_DATA  0x28
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKSTEP_X1_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_X1_CTRL  0x2c
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_X2_DATA  0x30
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKSTEP_X2_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_X2_CTRL  0x34
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_X3_DATA  0x38
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKSTEP_X3_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_X3_CTRL  0x3c
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_X4_DATA  0x40
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKSTEP_X4_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_X4_CTRL  0x44
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_Y_DATA   0x48
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKSTEP_Y_DATA   32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_Y_CTRL   0x4c
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_YX_DATA  0x50
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKSTEP_YX_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_YX_CTRL  0x54
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_YX2_DATA 0x58
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKSTEP_YX2_DATA 32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKSTEP_YX2_CTRL 0x5c
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_X0_DATA  0x60
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKPATH_X0_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_X0_CTRL  0x64
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_X1_DATA  0x68
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKPATH_X1_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_X1_CTRL  0x6c
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_X2_DATA  0x70
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKPATH_X2_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_X2_CTRL  0x74
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_X3_DATA  0x78
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKPATH_X3_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_X3_CTRL  0x7c
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_X4_DATA  0x80
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKPATH_X4_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_X4_CTRL  0x84
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_Y_DATA   0x88
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKPATH_Y_DATA   32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_Y_CTRL   0x8c
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_YX_DATA  0x90
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKPATH_YX_DATA  32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_YX_CTRL  0x94
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_YX2_DATA 0x98
#define XLSRDCACCUMREGIO_CONTROL_BITS_PEEKPATH_YX2_DATA 32
#define XLSRDCACCUMREGIO_CONTROL_ADDR_PEEKPATH_YX2_CTRL 0x9c

