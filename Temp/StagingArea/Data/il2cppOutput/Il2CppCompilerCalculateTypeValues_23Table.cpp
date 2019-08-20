#include "il2cpp-config.h"

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


// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t445075330;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t2725803170;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry[]
struct EntryU5BU5D_t3574483607;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GUIText
struct GUIText_t402233326;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct Entries_t3168066469;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct WaypointList_t2584574554;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t2007329276;




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
#ifndef WAYPOINTLIST_T2584574554_H
#define WAYPOINTLIST_T2584574554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct  WaypointList_t2584574554  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointCircuit/WaypointList::circuit
	WaypointCircuit_t445075330 * ___circuit_0;
	// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit/WaypointList::items
	TransformU5BU5D_t807237628* ___items_1;

public:
	inline static int32_t get_offset_of_circuit_0() { return static_cast<int32_t>(offsetof(WaypointList_t2584574554, ___circuit_0)); }
	inline WaypointCircuit_t445075330 * get_circuit_0() const { return ___circuit_0; }
	inline WaypointCircuit_t445075330 ** get_address_of_circuit_0() { return &___circuit_0; }
	inline void set_circuit_0(WaypointCircuit_t445075330 * value)
	{
		___circuit_0 = value;
		Il2CppCodeGenWriteBarrier((&___circuit_0), value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(WaypointList_t2584574554, ___items_1)); }
	inline TransformU5BU5D_t807237628* get_items_1() const { return ___items_1; }
	inline TransformU5BU5D_t807237628** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(TransformU5BU5D_t807237628* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTLIST_T2584574554_H
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
#ifndef U3CRELOADLEVELU3EC__ITERATOR2_T2784493974_H
#define U3CRELOADLEVELU3EC__ITERATOR2_T2784493974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2
struct  U3CReloadLevelU3Ec__Iterator2_t2784493974  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::entry
	Entry_t2725803170 * ___entry_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_entry_0() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2784493974, ___entry_0)); }
	inline Entry_t2725803170 * get_entry_0() const { return ___entry_0; }
	inline Entry_t2725803170 ** get_address_of_entry_0() { return &___entry_0; }
	inline void set_entry_0(Entry_t2725803170 * value)
	{
		___entry_0 = value;
		Il2CppCodeGenWriteBarrier((&___entry_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2784493974, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2784493974, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2784493974, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRELOADLEVELU3EC__ITERATOR2_T2784493974_H
#ifndef ENTRIES_T3168066469_H
#define ENTRIES_T3168066469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct  Entries_t3168066469  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry[] UnityStandardAssets.Utility.TimedObjectActivator/Entries::entries
	EntryU5BU5D_t3574483607* ___entries_0;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(Entries_t3168066469, ___entries_0)); }
	inline EntryU5BU5D_t3574483607* get_entries_0() const { return ___entries_0; }
	inline EntryU5BU5D_t3574483607** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(EntryU5BU5D_t3574483607* value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRIES_T3168066469_H
#ifndef U3CACTIVATEU3EC__ITERATOR0_T2664723090_H
#define U3CACTIVATEU3EC__ITERATOR0_T2664723090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0
struct  U3CActivateU3Ec__Iterator0_t2664723090  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::entry
	Entry_t2725803170 * ___entry_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_entry_0() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t2664723090, ___entry_0)); }
	inline Entry_t2725803170 * get_entry_0() const { return ___entry_0; }
	inline Entry_t2725803170 ** get_address_of_entry_0() { return &___entry_0; }
	inline void set_entry_0(Entry_t2725803170 * value)
	{
		___entry_0 = value;
		Il2CppCodeGenWriteBarrier((&___entry_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t2664723090, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t2664723090, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t2664723090, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CACTIVATEU3EC__ITERATOR0_T2664723090_H
#ifndef U3CDEACTIVATEU3EC__ITERATOR1_T730025274_H
#define U3CDEACTIVATEU3EC__ITERATOR1_T730025274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1
struct  U3CDeactivateU3Ec__Iterator1_t730025274  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::entry
	Entry_t2725803170 * ___entry_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_entry_0() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t730025274, ___entry_0)); }
	inline Entry_t2725803170 * get_entry_0() const { return ___entry_0; }
	inline Entry_t2725803170 ** get_address_of_entry_0() { return &___entry_0; }
	inline void set_entry_0(Entry_t2725803170 * value)
	{
		___entry_0 = value;
		Il2CppCodeGenWriteBarrier((&___entry_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t730025274, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t730025274, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t730025274, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDEACTIVATEU3EC__ITERATOR1_T730025274_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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
#ifndef ROUTEPOINT_T3880028948_H
#define ROUTEPOINT_T3880028948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
struct  RoutePoint_t3880028948 
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::direction
	Vector3_t3722313464  ___direction_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(RoutePoint_t3880028948, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(RoutePoint_t3880028948, ___direction_1)); }
	inline Vector3_t3722313464  get_direction_1() const { return ___direction_1; }
	inline Vector3_t3722313464 * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(Vector3_t3722313464  value)
	{
		___direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROUTEPOINT_T3880028948_H
#ifndef PROGRESSSTYLE_T3254572979_H
#define PROGRESSSTYLE_T3254572979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
struct  ProgressStyle_t3254572979 
{
public:
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProgressStyle_t3254572979, ___value___1)); }
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
#endif // PROGRESSSTYLE_T3254572979_H
#ifndef ACTION_T837364808_H
#define ACTION_T837364808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Action
struct  Action_t837364808 
{
public:
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/Action::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Action_t837364808, ___value___1)); }
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
#endif // ACTION_T837364808_H
#ifndef BUILDTARGETGROUP_T72322187_H
#define BUILDTARGETGROUP_T72322187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
struct  BuildTargetGroup_t72322187 
{
public:
	// System.Int32 UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuildTargetGroup_t72322187, ___value___1)); }
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
#endif // BUILDTARGETGROUP_T72322187_H
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
#ifndef ENTRY_T2725803170_H
#define ENTRY_T2725803170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct  Entry_t2725803170  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityStandardAssets.Utility.TimedObjectActivator/Entry::target
	GameObject_t1113636619 * ___target_0;
	// UnityStandardAssets.Utility.TimedObjectActivator/Action UnityStandardAssets.Utility.TimedObjectActivator/Entry::action
	int32_t ___action_1;
	// System.Single UnityStandardAssets.Utility.TimedObjectActivator/Entry::delay
	float ___delay_2;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Entry_t2725803170, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Entry_t2725803170, ___action_1)); }
	inline int32_t get_action_1() const { return ___action_1; }
	inline int32_t* get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(int32_t value)
	{
		___action_1 = value;
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(Entry_t2725803170, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_T2725803170_H
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
#ifndef TIMEDOBJECTDESTRUCTOR_T3438860414_H
#define TIMEDOBJECTDESTRUCTOR_T3438860414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectDestructor
struct  TimedObjectDestructor_t3438860414  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets.Utility.TimedObjectDestructor::m_TimeOut
	float ___m_TimeOut_2;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectDestructor::m_DetachChildren
	bool ___m_DetachChildren_3;

public:
	inline static int32_t get_offset_of_m_TimeOut_2() { return static_cast<int32_t>(offsetof(TimedObjectDestructor_t3438860414, ___m_TimeOut_2)); }
	inline float get_m_TimeOut_2() const { return ___m_TimeOut_2; }
	inline float* get_address_of_m_TimeOut_2() { return &___m_TimeOut_2; }
	inline void set_m_TimeOut_2(float value)
	{
		___m_TimeOut_2 = value;
	}

	inline static int32_t get_offset_of_m_DetachChildren_3() { return static_cast<int32_t>(offsetof(TimedObjectDestructor_t3438860414, ___m_DetachChildren_3)); }
	inline bool get_m_DetachChildren_3() const { return ___m_DetachChildren_3; }
	inline bool* get_address_of_m_DetachChildren_3() { return &___m_DetachChildren_3; }
	inline void set_m_DetachChildren_3(bool value)
	{
		___m_DetachChildren_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEDOBJECTDESTRUCTOR_T3438860414_H
#ifndef SIMPLEACTIVATORMENU_T1387811551_H
#define SIMPLEACTIVATORMENU_T1387811551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SimpleActivatorMenu
struct  SimpleActivatorMenu_t1387811551  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUIText UnityStandardAssets.Utility.SimpleActivatorMenu::camSwitchButton
	GUIText_t402233326 * ___camSwitchButton_2;
	// UnityEngine.GameObject[] UnityStandardAssets.Utility.SimpleActivatorMenu::objects
	GameObjectU5BU5D_t3328599146* ___objects_3;
	// System.Int32 UnityStandardAssets.Utility.SimpleActivatorMenu::m_CurrentActiveObject
	int32_t ___m_CurrentActiveObject_4;

public:
	inline static int32_t get_offset_of_camSwitchButton_2() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t1387811551, ___camSwitchButton_2)); }
	inline GUIText_t402233326 * get_camSwitchButton_2() const { return ___camSwitchButton_2; }
	inline GUIText_t402233326 ** get_address_of_camSwitchButton_2() { return &___camSwitchButton_2; }
	inline void set_camSwitchButton_2(GUIText_t402233326 * value)
	{
		___camSwitchButton_2 = value;
		Il2CppCodeGenWriteBarrier((&___camSwitchButton_2), value);
	}

	inline static int32_t get_offset_of_objects_3() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t1387811551, ___objects_3)); }
	inline GameObjectU5BU5D_t3328599146* get_objects_3() const { return ___objects_3; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_objects_3() { return &___objects_3; }
	inline void set_objects_3(GameObjectU5BU5D_t3328599146* value)
	{
		___objects_3 = value;
		Il2CppCodeGenWriteBarrier((&___objects_3), value);
	}

	inline static int32_t get_offset_of_m_CurrentActiveObject_4() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t1387811551, ___m_CurrentActiveObject_4)); }
	inline int32_t get_m_CurrentActiveObject_4() const { return ___m_CurrentActiveObject_4; }
	inline int32_t* get_address_of_m_CurrentActiveObject_4() { return &___m_CurrentActiveObject_4; }
	inline void set_m_CurrentActiveObject_4(int32_t value)
	{
		___m_CurrentActiveObject_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEACTIVATORMENU_T1387811551_H
#ifndef TIMEDOBJECTACTIVATOR_T1846709985_H
#define TIMEDOBJECTACTIVATOR_T1846709985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator
struct  TimedObjectActivator_t1846709985  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entries UnityStandardAssets.Utility.TimedObjectActivator::entries
	Entries_t3168066469 * ___entries_2;

public:
	inline static int32_t get_offset_of_entries_2() { return static_cast<int32_t>(offsetof(TimedObjectActivator_t1846709985, ___entries_2)); }
	inline Entries_t3168066469 * get_entries_2() const { return ___entries_2; }
	inline Entries_t3168066469 ** get_address_of_entries_2() { return &___entries_2; }
	inline void set_entries_2(Entries_t3168066469 * value)
	{
		___entries_2 = value;
		Il2CppCodeGenWriteBarrier((&___entries_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEDOBJECTACTIVATOR_T1846709985_H
#ifndef SMOOTHFOLLOW_T4204731361_H
#define SMOOTHFOLLOW_T4204731361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SmoothFollow
struct  SmoothFollow_t4204731361  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityStandardAssets.Utility.SmoothFollow::target
	Transform_t3600365921 * ___target_2;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::distance
	float ___distance_3;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::height
	float ___height_4;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::rotationDamping
	float ___rotationDamping_5;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::heightDamping
	float ___heightDamping_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(SmoothFollow_t4204731361, ___target_2)); }
	inline Transform_t3600365921 * get_target_2() const { return ___target_2; }
	inline Transform_t3600365921 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3600365921 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(SmoothFollow_t4204731361, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(SmoothFollow_t4204731361, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_rotationDamping_5() { return static_cast<int32_t>(offsetof(SmoothFollow_t4204731361, ___rotationDamping_5)); }
	inline float get_rotationDamping_5() const { return ___rotationDamping_5; }
	inline float* get_address_of_rotationDamping_5() { return &___rotationDamping_5; }
	inline void set_rotationDamping_5(float value)
	{
		___rotationDamping_5 = value;
	}

	inline static int32_t get_offset_of_heightDamping_6() { return static_cast<int32_t>(offsetof(SmoothFollow_t4204731361, ___heightDamping_6)); }
	inline float get_heightDamping_6() const { return ___heightDamping_6; }
	inline float* get_address_of_heightDamping_6() { return &___heightDamping_6; }
	inline void set_heightDamping_6(float value)
	{
		___heightDamping_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMOOTHFOLLOW_T4204731361_H
#ifndef WAYPOINTPROGRESSTRACKER_T1841386251_H
#define WAYPOINTPROGRESSTRACKER_T1841386251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker
struct  WaypointProgressTracker_t1841386251  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointProgressTracker::circuit
	WaypointCircuit_t445075330 * ___circuit_2;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetOffset
	float ___lookAheadForTargetOffset_3;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetFactor
	float ___lookAheadForTargetFactor_4;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedOffset
	float ___lookAheadForSpeedOffset_5;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedFactor
	float ___lookAheadForSpeedFactor_6;
	// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle UnityStandardAssets.Utility.WaypointProgressTracker::progressStyle
	int32_t ___progressStyle_7;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::pointToPointThreshold
	float ___pointToPointThreshold_8;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<targetPoint>k__BackingField
	RoutePoint_t3880028948  ___U3CtargetPointU3Ek__BackingField_9;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<speedPoint>k__BackingField
	RoutePoint_t3880028948  ___U3CspeedPointU3Ek__BackingField_10;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<progressPoint>k__BackingField
	RoutePoint_t3880028948  ___U3CprogressPointU3Ek__BackingField_11;
	// UnityEngine.Transform UnityStandardAssets.Utility.WaypointProgressTracker::target
	Transform_t3600365921 * ___target_12;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::progressDistance
	float ___progressDistance_13;
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker::progressNum
	int32_t ___progressNum_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointProgressTracker::lastPosition
	Vector3_t3722313464  ___lastPosition_15;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::speed
	float ___speed_16;

public:
	inline static int32_t get_offset_of_circuit_2() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___circuit_2)); }
	inline WaypointCircuit_t445075330 * get_circuit_2() const { return ___circuit_2; }
	inline WaypointCircuit_t445075330 ** get_address_of_circuit_2() { return &___circuit_2; }
	inline void set_circuit_2(WaypointCircuit_t445075330 * value)
	{
		___circuit_2 = value;
		Il2CppCodeGenWriteBarrier((&___circuit_2), value);
	}

	inline static int32_t get_offset_of_lookAheadForTargetOffset_3() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForTargetOffset_3)); }
	inline float get_lookAheadForTargetOffset_3() const { return ___lookAheadForTargetOffset_3; }
	inline float* get_address_of_lookAheadForTargetOffset_3() { return &___lookAheadForTargetOffset_3; }
	inline void set_lookAheadForTargetOffset_3(float value)
	{
		___lookAheadForTargetOffset_3 = value;
	}

	inline static int32_t get_offset_of_lookAheadForTargetFactor_4() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForTargetFactor_4)); }
	inline float get_lookAheadForTargetFactor_4() const { return ___lookAheadForTargetFactor_4; }
	inline float* get_address_of_lookAheadForTargetFactor_4() { return &___lookAheadForTargetFactor_4; }
	inline void set_lookAheadForTargetFactor_4(float value)
	{
		___lookAheadForTargetFactor_4 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedOffset_5() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForSpeedOffset_5)); }
	inline float get_lookAheadForSpeedOffset_5() const { return ___lookAheadForSpeedOffset_5; }
	inline float* get_address_of_lookAheadForSpeedOffset_5() { return &___lookAheadForSpeedOffset_5; }
	inline void set_lookAheadForSpeedOffset_5(float value)
	{
		___lookAheadForSpeedOffset_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedFactor_6() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForSpeedFactor_6)); }
	inline float get_lookAheadForSpeedFactor_6() const { return ___lookAheadForSpeedFactor_6; }
	inline float* get_address_of_lookAheadForSpeedFactor_6() { return &___lookAheadForSpeedFactor_6; }
	inline void set_lookAheadForSpeedFactor_6(float value)
	{
		___lookAheadForSpeedFactor_6 = value;
	}

	inline static int32_t get_offset_of_progressStyle_7() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___progressStyle_7)); }
	inline int32_t get_progressStyle_7() const { return ___progressStyle_7; }
	inline int32_t* get_address_of_progressStyle_7() { return &___progressStyle_7; }
	inline void set_progressStyle_7(int32_t value)
	{
		___progressStyle_7 = value;
	}

	inline static int32_t get_offset_of_pointToPointThreshold_8() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___pointToPointThreshold_8)); }
	inline float get_pointToPointThreshold_8() const { return ___pointToPointThreshold_8; }
	inline float* get_address_of_pointToPointThreshold_8() { return &___pointToPointThreshold_8; }
	inline void set_pointToPointThreshold_8(float value)
	{
		___pointToPointThreshold_8 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPointU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___U3CtargetPointU3Ek__BackingField_9)); }
	inline RoutePoint_t3880028948  get_U3CtargetPointU3Ek__BackingField_9() const { return ___U3CtargetPointU3Ek__BackingField_9; }
	inline RoutePoint_t3880028948 * get_address_of_U3CtargetPointU3Ek__BackingField_9() { return &___U3CtargetPointU3Ek__BackingField_9; }
	inline void set_U3CtargetPointU3Ek__BackingField_9(RoutePoint_t3880028948  value)
	{
		___U3CtargetPointU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CspeedPointU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___U3CspeedPointU3Ek__BackingField_10)); }
	inline RoutePoint_t3880028948  get_U3CspeedPointU3Ek__BackingField_10() const { return ___U3CspeedPointU3Ek__BackingField_10; }
	inline RoutePoint_t3880028948 * get_address_of_U3CspeedPointU3Ek__BackingField_10() { return &___U3CspeedPointU3Ek__BackingField_10; }
	inline void set_U3CspeedPointU3Ek__BackingField_10(RoutePoint_t3880028948  value)
	{
		___U3CspeedPointU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CprogressPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___U3CprogressPointU3Ek__BackingField_11)); }
	inline RoutePoint_t3880028948  get_U3CprogressPointU3Ek__BackingField_11() const { return ___U3CprogressPointU3Ek__BackingField_11; }
	inline RoutePoint_t3880028948 * get_address_of_U3CprogressPointU3Ek__BackingField_11() { return &___U3CprogressPointU3Ek__BackingField_11; }
	inline void set_U3CprogressPointU3Ek__BackingField_11(RoutePoint_t3880028948  value)
	{
		___U3CprogressPointU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___target_12)); }
	inline Transform_t3600365921 * get_target_12() const { return ___target_12; }
	inline Transform_t3600365921 ** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(Transform_t3600365921 * value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier((&___target_12), value);
	}

	inline static int32_t get_offset_of_progressDistance_13() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___progressDistance_13)); }
	inline float get_progressDistance_13() const { return ___progressDistance_13; }
	inline float* get_address_of_progressDistance_13() { return &___progressDistance_13; }
	inline void set_progressDistance_13(float value)
	{
		___progressDistance_13 = value;
	}

	inline static int32_t get_offset_of_progressNum_14() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___progressNum_14)); }
	inline int32_t get_progressNum_14() const { return ___progressNum_14; }
	inline int32_t* get_address_of_progressNum_14() { return &___progressNum_14; }
	inline void set_progressNum_14(int32_t value)
	{
		___progressNum_14 = value;
	}

	inline static int32_t get_offset_of_lastPosition_15() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lastPosition_15)); }
	inline Vector3_t3722313464  get_lastPosition_15() const { return ___lastPosition_15; }
	inline Vector3_t3722313464 * get_address_of_lastPosition_15() { return &___lastPosition_15; }
	inline void set_lastPosition_15(Vector3_t3722313464  value)
	{
		___lastPosition_15 = value;
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___speed_16)); }
	inline float get_speed_16() const { return ___speed_16; }
	inline float* get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(float value)
	{
		___speed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTPROGRESSTRACKER_T1841386251_H
#ifndef WAYPOINTCIRCUIT_T445075330_H
#define WAYPOINTCIRCUIT_T445075330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit
struct  WaypointCircuit_t445075330  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit/WaypointList UnityStandardAssets.Utility.WaypointCircuit::waypointList
	WaypointList_t2584574554 * ___waypointList_2;
	// System.Boolean UnityStandardAssets.Utility.WaypointCircuit::smoothRoute
	bool ___smoothRoute_3;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::numPoints
	int32_t ___numPoints_4;
	// UnityEngine.Vector3[] UnityStandardAssets.Utility.WaypointCircuit::points
	Vector3U5BU5D_t1718750761* ___points_5;
	// System.Single[] UnityStandardAssets.Utility.WaypointCircuit::distances
	SingleU5BU5D_t1444911251* ___distances_6;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::editorVisualisationSubsteps
	float ___editorVisualisationSubsteps_7;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_8;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p0n
	int32_t ___p0n_9;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p1n
	int32_t ___p1n_10;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p2n
	int32_t ___p2n_11;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p3n
	int32_t ___p3n_12;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::i
	float ___i_13;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P0
	Vector3_t3722313464  ___P0_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P1
	Vector3_t3722313464  ___P1_15;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P2
	Vector3_t3722313464  ___P2_16;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P3
	Vector3_t3722313464  ___P3_17;

public:
	inline static int32_t get_offset_of_waypointList_2() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___waypointList_2)); }
	inline WaypointList_t2584574554 * get_waypointList_2() const { return ___waypointList_2; }
	inline WaypointList_t2584574554 ** get_address_of_waypointList_2() { return &___waypointList_2; }
	inline void set_waypointList_2(WaypointList_t2584574554 * value)
	{
		___waypointList_2 = value;
		Il2CppCodeGenWriteBarrier((&___waypointList_2), value);
	}

	inline static int32_t get_offset_of_smoothRoute_3() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___smoothRoute_3)); }
	inline bool get_smoothRoute_3() const { return ___smoothRoute_3; }
	inline bool* get_address_of_smoothRoute_3() { return &___smoothRoute_3; }
	inline void set_smoothRoute_3(bool value)
	{
		___smoothRoute_3 = value;
	}

	inline static int32_t get_offset_of_numPoints_4() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___numPoints_4)); }
	inline int32_t get_numPoints_4() const { return ___numPoints_4; }
	inline int32_t* get_address_of_numPoints_4() { return &___numPoints_4; }
	inline void set_numPoints_4(int32_t value)
	{
		___numPoints_4 = value;
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___points_5)); }
	inline Vector3U5BU5D_t1718750761* get_points_5() const { return ___points_5; }
	inline Vector3U5BU5D_t1718750761** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Vector3U5BU5D_t1718750761* value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier((&___points_5), value);
	}

	inline static int32_t get_offset_of_distances_6() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___distances_6)); }
	inline SingleU5BU5D_t1444911251* get_distances_6() const { return ___distances_6; }
	inline SingleU5BU5D_t1444911251** get_address_of_distances_6() { return &___distances_6; }
	inline void set_distances_6(SingleU5BU5D_t1444911251* value)
	{
		___distances_6 = value;
		Il2CppCodeGenWriteBarrier((&___distances_6), value);
	}

	inline static int32_t get_offset_of_editorVisualisationSubsteps_7() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___editorVisualisationSubsteps_7)); }
	inline float get_editorVisualisationSubsteps_7() const { return ___editorVisualisationSubsteps_7; }
	inline float* get_address_of_editorVisualisationSubsteps_7() { return &___editorVisualisationSubsteps_7; }
	inline void set_editorVisualisationSubsteps_7(float value)
	{
		___editorVisualisationSubsteps_7 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___U3CLengthU3Ek__BackingField_8)); }
	inline float get_U3CLengthU3Ek__BackingField_8() const { return ___U3CLengthU3Ek__BackingField_8; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_8() { return &___U3CLengthU3Ek__BackingField_8; }
	inline void set_U3CLengthU3Ek__BackingField_8(float value)
	{
		___U3CLengthU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_p0n_9() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p0n_9)); }
	inline int32_t get_p0n_9() const { return ___p0n_9; }
	inline int32_t* get_address_of_p0n_9() { return &___p0n_9; }
	inline void set_p0n_9(int32_t value)
	{
		___p0n_9 = value;
	}

	inline static int32_t get_offset_of_p1n_10() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p1n_10)); }
	inline int32_t get_p1n_10() const { return ___p1n_10; }
	inline int32_t* get_address_of_p1n_10() { return &___p1n_10; }
	inline void set_p1n_10(int32_t value)
	{
		___p1n_10 = value;
	}

	inline static int32_t get_offset_of_p2n_11() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p2n_11)); }
	inline int32_t get_p2n_11() const { return ___p2n_11; }
	inline int32_t* get_address_of_p2n_11() { return &___p2n_11; }
	inline void set_p2n_11(int32_t value)
	{
		___p2n_11 = value;
	}

	inline static int32_t get_offset_of_p3n_12() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p3n_12)); }
	inline int32_t get_p3n_12() const { return ___p3n_12; }
	inline int32_t* get_address_of_p3n_12() { return &___p3n_12; }
	inline void set_p3n_12(int32_t value)
	{
		___p3n_12 = value;
	}

	inline static int32_t get_offset_of_i_13() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___i_13)); }
	inline float get_i_13() const { return ___i_13; }
	inline float* get_address_of_i_13() { return &___i_13; }
	inline void set_i_13(float value)
	{
		___i_13 = value;
	}

	inline static int32_t get_offset_of_P0_14() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P0_14)); }
	inline Vector3_t3722313464  get_P0_14() const { return ___P0_14; }
	inline Vector3_t3722313464 * get_address_of_P0_14() { return &___P0_14; }
	inline void set_P0_14(Vector3_t3722313464  value)
	{
		___P0_14 = value;
	}

	inline static int32_t get_offset_of_P1_15() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P1_15)); }
	inline Vector3_t3722313464  get_P1_15() const { return ___P1_15; }
	inline Vector3_t3722313464 * get_address_of_P1_15() { return &___P1_15; }
	inline void set_P1_15(Vector3_t3722313464  value)
	{
		___P1_15 = value;
	}

	inline static int32_t get_offset_of_P2_16() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P2_16)); }
	inline Vector3_t3722313464  get_P2_16() const { return ___P2_16; }
	inline Vector3_t3722313464 * get_address_of_P2_16() { return &___P2_16; }
	inline void set_P2_16(Vector3_t3722313464  value)
	{
		___P2_16 = value;
	}

	inline static int32_t get_offset_of_P3_17() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P3_17)); }
	inline Vector3_t3722313464  get_P3_17() const { return ___P3_17; }
	inline Vector3_t3722313464 * get_address_of_P3_17() { return &___P3_17; }
	inline void set_P3_17(Vector3_t3722313464  value)
	{
		___P3_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTCIRCUIT_T445075330_H
#ifndef SIMPLEMOUSEROTATOR_T2364742953_H
#define SIMPLEMOUSEROTATOR_T2364742953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SimpleMouseRotator
struct  SimpleMouseRotator_t2364742953  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.Utility.SimpleMouseRotator::rotationRange
	Vector2_t2156229523  ___rotationRange_2;
	// System.Single UnityStandardAssets.Utility.SimpleMouseRotator::rotationSpeed
	float ___rotationSpeed_3;
	// System.Single UnityStandardAssets.Utility.SimpleMouseRotator::dampingTime
	float ___dampingTime_4;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::autoZeroVerticalOnMobile
	bool ___autoZeroVerticalOnMobile_5;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::autoZeroHorizontalOnMobile
	bool ___autoZeroHorizontalOnMobile_6;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::relative
	bool ___relative_7;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_TargetAngles
	Vector3_t3722313464  ___m_TargetAngles_8;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_FollowAngles
	Vector3_t3722313464  ___m_FollowAngles_9;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_FollowVelocity
	Vector3_t3722313464  ___m_FollowVelocity_10;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.SimpleMouseRotator::m_OriginalRotation
	Quaternion_t2301928331  ___m_OriginalRotation_11;

public:
	inline static int32_t get_offset_of_rotationRange_2() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___rotationRange_2)); }
	inline Vector2_t2156229523  get_rotationRange_2() const { return ___rotationRange_2; }
	inline Vector2_t2156229523 * get_address_of_rotationRange_2() { return &___rotationRange_2; }
	inline void set_rotationRange_2(Vector2_t2156229523  value)
	{
		___rotationRange_2 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_dampingTime_4() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___dampingTime_4)); }
	inline float get_dampingTime_4() const { return ___dampingTime_4; }
	inline float* get_address_of_dampingTime_4() { return &___dampingTime_4; }
	inline void set_dampingTime_4(float value)
	{
		___dampingTime_4 = value;
	}

	inline static int32_t get_offset_of_autoZeroVerticalOnMobile_5() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___autoZeroVerticalOnMobile_5)); }
	inline bool get_autoZeroVerticalOnMobile_5() const { return ___autoZeroVerticalOnMobile_5; }
	inline bool* get_address_of_autoZeroVerticalOnMobile_5() { return &___autoZeroVerticalOnMobile_5; }
	inline void set_autoZeroVerticalOnMobile_5(bool value)
	{
		___autoZeroVerticalOnMobile_5 = value;
	}

	inline static int32_t get_offset_of_autoZeroHorizontalOnMobile_6() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___autoZeroHorizontalOnMobile_6)); }
	inline bool get_autoZeroHorizontalOnMobile_6() const { return ___autoZeroHorizontalOnMobile_6; }
	inline bool* get_address_of_autoZeroHorizontalOnMobile_6() { return &___autoZeroHorizontalOnMobile_6; }
	inline void set_autoZeroHorizontalOnMobile_6(bool value)
	{
		___autoZeroHorizontalOnMobile_6 = value;
	}

	inline static int32_t get_offset_of_relative_7() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___relative_7)); }
	inline bool get_relative_7() const { return ___relative_7; }
	inline bool* get_address_of_relative_7() { return &___relative_7; }
	inline void set_relative_7(bool value)
	{
		___relative_7 = value;
	}

	inline static int32_t get_offset_of_m_TargetAngles_8() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___m_TargetAngles_8)); }
	inline Vector3_t3722313464  get_m_TargetAngles_8() const { return ___m_TargetAngles_8; }
	inline Vector3_t3722313464 * get_address_of_m_TargetAngles_8() { return &___m_TargetAngles_8; }
	inline void set_m_TargetAngles_8(Vector3_t3722313464  value)
	{
		___m_TargetAngles_8 = value;
	}

	inline static int32_t get_offset_of_m_FollowAngles_9() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___m_FollowAngles_9)); }
	inline Vector3_t3722313464  get_m_FollowAngles_9() const { return ___m_FollowAngles_9; }
	inline Vector3_t3722313464 * get_address_of_m_FollowAngles_9() { return &___m_FollowAngles_9; }
	inline void set_m_FollowAngles_9(Vector3_t3722313464  value)
	{
		___m_FollowAngles_9 = value;
	}

	inline static int32_t get_offset_of_m_FollowVelocity_10() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___m_FollowVelocity_10)); }
	inline Vector3_t3722313464  get_m_FollowVelocity_10() const { return ___m_FollowVelocity_10; }
	inline Vector3_t3722313464 * get_address_of_m_FollowVelocity_10() { return &___m_FollowVelocity_10; }
	inline void set_m_FollowVelocity_10(Vector3_t3722313464  value)
	{
		___m_FollowVelocity_10 = value;
	}

	inline static int32_t get_offset_of_m_OriginalRotation_11() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___m_OriginalRotation_11)); }
	inline Quaternion_t2301928331  get_m_OriginalRotation_11() const { return ___m_OriginalRotation_11; }
	inline Quaternion_t2301928331 * get_address_of_m_OriginalRotation_11() { return &___m_OriginalRotation_11; }
	inline void set_m_OriginalRotation_11(Quaternion_t2301928331  value)
	{
		___m_OriginalRotation_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEMOUSEROTATOR_T2364742953_H
#ifndef PLATFORMSPECIFICCONTENT_T1404549723_H
#define PLATFORMSPECIFICCONTENT_T1404549723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.PlatformSpecificContent
struct  PlatformSpecificContent_t1404549723  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup UnityStandardAssets.Utility.PlatformSpecificContent::m_BuildTargetGroup
	int32_t ___m_BuildTargetGroup_2;
	// UnityEngine.GameObject[] UnityStandardAssets.Utility.PlatformSpecificContent::m_Content
	GameObjectU5BU5D_t3328599146* ___m_Content_3;
	// UnityEngine.MonoBehaviour[] UnityStandardAssets.Utility.PlatformSpecificContent::m_MonoBehaviours
	MonoBehaviourU5BU5D_t2007329276* ___m_MonoBehaviours_4;
	// System.Boolean UnityStandardAssets.Utility.PlatformSpecificContent::m_ChildrenOfThisObject
	bool ___m_ChildrenOfThisObject_5;

public:
	inline static int32_t get_offset_of_m_BuildTargetGroup_2() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1404549723, ___m_BuildTargetGroup_2)); }
	inline int32_t get_m_BuildTargetGroup_2() const { return ___m_BuildTargetGroup_2; }
	inline int32_t* get_address_of_m_BuildTargetGroup_2() { return &___m_BuildTargetGroup_2; }
	inline void set_m_BuildTargetGroup_2(int32_t value)
	{
		___m_BuildTargetGroup_2 = value;
	}

	inline static int32_t get_offset_of_m_Content_3() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1404549723, ___m_Content_3)); }
	inline GameObjectU5BU5D_t3328599146* get_m_Content_3() const { return ___m_Content_3; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_m_Content_3() { return &___m_Content_3; }
	inline void set_m_Content_3(GameObjectU5BU5D_t3328599146* value)
	{
		___m_Content_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_3), value);
	}

	inline static int32_t get_offset_of_m_MonoBehaviours_4() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1404549723, ___m_MonoBehaviours_4)); }
	inline MonoBehaviourU5BU5D_t2007329276* get_m_MonoBehaviours_4() const { return ___m_MonoBehaviours_4; }
	inline MonoBehaviourU5BU5D_t2007329276** get_address_of_m_MonoBehaviours_4() { return &___m_MonoBehaviours_4; }
	inline void set_m_MonoBehaviours_4(MonoBehaviourU5BU5D_t2007329276* value)
	{
		___m_MonoBehaviours_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MonoBehaviours_4), value);
	}

	inline static int32_t get_offset_of_m_ChildrenOfThisObject_5() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1404549723, ___m_ChildrenOfThisObject_5)); }
	inline bool get_m_ChildrenOfThisObject_5() const { return ___m_ChildrenOfThisObject_5; }
	inline bool* get_address_of_m_ChildrenOfThisObject_5() { return &___m_ChildrenOfThisObject_5; }
	inline void set_m_ChildrenOfThisObject_5(bool value)
	{
		___m_ChildrenOfThisObject_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMSPECIFICCONTENT_T1404549723_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (PlatformSpecificContent_t1404549723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2300[4] = 
{
	PlatformSpecificContent_t1404549723::get_offset_of_m_BuildTargetGroup_2(),
	PlatformSpecificContent_t1404549723::get_offset_of_m_Content_3(),
	PlatformSpecificContent_t1404549723::get_offset_of_m_MonoBehaviours_4(),
	PlatformSpecificContent_t1404549723::get_offset_of_m_ChildrenOfThisObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (BuildTargetGroup_t72322187)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2301[3] = 
{
	BuildTargetGroup_t72322187::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (SimpleActivatorMenu_t1387811551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2302[3] = 
{
	SimpleActivatorMenu_t1387811551::get_offset_of_camSwitchButton_2(),
	SimpleActivatorMenu_t1387811551::get_offset_of_objects_3(),
	SimpleActivatorMenu_t1387811551::get_offset_of_m_CurrentActiveObject_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (SimpleMouseRotator_t2364742953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2303[10] = 
{
	SimpleMouseRotator_t2364742953::get_offset_of_rotationRange_2(),
	SimpleMouseRotator_t2364742953::get_offset_of_rotationSpeed_3(),
	SimpleMouseRotator_t2364742953::get_offset_of_dampingTime_4(),
	SimpleMouseRotator_t2364742953::get_offset_of_autoZeroVerticalOnMobile_5(),
	SimpleMouseRotator_t2364742953::get_offset_of_autoZeroHorizontalOnMobile_6(),
	SimpleMouseRotator_t2364742953::get_offset_of_relative_7(),
	SimpleMouseRotator_t2364742953::get_offset_of_m_TargetAngles_8(),
	SimpleMouseRotator_t2364742953::get_offset_of_m_FollowAngles_9(),
	SimpleMouseRotator_t2364742953::get_offset_of_m_FollowVelocity_10(),
	SimpleMouseRotator_t2364742953::get_offset_of_m_OriginalRotation_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (SmoothFollow_t4204731361), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2304[5] = 
{
	SmoothFollow_t4204731361::get_offset_of_target_2(),
	SmoothFollow_t4204731361::get_offset_of_distance_3(),
	SmoothFollow_t4204731361::get_offset_of_height_4(),
	SmoothFollow_t4204731361::get_offset_of_rotationDamping_5(),
	SmoothFollow_t4204731361::get_offset_of_heightDamping_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (TimedObjectActivator_t1846709985), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2305[1] = 
{
	TimedObjectActivator_t1846709985::get_offset_of_entries_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (Action_t837364808)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2306[6] = 
{
	Action_t837364808::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (Entry_t2725803170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2307[3] = 
{
	Entry_t2725803170::get_offset_of_target_0(),
	Entry_t2725803170::get_offset_of_action_1(),
	Entry_t2725803170::get_offset_of_delay_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (Entries_t3168066469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2308[1] = 
{
	Entries_t3168066469::get_offset_of_entries_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (U3CActivateU3Ec__Iterator0_t2664723090), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2309[4] = 
{
	U3CActivateU3Ec__Iterator0_t2664723090::get_offset_of_entry_0(),
	U3CActivateU3Ec__Iterator0_t2664723090::get_offset_of_U24current_1(),
	U3CActivateU3Ec__Iterator0_t2664723090::get_offset_of_U24disposing_2(),
	U3CActivateU3Ec__Iterator0_t2664723090::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (U3CDeactivateU3Ec__Iterator1_t730025274), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2310[4] = 
{
	U3CDeactivateU3Ec__Iterator1_t730025274::get_offset_of_entry_0(),
	U3CDeactivateU3Ec__Iterator1_t730025274::get_offset_of_U24current_1(),
	U3CDeactivateU3Ec__Iterator1_t730025274::get_offset_of_U24disposing_2(),
	U3CDeactivateU3Ec__Iterator1_t730025274::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (U3CReloadLevelU3Ec__Iterator2_t2784493974), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2311[4] = 
{
	U3CReloadLevelU3Ec__Iterator2_t2784493974::get_offset_of_entry_0(),
	U3CReloadLevelU3Ec__Iterator2_t2784493974::get_offset_of_U24current_1(),
	U3CReloadLevelU3Ec__Iterator2_t2784493974::get_offset_of_U24disposing_2(),
	U3CReloadLevelU3Ec__Iterator2_t2784493974::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (TimedObjectDestructor_t3438860414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2312[2] = 
{
	TimedObjectDestructor_t3438860414::get_offset_of_m_TimeOut_2(),
	TimedObjectDestructor_t3438860414::get_offset_of_m_DetachChildren_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (WaypointCircuit_t445075330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2313[16] = 
{
	WaypointCircuit_t445075330::get_offset_of_waypointList_2(),
	WaypointCircuit_t445075330::get_offset_of_smoothRoute_3(),
	WaypointCircuit_t445075330::get_offset_of_numPoints_4(),
	WaypointCircuit_t445075330::get_offset_of_points_5(),
	WaypointCircuit_t445075330::get_offset_of_distances_6(),
	WaypointCircuit_t445075330::get_offset_of_editorVisualisationSubsteps_7(),
	WaypointCircuit_t445075330::get_offset_of_U3CLengthU3Ek__BackingField_8(),
	WaypointCircuit_t445075330::get_offset_of_p0n_9(),
	WaypointCircuit_t445075330::get_offset_of_p1n_10(),
	WaypointCircuit_t445075330::get_offset_of_p2n_11(),
	WaypointCircuit_t445075330::get_offset_of_p3n_12(),
	WaypointCircuit_t445075330::get_offset_of_i_13(),
	WaypointCircuit_t445075330::get_offset_of_P0_14(),
	WaypointCircuit_t445075330::get_offset_of_P1_15(),
	WaypointCircuit_t445075330::get_offset_of_P2_16(),
	WaypointCircuit_t445075330::get_offset_of_P3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (WaypointList_t2584574554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2314[2] = 
{
	WaypointList_t2584574554::get_offset_of_circuit_0(),
	WaypointList_t2584574554::get_offset_of_items_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (RoutePoint_t3880028948)+ sizeof (RuntimeObject), sizeof(RoutePoint_t3880028948 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2315[2] = 
{
	RoutePoint_t3880028948::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RoutePoint_t3880028948::get_offset_of_direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (WaypointProgressTracker_t1841386251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2316[15] = 
{
	WaypointProgressTracker_t1841386251::get_offset_of_circuit_2(),
	WaypointProgressTracker_t1841386251::get_offset_of_lookAheadForTargetOffset_3(),
	WaypointProgressTracker_t1841386251::get_offset_of_lookAheadForTargetFactor_4(),
	WaypointProgressTracker_t1841386251::get_offset_of_lookAheadForSpeedOffset_5(),
	WaypointProgressTracker_t1841386251::get_offset_of_lookAheadForSpeedFactor_6(),
	WaypointProgressTracker_t1841386251::get_offset_of_progressStyle_7(),
	WaypointProgressTracker_t1841386251::get_offset_of_pointToPointThreshold_8(),
	WaypointProgressTracker_t1841386251::get_offset_of_U3CtargetPointU3Ek__BackingField_9(),
	WaypointProgressTracker_t1841386251::get_offset_of_U3CspeedPointU3Ek__BackingField_10(),
	WaypointProgressTracker_t1841386251::get_offset_of_U3CprogressPointU3Ek__BackingField_11(),
	WaypointProgressTracker_t1841386251::get_offset_of_target_12(),
	WaypointProgressTracker_t1841386251::get_offset_of_progressDistance_13(),
	WaypointProgressTracker_t1841386251::get_offset_of_progressNum_14(),
	WaypointProgressTracker_t1841386251::get_offset_of_lastPosition_15(),
	WaypointProgressTracker_t1841386251::get_offset_of_speed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (ProgressStyle_t3254572979)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2317[3] = 
{
	ProgressStyle_t3254572979::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
