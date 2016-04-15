﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1878609837_0;
// System.Byte[]
struct ByteU5BU5D_t1569193387_0;
// System.Security.Cryptography.RSA
struct RSA_t506645067_0;
// System.Security.Cryptography.DSA
struct DSA_t506631613_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters582871943.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C"  void PrivateKeyInfo__ctor_m362104835_0 (PrivateKeyInfo_t1878609837_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C"  void PrivateKeyInfo__ctor_m_963439450_0 (PrivateKeyInfo_t1878609837_0 * __this, ByteU5BU5D_t1569193387_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C"  ByteU5BU5D_t1569193387_0* PrivateKeyInfo_get_PrivateKey_m_2141745892_0 (PrivateKeyInfo_t1878609837_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C"  void PrivateKeyInfo_Decode_m_1321375526_0 (PrivateKeyInfo_t1878609837_0 * __this, ByteU5BU5D_t1569193387_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C"  ByteU5BU5D_t1569193387_0* PrivateKeyInfo_RemoveLeadingZero_m_518329740_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1569193387_0* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t1569193387_0* PrivateKeyInfo_Normalize_m_771058234_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1569193387_0* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C"  RSA_t506645067_0 * PrivateKeyInfo_DecodeRSA_m311172684_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1569193387_0* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C"  DSA_t506631613_0 * PrivateKeyInfo_DecodeDSA_m1682427249_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1569193387_0* ___privateKey, DSAParameters_t582871943_0  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;