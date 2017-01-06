/**************************************************************************//**
 * @file efr32mg2p_vdac_opa.h
 * @brief EFR32MG2P_VDAC_OPA register and bit field definitions
 * @version 5.0.0
 ******************************************************************************
 * @section License
 * <b>Copyright 2016 Silicon Laboratories, Inc. http://www.silabs.com</b>
 ******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.@n
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.@n
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Laboratories, Inc.
 * has no obligation to support this Software. Silicon Laboratories, Inc. is
 * providing the Software "AS IS", with no express or implied warranties of any
 * kind, including, but not limited to, any implied warranties of
 * merchantability or fitness for any particular purpose or warranties against
 * infringement of any proprietary rights of a third party.
 *
 * Silicon Laboratories, Inc. will not be liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this Software.
 *
 *****************************************************************************/
/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @brief VDAC_OPA EFR32MG2P VDAC OPA
 *****************************************************************************/
typedef struct
{
  __IM uint32_t  APORTREQ;      /**< Operational Amplifier APORT Request Status Register  */
  __IM uint32_t  APORTCONFLICT; /**< Operational Amplifier APORT Conflict Status Register  */
  __IOM uint32_t CTRL;          /**< Operational Amplifier Control Register  */
  __IOM uint32_t TIMER;         /**< Operational Amplifier Timer Control Register  */
  __IOM uint32_t MUX;           /**< Operational Amplifier Mux Configuration Register  */
  __IOM uint32_t OUT;           /**< Operational Amplifier Output Configuration Register  */
  __IOM uint32_t CAL;           /**< Operational Amplifier Calibration Register  */
  uint32_t       RESERVED0[1];  /**< Reserved future */
} VDAC_OPA_TypeDef;

/** @} End of group Parts */

