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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1123398549_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_RaycastHit144185587.h"
#include "UnityEngine_UnityEngine_Ray1215250369.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Internal_Raycast_m1952858642_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___origin, Vector3_t_725341337_0  ___direction, RaycastHit_t144185587_0 * ___hitInfo, float ___distance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m441969367_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0 * ___origin, Vector3_t_725341337_0 * ___direction, RaycastHit_t144185587_0 * ___hitInfo, float ___distance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m267364350_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___origin, Vector3_t_725341337_0  ___direction, RaycastHit_t144185587_0 * ___hitInfo, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m1600345803_0 (Object_t * __this /* static, unused */, Ray_t1215250369_0  ___ray, RaycastHit_t144185587_0 * ___hitInfo, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1123398549_0* Physics_RaycastAll_m1771931441_0 (Object_t * __this /* static, unused */, Ray_t1215250369_0  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1123398549_0* Physics_RaycastAll_m_2099030940_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___origin, Vector3_t_725341337_0  ___direction, float ___distance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1123398549_0* Physics_INTERNAL_CALL_RaycastAll_m411421481_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0 * ___origin, Vector3_t_725341337_0 * ___direction, float ___distance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
