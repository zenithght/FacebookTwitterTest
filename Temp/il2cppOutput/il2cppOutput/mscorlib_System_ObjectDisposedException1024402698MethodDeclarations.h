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

// System.ObjectDisposedException
struct ObjectDisposedException_t1024402698_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_539797303_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon_143021694.h"

// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C"  void ObjectDisposedException__ctor_m_495472650_0 (ObjectDisposedException_t1024402698_0 * __this, String_t* ___objectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
extern "C"  void ObjectDisposedException__ctor_m_805332744_0 (ObjectDisposedException_t1024402698_0 * __this, String_t* ___objectName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjectDisposedException__ctor_m571210567_0 (ObjectDisposedException_t1024402698_0 * __this, SerializationInfo_t_539797303_0 * ___info, StreamingContext_t_143021694_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ObjectDisposedException::get_Message()
extern "C"  String_t* ObjectDisposedException_get_Message_m_130406529_0 (ObjectDisposedException_t1024402698_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjectDisposedException_GetObjectData_m_1625486428_0 (ObjectDisposedException_t1024402698_0 * __this, SerializationInfo_t_539797303_0 * ___info, StreamingContext_t_143021694_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
