/*
* Copyright (c) 2022, Intel Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/
//!
//! \file     vp_common_hdr.h
//! \brief    vphal HDR interface clarification
//! \details  vphal HDR interface clarification inlcuding:
//!           some marcro, enum, structure, function
//!
#ifndef __VP_COMMON_HDR_H__
#define __VP_COMMON_HDR_H__

#define KERNEL_HDR_MANDATORY  0
#define KERNEL_HDR_PREPROCESS 4

#define VPHAL_HDR_BTINDEX_EOTF1DLUT_OFFSET 3
#define VPHAL_HDR_BTINDEX_OETF1DLUT_OFFSET 4
#define VPHAL_HDR_BTINDEX_CRI3DLUT_OFFSET  3

#define VPHAL_HDR_BTINDEX_LAYER0           16
#define VPHAL_HDR_BTINDEX_PER_LAYER0       5
#define VPHAL_HDR_BTINDEX_RENDERTARGET     56
#define VPHAL_HDR_BTINDEX_PER_TARGET       3
#define VPHAL_HDR_BTINDEX_COEFF            59

#define VPHAL_HDR_AVS_SAMPLER_STATE_NEAREST        1
#define VPHAL_HDR_AVS_SAMPLER_STATE_ADAPTIVE       3
#define VPHAL_HDR_3D_SAMPLER_STATE_NEAREST         13
#define VPHAL_HDR_3D_SAMPLER_STATE_BILINEAR        14

#define VPHAL_HDR_COEF_SURFACE_WIDTH               8
#define VPHAL_HDR_COEF_SURFACE_HEIGHT_BASIC        66
#define VPHAL_HDR_COEF_SURFACE_HEIGHT_EXT          32
#define VPHAL_HDR_COEF_SURFACE_HEIGHT              (VPHAL_HDR_COEF_SURFACE_HEIGHT_BASIC + VPHAL_HDR_COEF_SURFACE_HEIGHT_EXT)
#define VPHAL_HDR_COEF_SURFACE_PITCH               64
#define VPHAL_HDR_COEF_LINES_PER_LAYER_BASIC       8
#define VPHAL_HDR_COEF_LINES_PER_LAYER_EXT         4
#define VPHAL_HDR_COEF_EOTF_OFFSET                 6
#define VPHAL_HDR_COEF_PIVOT_POINT_LINE_OFFSET     6
#define VPHAL_HDR_COEF_SLOPE_INTERCEPT_LINE_OFFSET 7
#define VPHAL_HDR_COEF_CCMEXT_OFFSET               6
#define VPHAL_HDR_COEF_CLAMP_OFFSET                7

#define VPHAL_HDR_AUTO_MODE_IIR_TEMP_SIZE          128
#define VPHAL_HDR_OETF_1DLUT_WIDTH                 16
#define VPHAL_HDR_OETF_1DLUT_HEIGHT                16
#define VPHAL_MAX_HDR_INPUT_LAYER                  8
#define VPHAL_MAX_HDR_OUTPUT_LAYER                 1
#define VPHAL_HDR_CRI_3DLUT_SIZE                   32
#define HDR_STAGES_CONFIG_TABLE_SIZE               32

#define VPHAL_HDR_EOTF_COEFF1_TRADITIONNAL_GAMMA 0.081f
#define VPHAL_HDR_EOTF_COEFF2_TRADITIONNAL_GAMMA (1.0f / 4.5f)
#define VPHAL_HDR_EOTF_COEFF3_TRADITIONNAL_GAMMA (1.0f / 1.099f)
#define VPHAL_HDR_EOTF_COEFF4_TRADITIONNAL_GAMMA (0.099f / 1.099f)
#define VPHAL_HDR_EOTF_COEFF5_TRADITIONNAL_GAMMA (1.0f / 0.45f)

#define VPHAL_HDR_OETF_COEFF1_TRADITIONNAL_GAMMA 0.018f
#define VPHAL_HDR_OETF_COEFF2_TRADITIONNAL_GAMMA 4.5f
#define VPHAL_HDR_OETF_COEFF3_TRADITIONNAL_GAMMA 1.099f
#define VPHAL_HDR_OETF_COEFF4_TRADITIONNAL_GAMMA (-0.099f)
#define VPHAL_HDR_OETF_COEFF5_TRADITIONNAL_GAMMA 0.45f

#define VPHAL_HDR_EOTF_COEFF1_TRADITIONNAL_GAMMA_BT1886 (-0.0f)
#define VPHAL_HDR_EOTF_COEFF2_TRADITIONNAL_GAMMA_BT1886 0.0f
#define VPHAL_HDR_EOTF_COEFF3_TRADITIONNAL_GAMMA_BT1886 1.0f
#define VPHAL_HDR_EOTF_COEFF4_TRADITIONNAL_GAMMA_BT1886 0.0f
#define VPHAL_HDR_EOTF_COEFF5_TRADITIONNAL_GAMMA_BT1886 2.4f

#define VPHAL_HDR_EOTF_COEFF1_TRADITIONNAL_GAMMA_SRGB 0.04045f
#define VPHAL_HDR_EOTF_COEFF2_TRADITIONNAL_GAMMA_SRGB (1.0f / 12.92f)
#define VPHAL_HDR_EOTF_COEFF3_TRADITIONNAL_GAMMA_SRGB (1.0f / 1.055f)
#define VPHAL_HDR_EOTF_COEFF4_TRADITIONNAL_GAMMA_SRGB (0.055f / 1.055f)
#define VPHAL_HDR_EOTF_COEFF5_TRADITIONNAL_GAMMA_SRGB 2.4f

#define VPHAL_HDR_OETF_COEFF1_TRADITIONNAL_GAMMA_SRGB 0.0031308f
#define VPHAL_HDR_OETF_COEFF2_TRADITIONNAL_GAMMA_SRGB 12.92f
#define VPHAL_HDR_OETF_COEFF3_TRADITIONNAL_GAMMA_SRGB 1.055f
#define VPHAL_HDR_OETF_COEFF4_TRADITIONNAL_GAMMA_SRGB (-0.055f)
#define VPHAL_HDR_OETF_COEFF5_TRADITIONNAL_GAMMA_SRGB (1.0f / 2.4f)

#define VPHAL_HDR_EOTF_COEFF1_SMPTE_ST2084 -0.8359375f
#define VPHAL_HDR_EOTF_COEFF2_SMPTE_ST2084 18.8515625f
#define VPHAL_HDR_EOTF_COEFF3_SMPTE_ST2084 -18.6875f
#define VPHAL_HDR_EOTF_COEFF4_SMPTE_ST2084 6.277394636015326f
#define VPHAL_HDR_EOTF_COEFF5_SMPTE_ST2084 0.012683313515656f

#define VPHAL_HDR_OETF_COEFF1_SMPTE_ST2084 0.8359375f
#define VPHAL_HDR_OETF_COEFF2_SMPTE_ST2084 18.8515625f
#define VPHAL_HDR_OETF_COEFF3_SMPTE_ST2084 18.6875f
#define VPHAL_HDR_OETF_COEFF4_SMPTE_ST2084 0.1593017578125f
#define VPHAL_HDR_OETF_COEFF5_SMPTE_ST2084 78.84375f

#define VPHAL_HDR_TONE_MAPPING_PIVOT_POINT_X1 0.03125f
#define VPHAL_HDR_TONE_MAPPING_PIVOT_POINT_X2 0.09375f
#define VPHAL_HDR_TONE_MAPPING_PIVOT_POINT_X3 0.125f
#define VPHAL_HDR_TONE_MAPPING_PIVOT_POINT_X4 0.21875f
#define VPHAL_HDR_TONE_MAPPING_PIVOT_POINT_X5 0.40625f

#define VPHAL_HDR_TONE_MAPPING_SLOPE0 22.4f
#define VPHAL_HDR_TONE_MAPPING_SLOPE1 3.2f
#define VPHAL_HDR_TONE_MAPPING_SLOPE2 1.6f
#define VPHAL_HDR_TONE_MAPPING_SLOPE3 0.426666667f
#define VPHAL_HDR_TONE_MAPPING_SLOPE4 0.053333333f
#define VPHAL_HDR_TONE_MAPPING_SLOPE5 0.0f

#define VPHAL_HDR_TONE_MAPPING_INTERCEPT0 0.0f
#define VPHAL_HDR_TONE_MAPPING_INTERCEPT1 0.6f
#define VPHAL_HDR_TONE_MAPPING_INTERCEPT2 0.75f
#define VPHAL_HDR_TONE_MAPPING_INTERCEPT3 0.896666667f
#define VPHAL_HDR_TONE_MAPPING_INTERCEPT4 0.978333333f
#define VPHAL_HDR_TONE_MAPPING_INTERCEPT5 1.0f

#define VPHAL_HDR_INVERSE_TONE_MAPPING_PIVOT_POINT_X1 0.03125f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_PIVOT_POINT_X2 0.03125f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_PIVOT_POINT_X3 0.03125f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_PIVOT_POINT_X4 0.03125f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_PIVOT_POINT_X5 0.03125f

#define VPHAL_HDR_INVERSE_TONE_MAPPING_SLOPE0 4.266666666666667f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_SLOPE1 0.1486810551558753f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_SLOPE2 0.1486810551558753f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_SLOPE3 0.1486810551558753f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_SLOPE4 0.1486810551558753f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_SLOPE5 0.1486810551558753f

#define VPHAL_HDR_INVERSE_TONE_MAPPING_INTERCEPT0 0.0f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_INTERCEPT1 0.1286870503597122f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_INTERCEPT2 0.1286870503597122f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_INTERCEPT3 0.1286870503597122f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_INTERCEPT4 0.1286870503597122f
#define VPHAL_HDR_INVERSE_TONE_MAPPING_INTERCEPT5 0.1286870503597122f

#define HDR_MANDATORY_KERNEL_BLOCK_WIDTH  16
#define HDR_MANDATORY_KERNEL_BLOCK_HEIGHT 8

#define MAX_CSC_COEFF_VAL_ICL 3.9921875  // (4.0 * 511.0 / 512.0)
#define ARRAY_SIZE(a)  (sizeof(a) / sizeof(a[0]))

#define CONFIG_ENTRY_INITIALIZER(CCM, PWLF, CCMExt1, GamutClamp1, CCMExt2, GamutClamp2, Invalid) \
    ((CCM) | (PWLF) << 3 | (CCMExt1) << 6 | (GamutClamp1) << 9 | (CCMExt2) << 10 | (GamutClamp2) << 13 | (Invalid) << 15)

#define VPHAL_HDR_MODE_3DLUT_MASK                   0x10
#define VPHAL_HDR_MODE_VEBOX_3DLUT_MASK             0x20
#define VPHAL_HDR_MODE_VEBOX_3DLUT33_MASK           0x30
#define VPHAL_HDR_MODE_VEBOX_1DLUT_MASK             0x40
#define VPHAL_HDR_MODE_VEBOX_1DLUT_3DLUT_MASK       0x50

#define HDR_DEFAULT_MAXCLL    4000
#define HDR_DEFAULT_MAXFALL   400

typedef float Mat3[3][3];
typedef float Vec3[3];

//!
//! \brief HDR mode enum
//!
typedef enum _VPHAL_HDR_MODE
{
    VPHAL_HDR_MODE_NONE = 0,
    VPHAL_HDR_MODE_TONE_MAPPING,
    VPHAL_HDR_MODE_INVERSE_TONE_MAPPING,
    VPHAL_HDR_MODE_H2H,
    VPHAL_HDR_MODE_S2S,
    VPHAL_HDR_MODE_BT1886_DEGAMMA,
    VPHAL_HDR_MODE_TONE_MAPPING_AUTO_MODE,
    VPHAL_HDR_MODE_H2H_AUTO_MODE,
    VPHAL_HDR_MODE_TONE_MAPPING_3DLUT               = VPHAL_HDR_MODE_TONE_MAPPING | VPHAL_HDR_MODE_3DLUT_MASK,
    VPHAL_HDR_MODE_INVERSE_TONE_MAPPING_3DLUT       = VPHAL_HDR_MODE_INVERSE_TONE_MAPPING | VPHAL_HDR_MODE_3DLUT_MASK,
    VPHAL_HDR_MODE_H2H_3DLUT                        = VPHAL_HDR_MODE_H2H | VPHAL_HDR_MODE_3DLUT_MASK,
    VPHAL_HDR_MODE_BT1886_DEGAMMA_3DLUT             = VPHAL_HDR_MODE_BT1886_DEGAMMA | VPHAL_HDR_MODE_3DLUT_MASK,
    VPHAL_HDR_MODE_TONE_MAPPING_AUTO_MODE_3DLUT     = VPHAL_HDR_MODE_TONE_MAPPING_AUTO_MODE | VPHAL_HDR_MODE_3DLUT_MASK,
    VPHAL_HDR_MODE_H2H_VEBOX_3DLUT                  = VPHAL_HDR_MODE_H2H | VPHAL_HDR_MODE_VEBOX_3DLUT_MASK,
    VPHAL_HDR_MODE_TONE_MAPPING_VEBOX_3DLUT         = VPHAL_HDR_MODE_TONE_MAPPING | VPHAL_HDR_MODE_VEBOX_3DLUT_MASK,
    VPHAL_HDR_MODE_H2H_VEBOX_3DLUT33                = VPHAL_HDR_MODE_H2H | VPHAL_HDR_MODE_VEBOX_3DLUT33_MASK,
    VPHAL_HDR_MODE_TONE_MAPPING_VEBOX_3DLUT33       = VPHAL_HDR_MODE_TONE_MAPPING | VPHAL_HDR_MODE_VEBOX_3DLUT33_MASK,
    VPHAL_HDR_MODE_H2H_VEBOX_1DLUT                  = VPHAL_HDR_MODE_H2H | VPHAL_HDR_MODE_VEBOX_1DLUT_MASK,
    VPHAL_HDR_MODE_TONE_MAPPING_VEBOX_1DLUT         = VPHAL_HDR_MODE_TONE_MAPPING | VPHAL_HDR_MODE_VEBOX_1DLUT_MASK,
    VPHAL_HDR_MODE_TONE_MAPPING_VEBOX_1DLUT_3DLUT   = VPHAL_HDR_MODE_VEBOX_1DLUT_3DLUT_MASK,
} VPHAL_HDR_MODE;

typedef union _HDRStageConfigEntry
{
    uint16_t value;
    struct
    {
        uint16_t CCM : 3;
        uint16_t PWLF : 3;
        uint16_t CCMExt1 : 3;
        uint16_t GamutClamp1 : 1;
        uint16_t CCMExt2 : 3;
        uint16_t GamutClamp2 : 1;
        uint16_t Reserved : 1;
        uint16_t Invalid : 1;
    };
} HDRStageConfigEntry;

//!
//! \brief HDR LUT mode enum
//!
typedef enum _VPHAL_HDR_LUT_MODE
{
    VPHAL_HDR_LUT_MODE_NONE,
    VPHAL_HDR_LUT_MODE_2D,
    VPHAL_HDR_LUT_MODE_3D,
    VPHAL_HDR_LUT_MODE_NUM
} VPHAL_HDR_LUT_MODE;
C_ASSERT(VPHAL_HDR_LUT_MODE_NUM == 3);

//!
//! Structure VPHAL_EOTF_TYPE
//! \brief Electronic-Optimal Transfer Function type
//!
typedef enum _VPHAL_HDR_EOTF_TYPE
{
    VPHAL_HDR_EOTF_INVALID = -1,
    VPHAL_HDR_EOTF_TRADITIONAL_GAMMA_SDR = 0,
    VPHAL_HDR_EOTF_TRADITIONAL_GAMMA_HDR,
    VPHAL_HDR_EOTF_SMPTE_ST2084,
    VPHAL_HDR_EOTF_BT1886,
    VPHAL_HDR_EOTF_FUTURE_EOTF
} VPHAL_HDR_EOTF_TYPE;

//!
//! Structure VPHAL_CCM_TYPE
//! \brief Color Correction Matrix Type
//!
typedef enum _VPHAL_HDR_CCM_TYPE
{
    VPHAL_HDR_CCM_NONE = 0,
    VPHAL_HDR_CCM_BT2020_TO_BT601_BT709_MATRIX,
    VPHAL_HDR_CCM_BT601_BT709_TO_BT2020_MATRIX,
    VPHAL_HDR_CCM_BT2020_TO_MONITOR_MATRIX,
    VPHAL_HDR_CCM_MONITOR_TO_BT2020_MATRIX,
    VPHAL_HDR_CCM_MONITOR_TO_BT709_MATRIX
} VPHAL_HDR_CCM_TYPE;

//!
//! Structure VPHAL_CSC_TYPE
//! \brief Color Space Coversion Type
//!
typedef enum _VPHAL_HDR_CSC_TYPE
{
    VPHAL_HDR_CSC_NONE = 0,
    VPHAL_HDR_CSC_YUV_TO_RGB_BT601,
    VPHAL_HDR_CSC_YUV_TO_RGB_BT709,
    VPHAL_HDR_CSC_YUV_TO_RGB_BT2020,
    VPHAL_HDR_CSC_RGB_TO_YUV_BT601,
    VPHAL_HDR_CSC_RGB_TO_YUV_BT709,
    VPHAL_HDR_CSC_RGB_TO_YUV_BT709_FULLRANGE,
    VPHAL_HDR_CSC_RGB_TO_YUV_BT2020
} VPHAL_HDR_CSC_TYPE;

//!
//! Structure VPHAL_HDR_PARAMS
//! \brief High Dynamic Range parameters
//!
typedef struct _VPHAL_HDR_PARAMS
{
    VPHAL_HDR_EOTF_TYPE EOTF                 = VPHAL_HDR_EOTF_INVALID;    //!< Electronic-Optimal Transfer Function
    uint16_t display_primaries_x[3]          = {0};                       //!< Display Primaries X chromaticity coordinates
    uint16_t display_primaries_y[3]          = {0};                       //!< Display Primaries Y chromaticity coordinates
    uint16_t white_point_x                   = 0;                         //!< X Chromaticity coordinate of White Point
    uint16_t white_point_y                   = 0;                         //!< Y Chromaticity coordinate of White Point
    uint16_t max_display_mastering_luminance = 0;                         //!< The nominal maximum display luminance of the mastering display
    uint16_t min_display_mastering_luminance = 0;                         //!< The nominal minimum display luminance of the mastering display
    uint16_t MaxCLL                          = 0;                         //!< Max Content Light Level
    uint16_t MaxFALL                         = 0;                         //!< Max Frame Average Light Level
    bool     bAutoMode                       = false;                     //!< Hdr auto mode.
    bool     bPathKernel                     = false;                     //!< Hdr path config to use kernel
} VPHAL_HDR_PARAMS, *PVPHAL_HDR_PARAMS;

#endif  // __VP_COMMON_HDR_H__