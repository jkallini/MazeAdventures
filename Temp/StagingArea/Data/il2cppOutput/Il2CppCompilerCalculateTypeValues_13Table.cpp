﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1685002053;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Camera
struct Camera_t4157153871;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef SENDMOUSEEVENTS_T3273302915_H
#define SENDMOUSEEVENTS_T3273302915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t3273302915  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t3273302915_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t1685002053* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t1685002053* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t1685002053* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1709987734* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t1685002053* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t1685002053* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t1685002053* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t1685002053* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t1685002053* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t1685002053* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t1709987734* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t1709987734** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t1709987734* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T3273302915_H
#ifndef SCRIPTINGUTILS_T2624832893_H
#define SCRIPTINGUTILS_T2624832893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t2624832893  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T2624832893_H
#ifndef TOUCHSCREENKEYBOARD_T731888065_H
#define TOUCHSCREENKEYBOARD_T731888065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t731888065  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T731888065_H
#ifndef MANAGEDSTREAMHELPERS_T1984295859_H
#define MANAGEDSTREAMHELPERS_T1984295859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ManagedStreamHelpers
struct  ManagedStreamHelpers_t1984295859  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGEDSTREAMHELPERS_T1984295859_H
#ifndef UPDATECANVASRECTTRANSFORM_T2609744349_H
#define UPDATECANVASRECTTRANSFORM_T2609744349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform
struct  UpdateCanvasRectTransform_t2609744349 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t2609744349__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECANVASRECTTRANSFORM_T2609744349_H
#ifndef PHYSICSFIXEDUPDATE_T2503573795_H
#define PHYSICSFIXEDUPDATE_T2503573795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/PhysicsFixedUpdate
struct  PhysicsFixedUpdate_t2503573795 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsFixedUpdate_t2503573795__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSFIXEDUPDATE_T2503573795_H
#ifndef XRFIXEDUPDATE_T322762781_H
#define XRFIXEDUPDATE_T322762781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/XRFixedUpdate
struct  XRFixedUpdate_t322762781 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRFixedUpdate_t322762781__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRFIXEDUPDATE_T322762781_H
#ifndef LEGACYFIXEDANIMATIONUPDATE_T457569808_H
#define LEGACYFIXEDANIMATIONUPDATE_T457569808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate
struct  LegacyFixedAnimationUpdate_t457569808 
{
public:
	union
	{
		struct
		{
		};
		uint8_t LegacyFixedAnimationUpdate_t457569808__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEGACYFIXEDANIMATIONUPDATE_T457569808_H
#ifndef DIRECTORFIXEDUPDATE_T303986765_H
#define DIRECTORFIXEDUPDATE_T303986765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/DirectorFixedUpdate
struct  DirectorFixedUpdate_t303986765 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdate_t303986765__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORFIXEDUPDATE_T303986765_H
#ifndef SCRIPTRUNBEHAVIOURFIXEDUPDATE_T2814082390_H
#define SCRIPTRUNBEHAVIOURFIXEDUPDATE_T2814082390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate
struct  ScriptRunBehaviourFixedUpdate_t2814082390 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourFixedUpdate_t2814082390__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNBEHAVIOURFIXEDUPDATE_T2814082390_H
#ifndef AUDIOFIXEDUPDATE_T3174230782_H
#define AUDIOFIXEDUPDATE_T3174230782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/AudioFixedUpdate
struct  AudioFixedUpdate_t3174230782 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AudioFixedUpdate_t3174230782__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOFIXEDUPDATE_T3174230782_H
#ifndef DIRECTORFIXEDSAMPLETIME_T1712077364_H
#define DIRECTORFIXEDSAMPLETIME_T1712077364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/DirectorFixedSampleTime
struct  DirectorFixedSampleTime_t1712077364 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedSampleTime_t1712077364__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORFIXEDSAMPLETIME_T1712077364_H
#ifndef CLEARLINES_T78737613_H
#define CLEARLINES_T78737613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/ClearLines
struct  ClearLines_t78737613 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearLines_t78737613__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEARLINES_T78737613_H
#ifndef FIXEDUPDATE_T2729551173_H
#define FIXEDUPDATE_T2729551173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate
struct  FixedUpdate_t2729551173 
{
public:
	union
	{
		struct
		{
		};
		uint8_t FixedUpdate_t2729551173__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDUPDATE_T2729551173_H
#ifndef TANGOUPDATE_T85607497_H
#define TANGOUPDATE_T85607497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/TangoUpdate
struct  TangoUpdate_t85607497 
{
public:
	union
	{
		struct
		{
		};
		uint8_t TangoUpdate_t85607497__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TANGOUPDATE_T85607497_H
#ifndef PHYSICS2DFIXEDUPDATE_T3234482501_H
#define PHYSICS2DFIXEDUPDATE_T3234482501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/Physics2DFixedUpdate
struct  Physics2DFixedUpdate_t3234482501 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Physics2DFixedUpdate_t3234482501__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2DFIXEDUPDATE_T3234482501_H
#ifndef SPRITEATLASMANAGERUPDATE_T2882383376_H
#define SPRITEATLASMANAGERUPDATE_T2882383376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate
struct  SpriteAtlasManagerUpdate_t2882383376 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SpriteAtlasManagerUpdate_t2882383376__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGERUPDATE_T2882383376_H
#ifndef NEWINPUTBEGINFRAME_T3911897700_H
#define NEWINPUTBEGINFRAME_T3911897700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/NewInputBeginFrame
struct  NewInputBeginFrame_t3911897700 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputBeginFrame_t3911897700__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWINPUTBEGINFRAME_T3911897700_H
#ifndef PHYSICSRESETINTERPOLATEDTRANSFORMPOSITION_T4228954803_H
#define PHYSICSRESETINTERPOLATEDTRANSFORMPOSITION_T4228954803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition
struct  PhysicsResetInterpolatedTransformPosition_t4228954803 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsResetInterpolatedTransformPosition_t4228954803__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSRESETINTERPOLATEDTRANSFORMPOSITION_T4228954803_H
#ifndef DIRECTORSAMPLETIME_T115137244_H
#define DIRECTORSAMPLETIME_T115137244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/DirectorSampleTime
struct  DirectorSampleTime_t115137244 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorSampleTime_t115137244__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORSAMPLETIME_T115137244_H
#ifndef DISPATCHEVENTQUEUEEVENTS_T929081739_H
#define DISPATCHEVENTQUEUEEVENTS_T929081739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents
struct  DispatchEventQueueEvents_t929081739 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DispatchEventQueueEvents_t929081739__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHEVENTQUEUEEVENTS_T929081739_H
#ifndef DELIVERIOSPLATFORMEVENTS_T1576278647_H
#define DELIVERIOSPLATFORMEVENTS_T1576278647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents
struct  DeliverIosPlatformEvents_t1576278647 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DeliverIosPlatformEvents_t1576278647__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELIVERIOSPLATFORMEVENTS_T1576278647_H
#ifndef UPDATEKINECT_T3392953923_H
#define UPDATEKINECT_T3392953923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/UpdateKinect
struct  UpdateKinect_t3392953923 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateKinect_t3392953923__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEKINECT_T3392953923_H
#ifndef SCRIPTRUNDELAYEDSTARTUPFRAME_T1717816565_H
#define SCRIPTRUNDELAYEDSTARTUPFRAME_T1717816565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame
struct  ScriptRunDelayedStartupFrame_t1717816565 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedStartupFrame_t1717816565__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDSTARTUPFRAME_T1717816565_H
#ifndef XRUPDATE_T580684219_H
#define XRUPDATE_T580684219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/XRUpdate
struct  XRUpdate_t580684219 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRUpdate_t580684219__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRUPDATE_T580684219_H
#ifndef PERFORMANCEANALYTICSUPDATE_T1497089951_H
#define PERFORMANCEANALYTICSUPDATE_T1497089951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate
struct  PerformanceAnalyticsUpdate_t1497089951 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PerformanceAnalyticsUpdate_t1497089951__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCEANALYTICSUPDATE_T1497089951_H
#ifndef DIRECTORFIXEDUPDATEPOSTPHYSICS_T1695763577_H
#define DIRECTORFIXEDUPDATEPOSTPHYSICS_T1695763577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics
struct  DirectorFixedUpdatePostPhysics_t1695763577 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdatePostPhysics_t1695763577__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORFIXEDUPDATEPOSTPHYSICS_T1695763577_H
#ifndef NEWINPUTENDFIXEDUPDATE_T3418907705_H
#define NEWINPUTENDFIXEDUPDATE_T3418907705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/NewInputEndFixedUpdate
struct  NewInputEndFixedUpdate_t3418907705 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputEndFixedUpdate_t3418907705__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWINPUTENDFIXEDUPDATE_T3418907705_H
#ifndef SCRIPTRUNDELAYEDTASKS_T2734668064_H
#define SCRIPTRUNDELAYEDTASKS_T2734668064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/ScriptRunDelayedTasks
struct  ScriptRunDelayedTasks_t2734668064 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedTasks_t2734668064__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDTASKS_T2734668064_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef DIRECTORUPDATEANIMATIONBEGIN_T3483220745_H
#define DIRECTORUPDATEANIMATIONBEGIN_T3483220745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin
struct  DirectorUpdateAnimationBegin_t3483220745 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationBegin_t3483220745__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORUPDATEANIMATIONBEGIN_T3483220745_H
#ifndef AIUPDATEPOSTSCRIPT_T1991765663_H
#define AIUPDATEPOSTSCRIPT_T1991765663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/AIUpdatePostScript
struct  AIUpdatePostScript_t1991765663 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AIUpdatePostScript_t1991765663__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AIUPDATEPOSTSCRIPT_T1991765663_H
#ifndef PRELATEUPDATE_T3194249939_H
#define PRELATEUPDATE_T3194249939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate
struct  PreLateUpdate_t3194249939 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PreLateUpdate_t3194249939__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRELATEUPDATE_T3194249939_H
#ifndef SCRIPTRUNDELAYEDDYNAMICFRAMERATE_T3844766269_H
#define SCRIPTRUNDELAYEDDYNAMICFRAMERATE_T3844766269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate
struct  ScriptRunDelayedDynamicFrameRate_t3844766269 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t3844766269__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDDYNAMICFRAMERATE_T3844766269_H
#ifndef DIRECTORUPDATE_T2427988364_H
#define DIRECTORUPDATE_T2427988364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update/DirectorUpdate
struct  DirectorUpdate_t2427988364 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdate_t2427988364__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORUPDATE_T2427988364_H
#ifndef SCRIPTRUNBEHAVIOURUPDATE_T1852625933_H
#define SCRIPTRUNBEHAVIOURUPDATE_T1852625933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update/ScriptRunBehaviourUpdate
struct  ScriptRunBehaviourUpdate_t1852625933 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourUpdate_t1852625933__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNBEHAVIOURUPDATE_T1852625933_H
#ifndef UPDATE_T723921334_H
#define UPDATE_T723921334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update
struct  Update_t723921334 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Update_t723921334__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATE_T723921334_H
#ifndef NEWINPUTUPDATE_T4285063962_H
#define NEWINPUTUPDATE_T4285063962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/NewInputUpdate
struct  NewInputUpdate_t4285063962 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputUpdate_t4285063962__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWINPUTUPDATE_T4285063962_H
#ifndef UPDATEVIDEO_T1599856004_H
#define UPDATEVIDEO_T1599856004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/UpdateVideo
struct  UpdateVideo_t1599856004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_t1599856004__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEVIDEO_T1599856004_H
#ifndef WINDUPDATE_T2266304656_H
#define WINDUPDATE_T2266304656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/WindUpdate
struct  WindUpdate_t2266304656 
{
public:
	union
	{
		struct
		{
		};
		uint8_t WindUpdate_t2266304656__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDUPDATE_T2266304656_H
#ifndef AIUPDATE_T2336814084_H
#define AIUPDATE_T2336814084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/AIUpdate
struct  AIUpdate_t2336814084 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AIUpdate_t2336814084__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AIUPDATE_T2336814084_H
#ifndef SENDMOUSEEVENTS_T3944192294_H
#define SENDMOUSEEVENTS_T3944192294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/SendMouseEvents
struct  SendMouseEvents_t3944192294 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SendMouseEvents_t3944192294__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T3944192294_H
#ifndef IMGUISENDQUEUEDEVENTS_T65887646_H
#define IMGUISENDQUEUEDEVENTS_T65887646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/IMGUISendQueuedEvents
struct  IMGUISendQueuedEvents_t65887646 
{
public:
	union
	{
		struct
		{
		};
		uint8_t IMGUISendQueuedEvents_t65887646__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMGUISENDQUEUEDEVENTS_T65887646_H
#ifndef CHECKTEXFIELDINPUT_T4138810349_H
#define CHECKTEXFIELDINPUT_T4138810349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/CheckTexFieldInput
struct  CheckTexFieldInput_t4138810349 
{
public:
	union
	{
		struct
		{
		};
		uint8_t CheckTexFieldInput_t4138810349__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECKTEXFIELDINPUT_T4138810349_H
#ifndef PHYSICS2DUPDATE_T552651870_H
#define PHYSICS2DUPDATE_T552651870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/Physics2DUpdate
struct  Physics2DUpdate_t552651870 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Physics2DUpdate_t552651870__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2DUPDATE_T552651870_H
#ifndef PHYSICSUPDATE_T81124440_H
#define PHYSICSUPDATE_T81124440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/PhysicsUpdate
struct  PhysicsUpdate_t81124440 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsUpdate_t81124440__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSUPDATE_T81124440_H
#ifndef PREUPDATE_T1260694976_H
#define PREUPDATE_T1260694976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate
struct  PreUpdate_t1260694976 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PreUpdate_t1260694976__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREUPDATE_T1260694976_H
#ifndef PROCESSREMOTEINPUT_T950001846_H
#define PROCESSREMOTEINPUT_T950001846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/ProcessRemoteInput
struct  ProcessRemoteInput_t950001846 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessRemoteInput_t950001846__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSREMOTEINPUT_T950001846_H
#ifndef NEWINPUTBEGINFIXEDUPDATE_T434282217_H
#define NEWINPUTBEGINFIXEDUPDATE_T434282217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/NewInputBeginFixedUpdate
struct  NewInputBeginFixedUpdate_t434282217 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputBeginFixedUpdate_t434282217__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWINPUTBEGINFIXEDUPDATE_T434282217_H
#ifndef SCRIPTRUNDELAYEDFIXEDFRAMERATE_T597857925_H
#define SCRIPTRUNDELAYEDFIXEDFRAMERATE_T597857925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate
struct  ScriptRunDelayedFixedFrameRate_t597857925 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedFixedFrameRate_t597857925__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDFIXEDFRAMERATE_T597857925_H
#ifndef UPDATEINPUTMANAGER_T2370107626_H
#define UPDATEINPUTMANAGER_T2370107626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/UpdateInputManager
struct  UpdateInputManager_t2370107626 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateInputManager_t2370107626__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEINPUTMANAGER_T2370107626_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UPDATEMAINGAMEVIEWRECT_T2120437500_H
#define UPDATEMAINGAMEVIEWRECT_T2120437500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect
struct  UpdateMainGameViewRect_t2120437500 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateMainGameViewRect_t2120437500__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEMAINGAMEVIEWRECT_T2120437500_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef MATHF_T3464937446_H
#define MATHF_T3464937446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t3464937446 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t3464937446__padding[1];
	};

public:
};

struct Mathf_t3464937446_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t3464937446_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T3464937446_H
#ifndef HITINFO_T3229609740_H
#define HITINFO_T3229609740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3229609740 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1113636619 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t4157153871 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___camera_1)); }
	inline Camera_t4157153871 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4157153871 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4157153871 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_pinvoke
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_com
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
#endif // HITINFO_T3229609740_H
#ifndef PLAYERUPDATETIME_T1948492203_H
#define PLAYERUPDATETIME_T1948492203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Initialization/PlayerUpdateTime
struct  PlayerUpdateTime_t1948492203 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateTime_t1948492203__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERUPDATETIME_T1948492203_H
#ifndef ASYNCUPLOADTIMESLICEDUPDATE_T1101356410_H
#define ASYNCUPLOADTIMESLICEDUPDATE_T1101356410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate
struct  AsyncUploadTimeSlicedUpdate_t1101356410 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AsyncUploadTimeSlicedUpdate_t1101356410__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCUPLOADTIMESLICEDUPDATE_T1101356410_H
#ifndef SYNCHRONIZESTATE_T3424594242_H
#define SYNCHRONIZESTATE_T3424594242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Initialization/SynchronizeState
struct  SynchronizeState_t3424594242 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SynchronizeState_t3424594242__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZESTATE_T3424594242_H
#ifndef SYNCHRONIZEINPUTS_T3126754378_H
#define SYNCHRONIZEINPUTS_T3126754378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Initialization/SynchronizeInputs
struct  SynchronizeInputs_t3126754378 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SynchronizeInputs_t3126754378__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEINPUTS_T3126754378_H
#ifndef XREARLYUPDATE_T2529007752_H
#define XREARLYUPDATE_T2529007752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Initialization/XREarlyUpdate
struct  XREarlyUpdate_t2529007752 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XREarlyUpdate_t2529007752__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XREARLYUPDATE_T2529007752_H
#ifndef EARLYUPDATE_T4141536149_H
#define EARLYUPDATE_T4141536149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate
struct  EarlyUpdate_t4141536149 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EarlyUpdate_t4141536149__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EARLYUPDATE_T4141536149_H
#ifndef POLLPLAYERCONNECTION_T3938037114_H
#define POLLPLAYERCONNECTION_T3938037114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/PollPlayerConnection
struct  PollPlayerConnection_t3938037114 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PollPlayerConnection_t3938037114__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLLPLAYERCONNECTION_T3938037114_H
#ifndef PROFILERSTARTFRAME_T762310541_H
#define PROFILERSTARTFRAME_T762310541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/ProfilerStartFrame
struct  ProfilerStartFrame_t762310541 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerStartFrame_t762310541__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILERSTARTFRAME_T762310541_H
#ifndef POLLHTCSPLAYERCONNECTION_T1786573189_H
#define POLLHTCSPLAYERCONNECTION_T1786573189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection
struct  PollHtcsPlayerConnection_t1786573189 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PollHtcsPlayerConnection_t1786573189__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLLHTCSPLAYERCONNECTION_T1786573189_H
#ifndef GPUTIMESTAMP_T3317708080_H
#define GPUTIMESTAMP_T3317708080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/GpuTimestamp
struct  GpuTimestamp_t3317708080 
{
public:
	union
	{
		struct
		{
		};
		uint8_t GpuTimestamp_t3317708080__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GPUTIMESTAMP_T3317708080_H
#ifndef INITIALIZATION_T2684106873_H
#define INITIALIZATION_T2684106873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Initialization
struct  Initialization_t2684106873 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Initialization_t2684106873__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIALIZATION_T2684106873_H
#ifndef CLOUDWEBSERVICESUPDATE_T1940742145_H
#define CLOUDWEBSERVICESUPDATE_T1940742145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/CloudWebServicesUpdate
struct  CloudWebServicesUpdate_t1940742145 
{
public:
	union
	{
		struct
		{
		};
		uint8_t CloudWebServicesUpdate_t1940742145__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOUDWEBSERVICESUPDATE_T1940742145_H
#ifndef PLAYERCLEANUPCACHEDDATA_T1855064291_H
#define PLAYERCLEANUPCACHEDDATA_T1855064291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData
struct  PlayerCleanupCachedData_t1855064291 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerCleanupCachedData_t1855064291__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCLEANUPCACHEDDATA_T1855064291_H
#ifndef RENDERERNOTIFYINVISIBLE_T601878339_H
#define RENDERERNOTIFYINVISIBLE_T601878339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/RendererNotifyInvisible
struct  RendererNotifyInvisible_t601878339 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RendererNotifyInvisible_t601878339__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERERNOTIFYINVISIBLE_T601878339_H
#ifndef UNITYCONNECTCLIENTUPDATE_T1837874547_H
#define UNITYCONNECTCLIENTUPDATE_T1837874547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/UnityConnectClientUpdate
struct  UnityConnectClientUpdate_t1837874547 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UnityConnectClientUpdate_t1837874547__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCONNECTCLIENTUPDATE_T1837874547_H
#ifndef UPDATETEXTURESTREAMINGMANAGER_T3443027046_H
#define UPDATETEXTURESTREAMINGMANAGER_T3443027046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager
struct  UpdateTextureStreamingManager_t3443027046 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateTextureStreamingManager_t3443027046__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATETEXTURESTREAMINGMANAGER_T3443027046_H
#ifndef UPDATEASYNCREADBACKMANAGER_T270428141_H
#define UPDATEASYNCREADBACKMANAGER_T270428141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager
struct  UpdateAsyncReadbackManager_t270428141 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAsyncReadbackManager_t270428141__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEASYNCREADBACKMANAGER_T270428141_H
#ifndef UPDATEALLUNITYWEBSTREAMS_T3349089076_H
#define UPDATEALLUNITYWEBSTREAMS_T3349089076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/UpdateAllUnityWebStreams
struct  UpdateAllUnityWebStreams_t3349089076 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllUnityWebStreams_t3349089076__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEALLUNITYWEBSTREAMS_T3349089076_H
#ifndef UPDATEPRELOADING_T2620169684_H
#define UPDATEPRELOADING_T2620169684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/UpdatePreloading
struct  UpdatePreloading_t2620169684 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdatePreloading_t2620169684__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEPRELOADING_T2620169684_H
#ifndef PRESENTBEFOREUPDATE_T1446628141_H
#define PRESENTBEFOREUPDATE_T1446628141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/PresentBeforeUpdate
struct  PresentBeforeUpdate_t1446628141 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PresentBeforeUpdate_t1446628141__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESENTBEFOREUPDATE_T1446628141_H
#ifndef CLEARLINES_T2324646809_H
#define CLEARLINES_T2324646809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/ClearLines
struct  ClearLines_t2324646809 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearLines_t2324646809__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEARLINES_T2324646809_H
#ifndef CLEARINTERMEDIATERENDERERS_T1003550968_H
#define CLEARINTERMEDIATERENDERERS_T1003550968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers
struct  ClearIntermediateRenderers_t1003550968 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearIntermediateRenderers_t1003550968__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEARINTERMEDIATERENDERERS_T1003550968_H
#ifndef PROCESSMOUSEINWINDOW_T3697240858_H
#define PROCESSMOUSEINWINDOW_T3697240858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/ProcessMouseInWindow
struct  ProcessMouseInWindow_t3697240858 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessMouseInWindow_t3697240858__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSMOUSEINWINDOW_T3697240858_H
#ifndef EXECUTEMAINTHREADJOBS_T460916326_H
#define EXECUTEMAINTHREADJOBS_T460916326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs
struct  ExecuteMainThreadJobs_t460916326 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExecuteMainThreadJobs_t460916326__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEMAINTHREADJOBS_T460916326_H
#ifndef UNITYWEBREQUESTUPDATE_T435214142_H
#define UNITYWEBREQUESTUPDATE_T435214142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate
struct  UnityWebRequestUpdate_t435214142 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UnityWebRequestUpdate_t435214142__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWEBREQUESTUPDATE_T435214142_H
#ifndef RESETFRAMESTATSAFTERPRESENT_T966245239_H
#define RESETFRAMESTATSAFTERPRESENT_T966245239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent
struct  ResetFrameStatsAfterPresent_t966245239 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ResetFrameStatsAfterPresent_t966245239__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESETFRAMESTATSAFTERPRESENT_T966245239_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef CAMERACLEARFLAGS_T2362496923_H
#define CAMERACLEARFLAGS_T2362496923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t2362496923 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t2362496923, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T2362496923_H
#ifndef MESHTOPOLOGY_T838400051_H
#define MESHTOPOLOGY_T838400051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshTopology
struct  MeshTopology_t838400051 
{
public:
	// System.Int32 UnityEngine.MeshTopology::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MeshTopology_t838400051, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHTOPOLOGY_T838400051_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef LIGHTMAPSMODE_T12202505_H
#define LIGHTMAPSMODE_T12202505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightmapsMode
struct  LightmapsMode_t12202505 
{
public:
	// System.Int32 UnityEngine.LightmapsMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightmapsMode_t12202505, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTMAPSMODE_T12202505_H
#ifndef COMPAREFUNCTION_T2171731108_H
#define COMPAREFUNCTION_T2171731108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t2171731108 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareFunction_t2171731108, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREFUNCTION_T2171731108_H
#ifndef COLORWRITEMASK_T4282245599_H
#define COLORWRITEMASK_T4282245599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t4282245599 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWriteMask_t4282245599, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORWRITEMASK_T4282245599_H
#ifndef STENCILOP_T3446174106_H
#define STENCILOP_T3446174106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t3446174106 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StencilOp_t3446174106, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STENCILOP_T3446174106_H
#ifndef SHADOWCASTINGMODE_T2280965600_H
#define SHADOWCASTINGMODE_T2280965600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t2280965600 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t2280965600, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWCASTINGMODE_T2280965600_H
#ifndef STATUS_T785886969_H
#define STATUS_T785886969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard/Status
struct  Status_t785886969 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboard/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t785886969, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T785886969_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef MATHFINTERNAL_T624072491_H
#define MATHFINTERNAL_T624072491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t624072491 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t624072491__padding[1];
	};

public:
};

struct MathfInternal_t624072491_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T624072491_H
#ifndef INTERNALSHADERCHANNEL_T300897861_H
#define INTERNALSHADERCHANNEL_T300897861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t300897861 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t300897861, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSHADERCHANNEL_T300897861_H
#ifndef INTERNALVERTEXCHANNELTYPE_T299736786_H
#define INTERNALVERTEXCHANNELTYPE_T299736786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t299736786 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t299736786, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALVERTEXCHANNELTYPE_T299736786_H
#ifndef PLANE_T1000493321_H
#define PLANE_T1000493321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t1000493321 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t3722313464  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Normal_0)); }
	inline Vector3_t3722313464  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t3722313464  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T1000493321_H
#ifndef MIXEDLIGHTINGMODE_T270503864_H
#define MIXEDLIGHTINGMODE_T270503864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MixedLightingMode
struct  MixedLightingMode_t270503864 
{
public:
	// System.Int32 UnityEngine.MixedLightingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MixedLightingMode_t270503864, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDLIGHTINGMODE_T270503864_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (MixedLightingMode_t270503864)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1300[4] = 
{
	MixedLightingMode_t270503864::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (CameraClearFlags_t2362496923)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1301[6] = 
{
	CameraClearFlags_t2362496923::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (MeshTopology_t838400051)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1302[6] = 
{
	MeshTopology_t838400051::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (TextureWrapMode_t584250749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1303[5] = 
{
	TextureWrapMode_t584250749::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (LightmapsMode_t12202505)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1304[3] = 
{
	LightmapsMode_t12202505::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { sizeof (CompareFunction_t2171731108)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1305[10] = 
{
	CompareFunction_t2171731108::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (ColorWriteMask_t4282245599)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1306[6] = 
{
	ColorWriteMask_t4282245599::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (StencilOp_t3446174106)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1307[9] = 
{
	StencilOp_t3446174106::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (ShadowCastingMode_t2280965600)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1308[5] = 
{
	ShadowCastingMode_t2280965600::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (MeshRenderer_t587009260), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (TouchScreenKeyboard_t731888065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (Status_t785886969)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1311[5] = 
{
	Status_t785886969::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (KeyCode_t2599294277)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1312[322] = 
{
	KeyCode_t2599294277::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (ManagedStreamHelpers_t1984295859), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (Matrix4x4_t1817901843)+ sizeof (RuntimeObject), sizeof(Matrix4x4_t1817901843 ), sizeof(Matrix4x4_t1817901843_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1314[18] = 
{
	Matrix4x4_t1817901843::get_offset_of_m00_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m10_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m20_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m30_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m01_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m11_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m21_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m31_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m02_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m12_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m22_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m32_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m03_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m13_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m23_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843::get_offset_of_m33_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1817901843_StaticFields::get_offset_of_zeroMatrix_16(),
	Matrix4x4_t1817901843_StaticFields::get_offset_of_identityMatrix_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (Vector3_t3722313464)+ sizeof (RuntimeObject), sizeof(Vector3_t3722313464 ), sizeof(Vector3_t3722313464_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1315[14] = 
{
	0,
	Vector3_t3722313464::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3722313464::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3722313464::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3722313464_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t3722313464_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t3722313464_StaticFields::get_offset_of_upVector_6(),
	Vector3_t3722313464_StaticFields::get_offset_of_downVector_7(),
	Vector3_t3722313464_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t3722313464_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t3722313464_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t3722313464_StaticFields::get_offset_of_backVector_11(),
	Vector3_t3722313464_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t3722313464_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (Quaternion_t2301928331)+ sizeof (RuntimeObject), sizeof(Quaternion_t2301928331 ), sizeof(Quaternion_t2301928331_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1316[6] = 
{
	Quaternion_t2301928331::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t2301928331::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t2301928331::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t2301928331::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t2301928331_StaticFields::get_offset_of_identityQuaternion_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (Mathf_t3464937446)+ sizeof (RuntimeObject), sizeof(Mathf_t3464937446 ), sizeof(Mathf_t3464937446_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1317[1] = 
{
	Mathf_t3464937446_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (MathfInternal_t624072491)+ sizeof (RuntimeObject), sizeof(MathfInternal_t624072491 ), sizeof(MathfInternal_t624072491_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1318[3] = 
{
	MathfInternal_t624072491_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t624072491_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t624072491_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (Mesh_t3648964284), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (InternalShaderChannel_t300897861)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1320[13] = 
{
	InternalShaderChannel_t300897861::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (InternalVertexChannelType_t299736786)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1321[3] = 
{
	InternalVertexChannelType_t299736786::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (ScriptingUtils_t2624832893), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (MonoBehaviour_t3962482529), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (SendMouseEvents_t3273302915), -1, sizeof(SendMouseEvents_t3273302915_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1324[5] = 
{
	SendMouseEvents_t3273302915_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t3273302915_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t3273302915_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t3273302915_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t3273302915_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (HitInfo_t3229609740)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1325[2] = 
{
	HitInfo_t3229609740::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t3229609740::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (Plane_t1000493321)+ sizeof (RuntimeObject), sizeof(Plane_t1000493321 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1326[2] = 
{
	Plane_t1000493321::get_offset_of_m_Normal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Plane_t1000493321::get_offset_of_m_Distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (Initialization_t2684106873)+ sizeof (RuntimeObject), sizeof(Initialization_t2684106873 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (PlayerUpdateTime_t1948492203)+ sizeof (RuntimeObject), sizeof(PlayerUpdateTime_t1948492203 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (AsyncUploadTimeSlicedUpdate_t1101356410)+ sizeof (RuntimeObject), sizeof(AsyncUploadTimeSlicedUpdate_t1101356410 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (SynchronizeState_t3424594242)+ sizeof (RuntimeObject), sizeof(SynchronizeState_t3424594242 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (SynchronizeInputs_t3126754378)+ sizeof (RuntimeObject), sizeof(SynchronizeInputs_t3126754378 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (XREarlyUpdate_t2529007752)+ sizeof (RuntimeObject), sizeof(XREarlyUpdate_t2529007752 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (EarlyUpdate_t4141536149)+ sizeof (RuntimeObject), sizeof(EarlyUpdate_t4141536149 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (PollPlayerConnection_t3938037114)+ sizeof (RuntimeObject), sizeof(PollPlayerConnection_t3938037114 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (ProfilerStartFrame_t762310541)+ sizeof (RuntimeObject), sizeof(ProfilerStartFrame_t762310541 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (PollHtcsPlayerConnection_t1786573189)+ sizeof (RuntimeObject), sizeof(PollHtcsPlayerConnection_t1786573189 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (GpuTimestamp_t3317708080)+ sizeof (RuntimeObject), sizeof(GpuTimestamp_t3317708080 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (UnityConnectClientUpdate_t1837874547)+ sizeof (RuntimeObject), sizeof(UnityConnectClientUpdate_t1837874547 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (CloudWebServicesUpdate_t1940742145)+ sizeof (RuntimeObject), sizeof(CloudWebServicesUpdate_t1940742145 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (UnityWebRequestUpdate_t435214142)+ sizeof (RuntimeObject), sizeof(UnityWebRequestUpdate_t435214142 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (ExecuteMainThreadJobs_t460916326)+ sizeof (RuntimeObject), sizeof(ExecuteMainThreadJobs_t460916326 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (ProcessMouseInWindow_t3697240858)+ sizeof (RuntimeObject), sizeof(ProcessMouseInWindow_t3697240858 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (ClearIntermediateRenderers_t1003550968)+ sizeof (RuntimeObject), sizeof(ClearIntermediateRenderers_t1003550968 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (ClearLines_t2324646809)+ sizeof (RuntimeObject), sizeof(ClearLines_t2324646809 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (PresentBeforeUpdate_t1446628141)+ sizeof (RuntimeObject), sizeof(PresentBeforeUpdate_t1446628141 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (ResetFrameStatsAfterPresent_t966245239)+ sizeof (RuntimeObject), sizeof(ResetFrameStatsAfterPresent_t966245239 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (UpdateAllUnityWebStreams_t3349089076)+ sizeof (RuntimeObject), sizeof(UpdateAllUnityWebStreams_t3349089076 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (UpdateAsyncReadbackManager_t270428141)+ sizeof (RuntimeObject), sizeof(UpdateAsyncReadbackManager_t270428141 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (UpdateTextureStreamingManager_t3443027046)+ sizeof (RuntimeObject), sizeof(UpdateTextureStreamingManager_t3443027046 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (UpdatePreloading_t2620169684)+ sizeof (RuntimeObject), sizeof(UpdatePreloading_t2620169684 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (RendererNotifyInvisible_t601878339)+ sizeof (RuntimeObject), sizeof(RendererNotifyInvisible_t601878339 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (PlayerCleanupCachedData_t1855064291)+ sizeof (RuntimeObject), sizeof(PlayerCleanupCachedData_t1855064291 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (UpdateMainGameViewRect_t2120437500)+ sizeof (RuntimeObject), sizeof(UpdateMainGameViewRect_t2120437500 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { sizeof (UpdateCanvasRectTransform_t2609744349)+ sizeof (RuntimeObject), sizeof(UpdateCanvasRectTransform_t2609744349 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (UpdateInputManager_t2370107626)+ sizeof (RuntimeObject), sizeof(UpdateInputManager_t2370107626 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (ProcessRemoteInput_t950001846)+ sizeof (RuntimeObject), sizeof(ProcessRemoteInput_t950001846 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (XRUpdate_t580684219)+ sizeof (RuntimeObject), sizeof(XRUpdate_t580684219 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (ScriptRunDelayedStartupFrame_t1717816565)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedStartupFrame_t1717816565 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (UpdateKinect_t3392953923)+ sizeof (RuntimeObject), sizeof(UpdateKinect_t3392953923 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (DeliverIosPlatformEvents_t1576278647)+ sizeof (RuntimeObject), sizeof(DeliverIosPlatformEvents_t1576278647 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { sizeof (DispatchEventQueueEvents_t929081739)+ sizeof (RuntimeObject), sizeof(DispatchEventQueueEvents_t929081739 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (DirectorSampleTime_t115137244)+ sizeof (RuntimeObject), sizeof(DirectorSampleTime_t115137244 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (PhysicsResetInterpolatedTransformPosition_t4228954803)+ sizeof (RuntimeObject), sizeof(PhysicsResetInterpolatedTransformPosition_t4228954803 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { sizeof (NewInputBeginFrame_t3911897700)+ sizeof (RuntimeObject), sizeof(NewInputBeginFrame_t3911897700 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (SpriteAtlasManagerUpdate_t2882383376)+ sizeof (RuntimeObject), sizeof(SpriteAtlasManagerUpdate_t2882383376 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (TangoUpdate_t85607497)+ sizeof (RuntimeObject), sizeof(TangoUpdate_t85607497 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (PerformanceAnalyticsUpdate_t1497089951)+ sizeof (RuntimeObject), sizeof(PerformanceAnalyticsUpdate_t1497089951 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (FixedUpdate_t2729551173)+ sizeof (RuntimeObject), sizeof(FixedUpdate_t2729551173 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { sizeof (ClearLines_t78737613)+ sizeof (RuntimeObject), sizeof(ClearLines_t78737613 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (DirectorFixedSampleTime_t1712077364)+ sizeof (RuntimeObject), sizeof(DirectorFixedSampleTime_t1712077364 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (AudioFixedUpdate_t3174230782)+ sizeof (RuntimeObject), sizeof(AudioFixedUpdate_t3174230782 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (ScriptRunBehaviourFixedUpdate_t2814082390)+ sizeof (RuntimeObject), sizeof(ScriptRunBehaviourFixedUpdate_t2814082390 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (DirectorFixedUpdate_t303986765)+ sizeof (RuntimeObject), sizeof(DirectorFixedUpdate_t303986765 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (LegacyFixedAnimationUpdate_t457569808)+ sizeof (RuntimeObject), sizeof(LegacyFixedAnimationUpdate_t457569808 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (XRFixedUpdate_t322762781)+ sizeof (RuntimeObject), sizeof(XRFixedUpdate_t322762781 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (PhysicsFixedUpdate_t2503573795)+ sizeof (RuntimeObject), sizeof(PhysicsFixedUpdate_t2503573795 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { sizeof (Physics2DFixedUpdate_t3234482501)+ sizeof (RuntimeObject), sizeof(Physics2DFixedUpdate_t3234482501 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { sizeof (DirectorFixedUpdatePostPhysics_t1695763577)+ sizeof (RuntimeObject), sizeof(DirectorFixedUpdatePostPhysics_t1695763577 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { sizeof (ScriptRunDelayedFixedFrameRate_t597857925)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedFixedFrameRate_t597857925 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (ScriptRunDelayedTasks_t2734668064)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedTasks_t2734668064 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (NewInputBeginFixedUpdate_t434282217)+ sizeof (RuntimeObject), sizeof(NewInputBeginFixedUpdate_t434282217 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (NewInputEndFixedUpdate_t3418907705)+ sizeof (RuntimeObject), sizeof(NewInputEndFixedUpdate_t3418907705 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (PreUpdate_t1260694976)+ sizeof (RuntimeObject), sizeof(PreUpdate_t1260694976 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (PhysicsUpdate_t81124440)+ sizeof (RuntimeObject), sizeof(PhysicsUpdate_t81124440 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (Physics2DUpdate_t552651870)+ sizeof (RuntimeObject), sizeof(Physics2DUpdate_t552651870 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (CheckTexFieldInput_t4138810349)+ sizeof (RuntimeObject), sizeof(CheckTexFieldInput_t4138810349 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (IMGUISendQueuedEvents_t65887646)+ sizeof (RuntimeObject), sizeof(IMGUISendQueuedEvents_t65887646 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (SendMouseEvents_t3944192294)+ sizeof (RuntimeObject), sizeof(SendMouseEvents_t3944192294 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (AIUpdate_t2336814084)+ sizeof (RuntimeObject), sizeof(AIUpdate_t2336814084 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (WindUpdate_t2266304656)+ sizeof (RuntimeObject), sizeof(WindUpdate_t2266304656 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (UpdateVideo_t1599856004)+ sizeof (RuntimeObject), sizeof(UpdateVideo_t1599856004 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (NewInputUpdate_t4285063962)+ sizeof (RuntimeObject), sizeof(NewInputUpdate_t4285063962 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (Update_t723921334)+ sizeof (RuntimeObject), sizeof(Update_t723921334 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (ScriptRunBehaviourUpdate_t1852625933)+ sizeof (RuntimeObject), sizeof(ScriptRunBehaviourUpdate_t1852625933 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (DirectorUpdate_t2427988364)+ sizeof (RuntimeObject), sizeof(DirectorUpdate_t2427988364 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (ScriptRunDelayedDynamicFrameRate_t3844766269)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedDynamicFrameRate_t3844766269 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { sizeof (PreLateUpdate_t3194249939)+ sizeof (RuntimeObject), sizeof(PreLateUpdate_t3194249939 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (AIUpdatePostScript_t1991765663)+ sizeof (RuntimeObject), sizeof(AIUpdatePostScript_t1991765663 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { sizeof (DirectorUpdateAnimationBegin_t3483220745)+ sizeof (RuntimeObject), sizeof(DirectorUpdateAnimationBegin_t3483220745 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
