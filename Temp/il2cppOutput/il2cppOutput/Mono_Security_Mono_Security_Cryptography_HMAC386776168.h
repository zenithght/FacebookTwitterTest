﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t_1917115060_0;
// System.Byte[]
struct ByteU5BU5D_t1569193387_0;

#include "mscorlib_System_Security_Cryptography_KeyedHashAl_1660211976.h"

// Mono.Security.Cryptography.HMAC
struct  HMAC_t386776168_0  : public KeyedHashAlgorithm_t_1660211976_0
{
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMAC::hash
	HashAlgorithm_t_1917115060_0 * ___hash_5;
	// System.Boolean Mono.Security.Cryptography.HMAC::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Cryptography.HMAC::innerPad
	ByteU5BU5D_t1569193387_0* ___innerPad_7;
	// System.Byte[] Mono.Security.Cryptography.HMAC::outerPad
	ByteU5BU5D_t1569193387_0* ___outerPad_8;
};
