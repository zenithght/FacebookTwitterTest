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

// System.Runtime.Serialization.SerializationException
struct SerializationException_t374654328_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_539797303_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon_143021694.h"

// System.Void System.Runtime.Serialization.SerializationException::.ctor()
extern "C"  void SerializationException__ctor_m136694722_0 (SerializationException_t374654328_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
extern "C"  void SerializationException__ctor_m_875071510_0 (SerializationException_t374654328_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationException__ctor_m987964931_0 (SerializationException_t374654328_0 * __this, SerializationInfo_t_539797303_0 * ___info, StreamingContext_t_143021694_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;