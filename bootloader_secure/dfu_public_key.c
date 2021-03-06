
/* This file was automatically generated by nrfutil on 2016-11-28 (YY-MM-DD) at 21:41:16 */

#include "stdint.h"
#include "compiler_abstraction.h"

/* This file was generated with a throwaway private key, that is only inteded for a debug version of the DFU project.
  Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate a valid public key. */

#ifdef NRF_DFU_DEBUG_VERSION 

/** @brief Public key used to verify DFU images */
__ALIGN(4) const uint8_t pk[64] =
{
    0x9a, 0x58, 0xc0, 0xff, 0xeb, 0x7f, 0x4b, 0x89, 0x41, 0xc2, 0x05, 0xfc, 0x9c, 0xca, 0x3e, 0xe5, 0x66, 0x4f, 0xf8, 0x80, 0x1b, 0xe9, 0x56, 0x1d, 0xa3, 0x72, 0x82, 0x55, 0xb7, 0x4f, 0x47, 0xd0, 
    0x24, 0x3c, 0x0d, 0x82, 0xa3, 0x44, 0x16, 0x94, 0xb8, 0x98, 0x5c, 0xc8, 0x35, 0x8c, 0x73, 0x6c, 0x39, 0x0f, 0x7f, 0x69, 0x40, 0xc0, 0x25, 0x3a, 0xb1, 0xf3, 0x9f, 0x2a, 0x0e, 0x10, 0x95, 0x13
	
};

#else
/** @brief Public key used to verify DFU images with the key "..\..\private.pem" */
__ALIGN(4) const uint8_t pk[64] =
{
    0x54, 0xcb, 0x46, 0xb3, 0x20, 0x52, 0xdd, 0x91, 0x0e, 0x39, 0x5e, 0x73, 0xba, 0x26, 0x1c, 0x12, 0x21, 0x10, 0xf6, 0xcf, 0x67, 0xab, 0x04, 0x50, 0x5b, 0x8c, 0x59, 0x1d, 0x21, 0x5b, 0x51, 0xd5,
    0x3b, 0x0e, 0x61, 0xf6, 0x1b, 0x44, 0x44, 0x2f, 0xfd, 0x4b, 0x7a, 0x9d, 0x28, 0xf5, 0xb3, 0xbb, 0xf7, 0x21, 0xdc, 0xea, 0xd2, 0x07, 0x0f, 0x50, 0xd8, 0xb1, 0x32, 0xac, 0x61, 0x67, 0xdf, 0x91
};

//#error "Debug public key not valid for production. Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate it"
#endif
