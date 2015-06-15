/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-z57
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/msp430/ClockFreqs.h>
#include <ti/sysbios/family/msp430/Hwi.h>
#include <ti/sysbios/family/msp430/IntrinsicsSupport.h>
#include <ti/sysbios/family/msp430/Timer.h>
#include <ti/sysbios/family/msp430/TimestampProvider.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Swi.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/GateNull.h>
#include <xdc/runtime/HeapMin.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerBuf.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Object__ */
typedef struct xdc_runtime_GateNull_Object__ {
    const xdc_runtime_GateNull_Fxns__* __fxns;
} xdc_runtime_GateNull_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_GateNull_Object__ obj;
} xdc_runtime_GateNull_Object2__;

/* Object */
typedef xdc_runtime_GateNull_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Hwi INTERNALS ========
 */

/* Object__ */
typedef struct ti_sysbios_family_msp430_Hwi_Object__ {
    const ti_sysbios_family_msp430_Hwi_Fxns__* __fxns;
    xdc_Int intNum;
    ti_sysbios_family_msp430_Hwi_Irp irp;
    __TA_ti_sysbios_family_msp430_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_msp430_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_msp430_Hwi_Object__ obj;
} ti_sysbios_family_msp430_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_msp430_Hwi___VERS
    #define ti_sysbios_family_msp430_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_msp430_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Timer INTERNALS ========
 */

/* Object__ */
typedef struct ti_sysbios_family_msp430_Timer_Object__ {
    const ti_sysbios_family_msp430_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    xdc_UInt controlRegInit;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_msp430_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz frequency;
    ti_sysbios_family_msp430_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_Bool synchronous;
    xdc_UInt inputDivider;
    xdc_UInt inputDividerExp;
} ti_sysbios_family_msp430_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_msp430_Timer_Object__ obj;
} ti_sysbios_family_msp430_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_msp430_Timer___VERS
    #define ti_sysbios_family_msp430_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_msp430_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.msp430.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* <-- ti_sysbios_family_msp430_Hwi_Object */

/* Object */
typedef ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* <-- ti_sysbios_family_msp430_Timer_Object */

/* Object */
typedef ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.GateNull INTERNALS ========
 */

/* <-- xdc_runtime_GateNull_Object */

/* __ParamsPtr */
#ifdef xdc_runtime_GateNull___VERS
    #define xdc_runtime_GateNull___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_GateNull___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.HeapMin INTERNALS ========
 */

/* Object__ */
typedef struct xdc_runtime_HeapMin_Object__ {
    const xdc_runtime_HeapMin_Fxns__* __fxns;
    __TA_xdc_runtime_HeapMin_Instance_State__buf buf;
    xdc_runtime_Memory_Size remainSize;
    xdc_runtime_Memory_Size startSize;
} xdc_runtime_HeapMin_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_HeapMin_Object__ obj;
} xdc_runtime_HeapMin_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_HeapMin___VERS
    #define xdc_runtime_HeapMin___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_HeapMin___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf INTERNALS ========
 */

/* Object__ */
typedef struct xdc_runtime_LoggerBuf_Object__ {
    const xdc_runtime_LoggerBuf_Fxns__* __fxns;
    xdc_runtime_IHeap_Handle bufHeap;
    __TA_xdc_runtime_LoggerBuf_Instance_State__entryArr entryArr;
    xdc_runtime_LoggerBuf_Entry* curEntry;
    xdc_runtime_LoggerBuf_Entry* endEntry;
    xdc_runtime_LoggerBuf_Entry* readEntry;
    xdc_Bits32 serial;
    xdc_Int16 numEntries;
    xdc_Int8 advance;
    xdc_Bool enabled;
    xdc_Bool flush;
} xdc_runtime_LoggerBuf_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Object__ obj;
} xdc_runtime_LoggerBuf_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_LoggerBuf___VERS
    #define xdc_runtime_LoggerBuf___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_LoggerBuf___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INTERNALS ========
 */

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_LoggerBuf_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Module_GateProxy_Object__ obj;
} xdc_runtime_LoggerBuf_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy___VERS
    #define xdc_runtime_LoggerBuf_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_LoggerBuf_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* <-- xdc_runtime_HeapMin_Object */

/* Object */
typedef xdc_runtime_HeapMin_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.GateNull INHERITS ========
 */



/*
 * ======== xdc.runtime.HeapMin INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.LoggerBuf INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_msp430_IntrinsicsSupport_Fxns__ ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* base__ */
    &ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_msp430_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8017, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8026, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.GateNull VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_GateNull_Fxns__ xdc_runtime_GateNull_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &xdc_runtime_GateNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_GateNull_query__E,
    xdc_runtime_GateNull_enter__E,
    xdc_runtime_GateNull_leave__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8008, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.HeapMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_HeapMin_Fxns__ xdc_runtime_HeapMin_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &xdc_runtime_HeapMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_HeapMin_alloc__E,
    xdc_runtime_HeapMin_free__E,
    xdc_runtime_HeapMin_isBlocking__E,
    xdc_runtime_HeapMin_getStats__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerBuf VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_LoggerBuf_Fxns__ xdc_runtime_LoggerBuf_Module__FXNS__C = {
    (void*)&xdc_runtime_IFilterLogger_Interface__BASE__C, /* base__ */
    &xdc_runtime_LoggerBuf_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerBuf_enable__E,
    xdc_runtime_LoggerBuf_disable__E,
    xdc_runtime_LoggerBuf_write0__E,
    xdc_runtime_LoggerBuf_write1__E,
    xdc_runtime_LoggerBuf_write2__E,
    xdc_runtime_LoggerBuf_write4__E,
    xdc_runtime_LoggerBuf_write8__E,
    xdc_runtime_LoggerBuf_setFilterLevel__E,
    xdc_runtime_LoggerBuf_getFilterLevel__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8011, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_family_msp430_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_msp430_Hwi_Module_State__ {
    xdc_Char* taskSP;
    xdc_Char* isrStack;
} ti_sysbios_family_msp430_Hwi_Module_State__;

/* Module__state__V */
ti_sysbios_family_msp430_Hwi_Module_State__ ti_sysbios_family_msp430_Hwi_Module__state__V;


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Timer DECLARATIONS ========
 */

/* --> myTickFxn */
extern xdc_Void myTickFxn(xdc_UArg);

/* Object__table__V */
ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_family_msp430_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_msp430_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_msp430_Timer_Module_State__device device;
    __TA_ti_sysbios_family_msp430_Timer_Module_State__handles handles;
} ti_sysbios_family_msp430_Timer_Module_State__;

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__device ti_sysbios_family_msp430_Timer_Module_State_0_device__A[4];

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__handles ti_sysbios_family_msp430_Timer_Module_State_0_handles__A[4];

/* Module__state__V */
ti_sysbios_family_msp430_Timer_Module_State__ ti_sysbios_family_msp430_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.msp430.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_msp430_TimestampProvider_Module_State__ {
    ti_sysbios_family_msp430_Timer_Handle timer;
    volatile xdc_UInt32 rollovers;
} ti_sysbios_family_msp430_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_msp430_TimestampProvider_Module_State__ ti_sysbios_family_msp430_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> myIdleFxn */
extern xdc_Void myIdleFxn(xdc_Void);

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.GateNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.HeapMin DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=2
#endif
/* --> xdc_runtime_HeapMin_Instance_State_0_buf__A */
__T1_xdc_runtime_HeapMin_Instance_State__buf xdc_runtime_HeapMin_Instance_State_0_buf__A[32];
#ifdef __ti__align
    #pragma DATA_ALIGN(xdc_runtime_HeapMin_Instance_State_0_buf__A, 2);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_xdc_runtime_HeapMin_Instance_State__buf xdc_runtime_HeapMin_Instance_State_0_buf__A[32] __attribute__ ((aligned(2)));
#endif
#endif

/* Object__table__V */
xdc_runtime_HeapMin_Object__ xdc_runtime_HeapMin_Object__table__V[1];


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf DECLARATIONS ========
 */

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_LoggerBuf_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} xdc_runtime_LoggerBuf_Module_State__;

/* Module__state__V */
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[1];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[2];

/* --> xdc_runtime_LoggerBuf_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerBuf_Module_startup__E(xdc_Int);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_msp430_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_msp430_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_msp430_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_msp430_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_msp430_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_msp430_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[80];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[3818];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[39];


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = F:/Documents/Hedera/Hedera_SLS/EmbeddedSoftware/idle_MSP430F5529/Debug/configPkg/package/cfg/idle_pe430X");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 430X");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.msp430");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.msp430.elf.MSP430X");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_family_msp430_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_family_msp430_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_family_msp430_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[10];
    xdc_runtime_Startup_startModsFxn__C(state, 10);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif

extern Void ti_catalog_msp430_init_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_catalog_msp430_init_Boot_init();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, CString *pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    CString fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[5];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.msp430.init.Boot TEMPLATE ========
 */

    extern Void ti_catalog_msp430_init_Boot_disableWatchdog(UInt address);
    extern Void ti_catalog_msp430_init_Boot_configureDCO(Void);
    extern Void ti_catalog_msp430_init_Boot_configureDCO_CS_A(Void);
    extern Void ti_catalog_msp430_init_Boot_configureDCO_CS_A_useLFXT(Void);

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_msp430_init_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_msp430_init_Boot_init ========
 */
#if defined(__ICC430__)
    #pragma location="CSTART"
#endif
Void ti_catalog_msp430_init_Boot_init(Void)
{
    ti_catalog_msp430_init_Boot_disableWatchdog(348);


    ti_catalog_msp430_init_Boot_configureDCO();


}



/*
 * ======== ti.sysbios.family.msp430.Hwi TEMPLATE ========
 */



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Idle_loop(0,0);
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
#endif
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */





/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */


/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__ICC430__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#if !defined(__ICC430__)
#include <stdlib.h>
#endif

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x7d0000,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    0,  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x7d0000,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 0;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 0;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 0;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x0;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* useSK__C */
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__gateObj ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__id ti_sysbios_family_msp430_ClockFreqs_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__count ti_sysbios_family_msp430_ClockFreqs_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__heap ti_sysbios_family_msp430_ClockFreqs_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__sizeof ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__table ti_sysbios_family_msp430_ClockFreqs_Object__table__C = 0;

/* ACLK__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_ACLK ti_sysbios_family_msp430_ClockFreqs_ACLK__C = (xdc_UInt32)0x8000;

/* SMCLK__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_SMCLK ti_sysbios_family_msp430_ClockFreqs_SMCLK__C = (xdc_UInt32)0x7d0000;


/*
 * ======== ti.sysbios.family.msp430.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_msp430_Hwi_Params ti_sysbios_family_msp430_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_msp430_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_msp430_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_ALL,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Object__table__V */
ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_family_msp430_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        (xdc_Int)0x35,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        (xdc_Int)0x31,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* Module__state__V */
ti_sysbios_family_msp430_Hwi_Module_State__ ti_sysbios_family_msp430_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsEnabled ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsIncluded ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsMask ti_sysbios_family_msp430_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__gateObj ti_sysbios_family_msp430_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__gatePrms ti_sysbios_family_msp430_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__id ti_sysbios_family_msp430_Hwi_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerDefined ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerObj ti_sysbios_family_msp430_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn0 ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn1 ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn2 ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn4 ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn8 ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__count ti_sysbios_family_msp430_Hwi_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__heap ti_sysbios_family_msp430_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__sizeof ti_sysbios_family_msp430_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_msp430_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__table ti_sysbios_family_msp430_Hwi_Object__table__C = ti_sysbios_family_msp430_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C = 0;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C = 0;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0x40;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_LM_begin ti_sysbios_family_msp430_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)3274) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_LD_end ti_sysbios_family_msp430_Hwi_LD_end__C = (((xdc_runtime_Log_Event)3344) << 16 | 512);

/* A_unsupportedMaskingOption__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_E_alreadyDefined ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)2530) << 16 | 0);

/* E_notImplemented__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_E_notImplemented ti_sysbios_family_msp430_Hwi_E_notImplemented__C = (((xdc_runtime_Error_Id)2578) << 16 | 0);

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_hooks ti_sysbios_family_msp430_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__id ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__count ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__table ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.msp430.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_msp430_Timer_Params ti_sysbios_family_msp430_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_msp430_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_msp430_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_msp430_Hwi_Params*)0),  /* hwiParams */
    ti_sysbios_family_msp430_Timer_Source_ACLK,  /* clockSource */
    0,  /* synchronous */
    ti_sysbios_family_msp430_Timer_ID_1,  /* inputDivider */
    ti_sysbios_family_msp430_Timer_IDEX_1,  /* inputDividerExp */
    0,  /* nesting */
    (xdc_UInt)0x0,  /* prevThreshold */
    (xdc_UInt)0x100,  /* controlRegInit */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Object__table__V */
ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_family_msp430_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        (xdc_UInt)0x100,  /* controlRegInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x4000,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x35,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)myTickFxn)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x8000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_msp430_Hwi_Handle)&ti_sysbios_family_msp430_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0x0,  /* prevThreshold */
        0,  /* synchronous */
        (xdc_UInt)0x0,  /* inputDivider */
        (xdc_UInt)0x0,  /* inputDividerExp */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        (xdc_UInt)0x100,  /* controlRegInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x31,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_msp430_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x8000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_msp430_Hwi_Handle)&ti_sysbios_family_msp430_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0x0,  /* prevThreshold */
        0,  /* synchronous */
        (xdc_UInt)0x0,  /* inputDivider */
        (xdc_UInt)0x0,  /* inputDividerExp */
    },
};

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__device ti_sysbios_family_msp430_Timer_Module_State_0_device__A[4] = {
    {
        (xdc_UInt)0x35,  /* intNum */
        ((xdc_Ptr)(0x340)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x31,  /* intNum */
        ((xdc_Ptr)(0x380)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x2c,  /* intNum */
        ((xdc_Ptr)(0x400)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x3b,  /* intNum */
        ((xdc_Ptr)(0x3c0)),  /* baseAddr */
    },  /* [3] */
};

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__handles ti_sysbios_family_msp430_Timer_Module_State_0_handles__A[4] = {
    (ti_sysbios_family_msp430_Timer_Handle)&ti_sysbios_family_msp430_Timer_Object__table__V[0],  /* [0] */
    (ti_sysbios_family_msp430_Timer_Handle)&ti_sysbios_family_msp430_Timer_Object__table__V[1],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
};

/* Module__state__V */
ti_sysbios_family_msp430_Timer_Module_State__ ti_sysbios_family_msp430_Timer_Module__state__V = {
    (xdc_UInt)0xc,  /* availMask */
    ((void*)ti_sysbios_family_msp430_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_msp430_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsEnabled ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsIncluded ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsMask ti_sysbios_family_msp430_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__gateObj ti_sysbios_family_msp430_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__gatePrms ti_sysbios_family_msp430_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__id ti_sysbios_family_msp430_Timer_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerDefined ti_sysbios_family_msp430_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerObj ti_sysbios_family_msp430_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn0 ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn1 ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn2 ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn4 ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn8 ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__startupDoneFxn ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__count ti_sysbios_family_msp430_Timer_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__heap ti_sysbios_family_msp430_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__sizeof ti_sysbios_family_msp430_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_msp430_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__table ti_sysbios_family_msp430_Timer_Object__table__C = ti_sysbios_family_msp430_Timer_Object__table__V;

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_invalidTimer ti_sysbios_family_msp430_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)2625) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_notAvailable ti_sysbios_family_msp430_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)2661) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_cannotSupport ti_sysbios_family_msp430_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)2700) << 16 | 0);

/* E_runtimeCreate__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_runtimeCreate ti_sysbios_family_msp430_Timer_E_runtimeCreate__C = (((xdc_runtime_Error_Id)2758) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_anyMask ti_sysbios_family_msp430_Timer_anyMask__C = (xdc_UInt)0xf;

/* keepAwake__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_keepAwake ti_sysbios_family_msp430_Timer_keepAwake__C = 0;

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_startupNeeded ti_sysbios_family_msp430_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_numTimerDevices ti_sysbios_family_msp430_Timer_numTimerDevices__C = (xdc_Int)0x4;


/*
 * ======== ti.sysbios.family.msp430.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_msp430_TimestampProvider_Module_State__ ti_sysbios_family_msp430_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_msp430_Timer_Handle)&ti_sysbios_family_msp430_Timer_Object__table__V[1],  /* timer */
    (xdc_UInt32)0x0,  /* rollovers */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__diagsEnabled ti_sysbios_family_msp430_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__diagsIncluded ti_sysbios_family_msp430_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__gateObj ti_sysbios_family_msp430_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__id ti_sysbios_family_msp430_TimestampProvider_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerDefined ti_sysbios_family_msp430_TimestampProvider_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_msp430_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Object__count ti_sysbios_family_msp430_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Object__heap ti_sysbios_family_msp430_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Object__sizeof ti_sysbios_family_msp430_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Object__table ti_sysbios_family_msp430_TimestampProvider_Object__table__C = 0;

/* timerId__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_timerId ti_sysbios_family_msp430_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);

/* useClockTimer__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_useClockTimer ti_sysbios_family_msp430_TimestampProvider_useClockTimer__C = 0;

/* clockSource__C */
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_clockSource ti_sysbios_family_msp430_TimestampProvider_clockSource__C = ti_sysbios_family_msp430_TimestampProvider_Source_ACLK;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_ALL,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 0;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 0;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)2894) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = 0;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    0,  /* timer */
    0,  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt32)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)3362) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)3384) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)3402) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)453) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)534) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_NULL;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)myIdleFxn)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = 0;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)3434) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)3481) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)3499) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1212) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1269) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x1;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)0);

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)0);

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)2290) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)2312) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)2316) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)2350) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.GateNull INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_GateNull_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_GateNull_Params xdc_runtime_GateNull_Object__PARAMS__C = {
    sizeof (xdc_runtime_GateNull_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_GateNull_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__diagsEnabled xdc_runtime_GateNull_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__diagsIncluded xdc_runtime_GateNull_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__diagsMask xdc_runtime_GateNull_Module__diagsMask__C = ((CT__xdc_runtime_GateNull_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__gateObj xdc_runtime_GateNull_Module__gateObj__C = ((CT__xdc_runtime_GateNull_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__gatePrms xdc_runtime_GateNull_Module__gatePrms__C = ((CT__xdc_runtime_GateNull_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__id xdc_runtime_GateNull_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerDefined xdc_runtime_GateNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerObj xdc_runtime_GateNull_Module__loggerObj__C = ((CT__xdc_runtime_GateNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn0 xdc_runtime_GateNull_Module__loggerFxn0__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn1 xdc_runtime_GateNull_Module__loggerFxn1__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn2 xdc_runtime_GateNull_Module__loggerFxn2__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn4 xdc_runtime_GateNull_Module__loggerFxn4__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn8 xdc_runtime_GateNull_Module__loggerFxn8__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__startupDoneFxn xdc_runtime_GateNull_Module__startupDoneFxn__C = ((CT__xdc_runtime_GateNull_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_GateNull_Object__count xdc_runtime_GateNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_GateNull_Object__heap xdc_runtime_GateNull_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_GateNull_Object__sizeof xdc_runtime_GateNull_Object__sizeof__C = sizeof(xdc_runtime_GateNull_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_GateNull_Object__table xdc_runtime_GateNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.HeapMin INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_HeapMin_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_HeapMin_Params xdc_runtime_HeapMin_Object__PARAMS__C = {
    sizeof (xdc_runtime_HeapMin_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_HeapMin_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> xdc_runtime_HeapMin_Instance_State_0_buf__A */
__T1_xdc_runtime_HeapMin_Instance_State__buf xdc_runtime_HeapMin_Instance_State_0_buf__A[32];

/* Object__table__V */
xdc_runtime_HeapMin_Object__ xdc_runtime_HeapMin_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_HeapMin_Module__FXNS__C,
        ((void*)xdc_runtime_HeapMin_Instance_State_0_buf__A),  /* buf */
        ((xdc_UArg)(0x20)),  /* remainSize */
        ((xdc_UArg)(0x20)),  /* startSize */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__diagsEnabled xdc_runtime_HeapMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__diagsIncluded xdc_runtime_HeapMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__diagsMask xdc_runtime_HeapMin_Module__diagsMask__C = ((CT__xdc_runtime_HeapMin_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__gateObj xdc_runtime_HeapMin_Module__gateObj__C = ((CT__xdc_runtime_HeapMin_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__gatePrms xdc_runtime_HeapMin_Module__gatePrms__C = ((CT__xdc_runtime_HeapMin_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__id xdc_runtime_HeapMin_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__loggerDefined xdc_runtime_HeapMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__loggerObj xdc_runtime_HeapMin_Module__loggerObj__C = ((CT__xdc_runtime_HeapMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__loggerFxn0 xdc_runtime_HeapMin_Module__loggerFxn0__C = ((CT__xdc_runtime_HeapMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__loggerFxn1 xdc_runtime_HeapMin_Module__loggerFxn1__C = ((CT__xdc_runtime_HeapMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__loggerFxn2 xdc_runtime_HeapMin_Module__loggerFxn2__C = ((CT__xdc_runtime_HeapMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__loggerFxn4 xdc_runtime_HeapMin_Module__loggerFxn4__C = ((CT__xdc_runtime_HeapMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__loggerFxn8 xdc_runtime_HeapMin_Module__loggerFxn8__C = ((CT__xdc_runtime_HeapMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_HeapMin_Module__startupDoneFxn xdc_runtime_HeapMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_HeapMin_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_HeapMin_Object__count xdc_runtime_HeapMin_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_HeapMin_Object__heap xdc_runtime_HeapMin_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_HeapMin_Object__sizeof xdc_runtime_HeapMin_Object__sizeof__C = sizeof(xdc_runtime_HeapMin_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_HeapMin_Object__table xdc_runtime_HeapMin_Object__table__C = xdc_runtime_HeapMin_Object__table__V;

/* A_zeroSize__C */
__FAR__ const CT__xdc_runtime_HeapMin_A_zeroSize xdc_runtime_HeapMin_A_zeroSize__C = (((xdc_runtime_Assert_Id)50) << 16 | 16);

/* E_freeError__C */
__FAR__ const CT__xdc_runtime_HeapMin_E_freeError xdc_runtime_HeapMin_E_freeError__C = (((xdc_runtime_Error_Id)2397) << 16 | 0);

/* freeError__C */
__FAR__ const CT__xdc_runtime_HeapMin_freeError xdc_runtime_HeapMin_freeError__C = 1;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)3098) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)3122) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)3143) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)3162) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)3179) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)3193) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)3209) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)3216) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)3227) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)3237) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)3256) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerBuf INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_LoggerBuf_Params xdc_runtime_LoggerBuf_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerBuf_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerBuf_Object__PARAMS__C.__iprms, /* instance */
    (xdc_Int)0x40,  /* numEntries */
    xdc_runtime_LoggerBuf_BufType_CIRCULAR,  /* bufType */
    0,  /* exitFlush */
    0,  /* bufHeap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerBuf_Module__FXNS__C,
        0,  /* bufHeap */
        ((void*)xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A),  /* entryArr */
        ((xdc_runtime_LoggerBuf_Entry*)((void*)&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* curEntry */
        ((xdc_runtime_LoggerBuf_Entry*)((void*)&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[15])),  /* endEntry */
        ((xdc_runtime_LoggerBuf_Entry*)((void*)&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* readEntry */
        (xdc_Bits32)0x1,  /* serial */
        (xdc_Int16)0x10,  /* numEntries */
        (xdc_Int8)0x0,  /* advance */
        0,  /* enabled */
        0,  /* flush */
    },
};

/* Module__state__V */
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V = {
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C = ((CT__xdc_runtime_LoggerBuf_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C = ((CT__xdc_runtime_LoggerBuf_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C = ((CT__xdc_runtime_LoggerBuf_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__startupDoneFxn xdc_runtime_LoggerBuf_Module__startupDoneFxn__C = ((CT__xdc_runtime_LoggerBuf_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C = sizeof(xdc_runtime_LoggerBuf_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C = xdc_runtime_LoggerBuf_Object__table__V;

/* filterByLevel__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C = 0;

/* E_badLevel__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C = (((xdc_runtime_Error_Id)2358) << 16 | 0);

/* enableFlush__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C = 0;

/* statusLogger__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C = 0;

/* level1Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C = (xdc_Bits16)0xff87;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x4090;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x4090;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x2,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&xdc_runtime_HeapMin_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [0] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_msp430_TimestampProvider_startTimer__E)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_LoggerBuf_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_msp430_Hwi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_msp430_Timer_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_msp430_TimestampProvider_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [9] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10] = {
    1,  /* [0] */
    1,  /* [1] */
    1,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    1,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {1, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {2, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[80];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x50;

/* flushAtExit__C */
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x4;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[3818] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x75,  /* [402] */
    (xdc_Char)0x6e,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x75,  /* [405] */
    (xdc_Char)0x70,  /* [406] */
    (xdc_Char)0x70,  /* [407] */
    (xdc_Char)0x6f,  /* [408] */
    (xdc_Char)0x72,  /* [409] */
    (xdc_Char)0x74,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x64,  /* [412] */
    (xdc_Char)0x4d,  /* [413] */
    (xdc_Char)0x61,  /* [414] */
    (xdc_Char)0x73,  /* [415] */
    (xdc_Char)0x6b,  /* [416] */
    (xdc_Char)0x69,  /* [417] */
    (xdc_Char)0x6e,  /* [418] */
    (xdc_Char)0x67,  /* [419] */
    (xdc_Char)0x4f,  /* [420] */
    (xdc_Char)0x70,  /* [421] */
    (xdc_Char)0x74,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x6f,  /* [424] */
    (xdc_Char)0x6e,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x75,  /* [428] */
    (xdc_Char)0x6e,  /* [429] */
    (xdc_Char)0x73,  /* [430] */
    (xdc_Char)0x75,  /* [431] */
    (xdc_Char)0x70,  /* [432] */
    (xdc_Char)0x70,  /* [433] */
    (xdc_Char)0x6f,  /* [434] */
    (xdc_Char)0x72,  /* [435] */
    (xdc_Char)0x74,  /* [436] */
    (xdc_Char)0x65,  /* [437] */
    (xdc_Char)0x64,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x6d,  /* [440] */
    (xdc_Char)0x61,  /* [441] */
    (xdc_Char)0x73,  /* [442] */
    (xdc_Char)0x6b,  /* [443] */
    (xdc_Char)0x53,  /* [444] */
    (xdc_Char)0x65,  /* [445] */
    (xdc_Char)0x74,  /* [446] */
    (xdc_Char)0x74,  /* [447] */
    (xdc_Char)0x69,  /* [448] */
    (xdc_Char)0x6e,  /* [449] */
    (xdc_Char)0x67,  /* [450] */
    (xdc_Char)0x2e,  /* [451] */
    (xdc_Char)0x0,  /* [452] */
    (xdc_Char)0x41,  /* [453] */
    (xdc_Char)0x5f,  /* [454] */
    (xdc_Char)0x63,  /* [455] */
    (xdc_Char)0x6c,  /* [456] */
    (xdc_Char)0x6f,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x6b,  /* [459] */
    (xdc_Char)0x44,  /* [460] */
    (xdc_Char)0x69,  /* [461] */
    (xdc_Char)0x73,  /* [462] */
    (xdc_Char)0x61,  /* [463] */
    (xdc_Char)0x62,  /* [464] */
    (xdc_Char)0x6c,  /* [465] */
    (xdc_Char)0x65,  /* [466] */
    (xdc_Char)0x64,  /* [467] */
    (xdc_Char)0x3a,  /* [468] */
    (xdc_Char)0x20,  /* [469] */
    (xdc_Char)0x43,  /* [470] */
    (xdc_Char)0x61,  /* [471] */
    (xdc_Char)0x6e,  /* [472] */
    (xdc_Char)0x6e,  /* [473] */
    (xdc_Char)0x6f,  /* [474] */
    (xdc_Char)0x74,  /* [475] */
    (xdc_Char)0x20,  /* [476] */
    (xdc_Char)0x63,  /* [477] */
    (xdc_Char)0x72,  /* [478] */
    (xdc_Char)0x65,  /* [479] */
    (xdc_Char)0x61,  /* [480] */
    (xdc_Char)0x74,  /* [481] */
    (xdc_Char)0x65,  /* [482] */
    (xdc_Char)0x20,  /* [483] */
    (xdc_Char)0x61,  /* [484] */
    (xdc_Char)0x20,  /* [485] */
    (xdc_Char)0x63,  /* [486] */
    (xdc_Char)0x6c,  /* [487] */
    (xdc_Char)0x6f,  /* [488] */
    (xdc_Char)0x63,  /* [489] */
    (xdc_Char)0x6b,  /* [490] */
    (xdc_Char)0x20,  /* [491] */
    (xdc_Char)0x69,  /* [492] */
    (xdc_Char)0x6e,  /* [493] */
    (xdc_Char)0x73,  /* [494] */
    (xdc_Char)0x74,  /* [495] */
    (xdc_Char)0x61,  /* [496] */
    (xdc_Char)0x6e,  /* [497] */
    (xdc_Char)0x63,  /* [498] */
    (xdc_Char)0x65,  /* [499] */
    (xdc_Char)0x20,  /* [500] */
    (xdc_Char)0x77,  /* [501] */
    (xdc_Char)0x68,  /* [502] */
    (xdc_Char)0x65,  /* [503] */
    (xdc_Char)0x6e,  /* [504] */
    (xdc_Char)0x20,  /* [505] */
    (xdc_Char)0x42,  /* [506] */
    (xdc_Char)0x49,  /* [507] */
    (xdc_Char)0x4f,  /* [508] */
    (xdc_Char)0x53,  /* [509] */
    (xdc_Char)0x2e,  /* [510] */
    (xdc_Char)0x63,  /* [511] */
    (xdc_Char)0x6c,  /* [512] */
    (xdc_Char)0x6f,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x6b,  /* [515] */
    (xdc_Char)0x45,  /* [516] */
    (xdc_Char)0x6e,  /* [517] */
    (xdc_Char)0x61,  /* [518] */
    (xdc_Char)0x62,  /* [519] */
    (xdc_Char)0x6c,  /* [520] */
    (xdc_Char)0x65,  /* [521] */
    (xdc_Char)0x64,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x69,  /* [524] */
    (xdc_Char)0x73,  /* [525] */
    (xdc_Char)0x20,  /* [526] */
    (xdc_Char)0x66,  /* [527] */
    (xdc_Char)0x61,  /* [528] */
    (xdc_Char)0x6c,  /* [529] */
    (xdc_Char)0x73,  /* [530] */
    (xdc_Char)0x65,  /* [531] */
    (xdc_Char)0x2e,  /* [532] */
    (xdc_Char)0x0,  /* [533] */
    (xdc_Char)0x41,  /* [534] */
    (xdc_Char)0x5f,  /* [535] */
    (xdc_Char)0x62,  /* [536] */
    (xdc_Char)0x61,  /* [537] */
    (xdc_Char)0x64,  /* [538] */
    (xdc_Char)0x54,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x72,  /* [541] */
    (xdc_Char)0x65,  /* [542] */
    (xdc_Char)0x61,  /* [543] */
    (xdc_Char)0x64,  /* [544] */
    (xdc_Char)0x54,  /* [545] */
    (xdc_Char)0x79,  /* [546] */
    (xdc_Char)0x70,  /* [547] */
    (xdc_Char)0x65,  /* [548] */
    (xdc_Char)0x3a,  /* [549] */
    (xdc_Char)0x20,  /* [550] */
    (xdc_Char)0x43,  /* [551] */
    (xdc_Char)0x61,  /* [552] */
    (xdc_Char)0x6e,  /* [553] */
    (xdc_Char)0x6e,  /* [554] */
    (xdc_Char)0x6f,  /* [555] */
    (xdc_Char)0x74,  /* [556] */
    (xdc_Char)0x20,  /* [557] */
    (xdc_Char)0x63,  /* [558] */
    (xdc_Char)0x72,  /* [559] */
    (xdc_Char)0x65,  /* [560] */
    (xdc_Char)0x61,  /* [561] */
    (xdc_Char)0x74,  /* [562] */
    (xdc_Char)0x65,  /* [563] */
    (xdc_Char)0x2f,  /* [564] */
    (xdc_Char)0x64,  /* [565] */
    (xdc_Char)0x65,  /* [566] */
    (xdc_Char)0x6c,  /* [567] */
    (xdc_Char)0x65,  /* [568] */
    (xdc_Char)0x74,  /* [569] */
    (xdc_Char)0x65,  /* [570] */
    (xdc_Char)0x20,  /* [571] */
    (xdc_Char)0x61,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x43,  /* [574] */
    (xdc_Char)0x6c,  /* [575] */
    (xdc_Char)0x6f,  /* [576] */
    (xdc_Char)0x63,  /* [577] */
    (xdc_Char)0x6b,  /* [578] */
    (xdc_Char)0x20,  /* [579] */
    (xdc_Char)0x66,  /* [580] */
    (xdc_Char)0x72,  /* [581] */
    (xdc_Char)0x6f,  /* [582] */
    (xdc_Char)0x6d,  /* [583] */
    (xdc_Char)0x20,  /* [584] */
    (xdc_Char)0x48,  /* [585] */
    (xdc_Char)0x77,  /* [586] */
    (xdc_Char)0x69,  /* [587] */
    (xdc_Char)0x20,  /* [588] */
    (xdc_Char)0x6f,  /* [589] */
    (xdc_Char)0x72,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x53,  /* [592] */
    (xdc_Char)0x77,  /* [593] */
    (xdc_Char)0x69,  /* [594] */
    (xdc_Char)0x20,  /* [595] */
    (xdc_Char)0x74,  /* [596] */
    (xdc_Char)0x68,  /* [597] */
    (xdc_Char)0x72,  /* [598] */
    (xdc_Char)0x65,  /* [599] */
    (xdc_Char)0x61,  /* [600] */
    (xdc_Char)0x64,  /* [601] */
    (xdc_Char)0x2e,  /* [602] */
    (xdc_Char)0x0,  /* [603] */
    (xdc_Char)0x41,  /* [604] */
    (xdc_Char)0x5f,  /* [605] */
    (xdc_Char)0x6e,  /* [606] */
    (xdc_Char)0x75,  /* [607] */
    (xdc_Char)0x6c,  /* [608] */
    (xdc_Char)0x6c,  /* [609] */
    (xdc_Char)0x45,  /* [610] */
    (xdc_Char)0x76,  /* [611] */
    (xdc_Char)0x65,  /* [612] */
    (xdc_Char)0x6e,  /* [613] */
    (xdc_Char)0x74,  /* [614] */
    (xdc_Char)0x4d,  /* [615] */
    (xdc_Char)0x61,  /* [616] */
    (xdc_Char)0x73,  /* [617] */
    (xdc_Char)0x6b,  /* [618] */
    (xdc_Char)0x73,  /* [619] */
    (xdc_Char)0x3a,  /* [620] */
    (xdc_Char)0x20,  /* [621] */
    (xdc_Char)0x6f,  /* [622] */
    (xdc_Char)0x72,  /* [623] */
    (xdc_Char)0x4d,  /* [624] */
    (xdc_Char)0x61,  /* [625] */
    (xdc_Char)0x73,  /* [626] */
    (xdc_Char)0x6b,  /* [627] */
    (xdc_Char)0x20,  /* [628] */
    (xdc_Char)0x61,  /* [629] */
    (xdc_Char)0x6e,  /* [630] */
    (xdc_Char)0x64,  /* [631] */
    (xdc_Char)0x20,  /* [632] */
    (xdc_Char)0x61,  /* [633] */
    (xdc_Char)0x6e,  /* [634] */
    (xdc_Char)0x64,  /* [635] */
    (xdc_Char)0x4d,  /* [636] */
    (xdc_Char)0x61,  /* [637] */
    (xdc_Char)0x73,  /* [638] */
    (xdc_Char)0x6b,  /* [639] */
    (xdc_Char)0x20,  /* [640] */
    (xdc_Char)0x61,  /* [641] */
    (xdc_Char)0x72,  /* [642] */
    (xdc_Char)0x65,  /* [643] */
    (xdc_Char)0x20,  /* [644] */
    (xdc_Char)0x6e,  /* [645] */
    (xdc_Char)0x75,  /* [646] */
    (xdc_Char)0x6c,  /* [647] */
    (xdc_Char)0x6c,  /* [648] */
    (xdc_Char)0x2e,  /* [649] */
    (xdc_Char)0x0,  /* [650] */
    (xdc_Char)0x41,  /* [651] */
    (xdc_Char)0x5f,  /* [652] */
    (xdc_Char)0x6e,  /* [653] */
    (xdc_Char)0x75,  /* [654] */
    (xdc_Char)0x6c,  /* [655] */
    (xdc_Char)0x6c,  /* [656] */
    (xdc_Char)0x45,  /* [657] */
    (xdc_Char)0x76,  /* [658] */
    (xdc_Char)0x65,  /* [659] */
    (xdc_Char)0x6e,  /* [660] */
    (xdc_Char)0x74,  /* [661] */
    (xdc_Char)0x49,  /* [662] */
    (xdc_Char)0x64,  /* [663] */
    (xdc_Char)0x3a,  /* [664] */
    (xdc_Char)0x20,  /* [665] */
    (xdc_Char)0x70,  /* [666] */
    (xdc_Char)0x6f,  /* [667] */
    (xdc_Char)0x73,  /* [668] */
    (xdc_Char)0x74,  /* [669] */
    (xdc_Char)0x65,  /* [670] */
    (xdc_Char)0x64,  /* [671] */
    (xdc_Char)0x20,  /* [672] */
    (xdc_Char)0x65,  /* [673] */
    (xdc_Char)0x76,  /* [674] */
    (xdc_Char)0x65,  /* [675] */
    (xdc_Char)0x6e,  /* [676] */
    (xdc_Char)0x74,  /* [677] */
    (xdc_Char)0x49,  /* [678] */
    (xdc_Char)0x64,  /* [679] */
    (xdc_Char)0x20,  /* [680] */
    (xdc_Char)0x69,  /* [681] */
    (xdc_Char)0x73,  /* [682] */
    (xdc_Char)0x20,  /* [683] */
    (xdc_Char)0x6e,  /* [684] */
    (xdc_Char)0x75,  /* [685] */
    (xdc_Char)0x6c,  /* [686] */
    (xdc_Char)0x6c,  /* [687] */
    (xdc_Char)0x2e,  /* [688] */
    (xdc_Char)0x0,  /* [689] */
    (xdc_Char)0x41,  /* [690] */
    (xdc_Char)0x5f,  /* [691] */
    (xdc_Char)0x65,  /* [692] */
    (xdc_Char)0x76,  /* [693] */
    (xdc_Char)0x65,  /* [694] */
    (xdc_Char)0x6e,  /* [695] */
    (xdc_Char)0x74,  /* [696] */
    (xdc_Char)0x49,  /* [697] */
    (xdc_Char)0x6e,  /* [698] */
    (xdc_Char)0x55,  /* [699] */
    (xdc_Char)0x73,  /* [700] */
    (xdc_Char)0x65,  /* [701] */
    (xdc_Char)0x3a,  /* [702] */
    (xdc_Char)0x20,  /* [703] */
    (xdc_Char)0x45,  /* [704] */
    (xdc_Char)0x76,  /* [705] */
    (xdc_Char)0x65,  /* [706] */
    (xdc_Char)0x6e,  /* [707] */
    (xdc_Char)0x74,  /* [708] */
    (xdc_Char)0x20,  /* [709] */
    (xdc_Char)0x6f,  /* [710] */
    (xdc_Char)0x62,  /* [711] */
    (xdc_Char)0x6a,  /* [712] */
    (xdc_Char)0x65,  /* [713] */
    (xdc_Char)0x63,  /* [714] */
    (xdc_Char)0x74,  /* [715] */
    (xdc_Char)0x20,  /* [716] */
    (xdc_Char)0x61,  /* [717] */
    (xdc_Char)0x6c,  /* [718] */
    (xdc_Char)0x72,  /* [719] */
    (xdc_Char)0x65,  /* [720] */
    (xdc_Char)0x61,  /* [721] */
    (xdc_Char)0x64,  /* [722] */
    (xdc_Char)0x79,  /* [723] */
    (xdc_Char)0x20,  /* [724] */
    (xdc_Char)0x69,  /* [725] */
    (xdc_Char)0x6e,  /* [726] */
    (xdc_Char)0x20,  /* [727] */
    (xdc_Char)0x75,  /* [728] */
    (xdc_Char)0x73,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x2e,  /* [731] */
    (xdc_Char)0x0,  /* [732] */
    (xdc_Char)0x41,  /* [733] */
    (xdc_Char)0x5f,  /* [734] */
    (xdc_Char)0x62,  /* [735] */
    (xdc_Char)0x61,  /* [736] */
    (xdc_Char)0x64,  /* [737] */
    (xdc_Char)0x43,  /* [738] */
    (xdc_Char)0x6f,  /* [739] */
    (xdc_Char)0x6e,  /* [740] */
    (xdc_Char)0x74,  /* [741] */
    (xdc_Char)0x65,  /* [742] */
    (xdc_Char)0x78,  /* [743] */
    (xdc_Char)0x74,  /* [744] */
    (xdc_Char)0x3a,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x62,  /* [747] */
    (xdc_Char)0x61,  /* [748] */
    (xdc_Char)0x64,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x63,  /* [751] */
    (xdc_Char)0x61,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x6c,  /* [754] */
    (xdc_Char)0x69,  /* [755] */
    (xdc_Char)0x6e,  /* [756] */
    (xdc_Char)0x67,  /* [757] */
    (xdc_Char)0x20,  /* [758] */
    (xdc_Char)0x63,  /* [759] */
    (xdc_Char)0x6f,  /* [760] */
    (xdc_Char)0x6e,  /* [761] */
    (xdc_Char)0x74,  /* [762] */
    (xdc_Char)0x65,  /* [763] */
    (xdc_Char)0x78,  /* [764] */
    (xdc_Char)0x74,  /* [765] */
    (xdc_Char)0x2e,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x4d,  /* [768] */
    (xdc_Char)0x75,  /* [769] */
    (xdc_Char)0x73,  /* [770] */
    (xdc_Char)0x74,  /* [771] */
    (xdc_Char)0x20,  /* [772] */
    (xdc_Char)0x62,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x20,  /* [775] */
    (xdc_Char)0x63,  /* [776] */
    (xdc_Char)0x61,  /* [777] */
    (xdc_Char)0x6c,  /* [778] */
    (xdc_Char)0x6c,  /* [779] */
    (xdc_Char)0x65,  /* [780] */
    (xdc_Char)0x64,  /* [781] */
    (xdc_Char)0x20,  /* [782] */
    (xdc_Char)0x66,  /* [783] */
    (xdc_Char)0x72,  /* [784] */
    (xdc_Char)0x6f,  /* [785] */
    (xdc_Char)0x6d,  /* [786] */
    (xdc_Char)0x20,  /* [787] */
    (xdc_Char)0x61,  /* [788] */
    (xdc_Char)0x20,  /* [789] */
    (xdc_Char)0x54,  /* [790] */
    (xdc_Char)0x61,  /* [791] */
    (xdc_Char)0x73,  /* [792] */
    (xdc_Char)0x6b,  /* [793] */
    (xdc_Char)0x2e,  /* [794] */
    (xdc_Char)0x0,  /* [795] */
    (xdc_Char)0x41,  /* [796] */
    (xdc_Char)0x5f,  /* [797] */
    (xdc_Char)0x70,  /* [798] */
    (xdc_Char)0x65,  /* [799] */
    (xdc_Char)0x6e,  /* [800] */
    (xdc_Char)0x64,  /* [801] */
    (xdc_Char)0x54,  /* [802] */
    (xdc_Char)0x61,  /* [803] */
    (xdc_Char)0x73,  /* [804] */
    (xdc_Char)0x6b,  /* [805] */
    (xdc_Char)0x44,  /* [806] */
    (xdc_Char)0x69,  /* [807] */
    (xdc_Char)0x73,  /* [808] */
    (xdc_Char)0x61,  /* [809] */
    (xdc_Char)0x62,  /* [810] */
    (xdc_Char)0x6c,  /* [811] */
    (xdc_Char)0x65,  /* [812] */
    (xdc_Char)0x64,  /* [813] */
    (xdc_Char)0x3a,  /* [814] */
    (xdc_Char)0x20,  /* [815] */
    (xdc_Char)0x43,  /* [816] */
    (xdc_Char)0x61,  /* [817] */
    (xdc_Char)0x6e,  /* [818] */
    (xdc_Char)0x6e,  /* [819] */
    (xdc_Char)0x6f,  /* [820] */
    (xdc_Char)0x74,  /* [821] */
    (xdc_Char)0x20,  /* [822] */
    (xdc_Char)0x63,  /* [823] */
    (xdc_Char)0x61,  /* [824] */
    (xdc_Char)0x6c,  /* [825] */
    (xdc_Char)0x6c,  /* [826] */
    (xdc_Char)0x20,  /* [827] */
    (xdc_Char)0x45,  /* [828] */
    (xdc_Char)0x76,  /* [829] */
    (xdc_Char)0x65,  /* [830] */
    (xdc_Char)0x6e,  /* [831] */
    (xdc_Char)0x74,  /* [832] */
    (xdc_Char)0x5f,  /* [833] */
    (xdc_Char)0x70,  /* [834] */
    (xdc_Char)0x65,  /* [835] */
    (xdc_Char)0x6e,  /* [836] */
    (xdc_Char)0x64,  /* [837] */
    (xdc_Char)0x28,  /* [838] */
    (xdc_Char)0x29,  /* [839] */
    (xdc_Char)0x20,  /* [840] */
    (xdc_Char)0x77,  /* [841] */
    (xdc_Char)0x68,  /* [842] */
    (xdc_Char)0x69,  /* [843] */
    (xdc_Char)0x6c,  /* [844] */
    (xdc_Char)0x65,  /* [845] */
    (xdc_Char)0x20,  /* [846] */
    (xdc_Char)0x74,  /* [847] */
    (xdc_Char)0x68,  /* [848] */
    (xdc_Char)0x65,  /* [849] */
    (xdc_Char)0x20,  /* [850] */
    (xdc_Char)0x54,  /* [851] */
    (xdc_Char)0x61,  /* [852] */
    (xdc_Char)0x73,  /* [853] */
    (xdc_Char)0x6b,  /* [854] */
    (xdc_Char)0x20,  /* [855] */
    (xdc_Char)0x6f,  /* [856] */
    (xdc_Char)0x72,  /* [857] */
    (xdc_Char)0x20,  /* [858] */
    (xdc_Char)0x53,  /* [859] */
    (xdc_Char)0x77,  /* [860] */
    (xdc_Char)0x69,  /* [861] */
    (xdc_Char)0x20,  /* [862] */
    (xdc_Char)0x73,  /* [863] */
    (xdc_Char)0x63,  /* [864] */
    (xdc_Char)0x68,  /* [865] */
    (xdc_Char)0x65,  /* [866] */
    (xdc_Char)0x64,  /* [867] */
    (xdc_Char)0x75,  /* [868] */
    (xdc_Char)0x6c,  /* [869] */
    (xdc_Char)0x65,  /* [870] */
    (xdc_Char)0x72,  /* [871] */
    (xdc_Char)0x20,  /* [872] */
    (xdc_Char)0x69,  /* [873] */
    (xdc_Char)0x73,  /* [874] */
    (xdc_Char)0x20,  /* [875] */
    (xdc_Char)0x64,  /* [876] */
    (xdc_Char)0x69,  /* [877] */
    (xdc_Char)0x73,  /* [878] */
    (xdc_Char)0x61,  /* [879] */
    (xdc_Char)0x62,  /* [880] */
    (xdc_Char)0x6c,  /* [881] */
    (xdc_Char)0x65,  /* [882] */
    (xdc_Char)0x64,  /* [883] */
    (xdc_Char)0x2e,  /* [884] */
    (xdc_Char)0x0,  /* [885] */
    (xdc_Char)0x4d,  /* [886] */
    (xdc_Char)0x61,  /* [887] */
    (xdc_Char)0x69,  /* [888] */
    (xdc_Char)0x6c,  /* [889] */
    (xdc_Char)0x62,  /* [890] */
    (xdc_Char)0x6f,  /* [891] */
    (xdc_Char)0x78,  /* [892] */
    (xdc_Char)0x5f,  /* [893] */
    (xdc_Char)0x63,  /* [894] */
    (xdc_Char)0x72,  /* [895] */
    (xdc_Char)0x65,  /* [896] */
    (xdc_Char)0x61,  /* [897] */
    (xdc_Char)0x74,  /* [898] */
    (xdc_Char)0x65,  /* [899] */
    (xdc_Char)0x27,  /* [900] */
    (xdc_Char)0x73,  /* [901] */
    (xdc_Char)0x20,  /* [902] */
    (xdc_Char)0x62,  /* [903] */
    (xdc_Char)0x75,  /* [904] */
    (xdc_Char)0x66,  /* [905] */
    (xdc_Char)0x53,  /* [906] */
    (xdc_Char)0x69,  /* [907] */
    (xdc_Char)0x7a,  /* [908] */
    (xdc_Char)0x65,  /* [909] */
    (xdc_Char)0x20,  /* [910] */
    (xdc_Char)0x70,  /* [911] */
    (xdc_Char)0x61,  /* [912] */
    (xdc_Char)0x72,  /* [913] */
    (xdc_Char)0x61,  /* [914] */
    (xdc_Char)0x6d,  /* [915] */
    (xdc_Char)0x65,  /* [916] */
    (xdc_Char)0x74,  /* [917] */
    (xdc_Char)0x65,  /* [918] */
    (xdc_Char)0x72,  /* [919] */
    (xdc_Char)0x20,  /* [920] */
    (xdc_Char)0x69,  /* [921] */
    (xdc_Char)0x73,  /* [922] */
    (xdc_Char)0x20,  /* [923] */
    (xdc_Char)0x69,  /* [924] */
    (xdc_Char)0x6e,  /* [925] */
    (xdc_Char)0x76,  /* [926] */
    (xdc_Char)0x61,  /* [927] */
    (xdc_Char)0x6c,  /* [928] */
    (xdc_Char)0x69,  /* [929] */
    (xdc_Char)0x64,  /* [930] */
    (xdc_Char)0x20,  /* [931] */
    (xdc_Char)0x28,  /* [932] */
    (xdc_Char)0x74,  /* [933] */
    (xdc_Char)0x6f,  /* [934] */
    (xdc_Char)0x6f,  /* [935] */
    (xdc_Char)0x20,  /* [936] */
    (xdc_Char)0x73,  /* [937] */
    (xdc_Char)0x6d,  /* [938] */
    (xdc_Char)0x61,  /* [939] */
    (xdc_Char)0x6c,  /* [940] */
    (xdc_Char)0x6c,  /* [941] */
    (xdc_Char)0x29,  /* [942] */
    (xdc_Char)0x0,  /* [943] */
    (xdc_Char)0x41,  /* [944] */
    (xdc_Char)0x5f,  /* [945] */
    (xdc_Char)0x6e,  /* [946] */
    (xdc_Char)0x6f,  /* [947] */
    (xdc_Char)0x45,  /* [948] */
    (xdc_Char)0x76,  /* [949] */
    (xdc_Char)0x65,  /* [950] */
    (xdc_Char)0x6e,  /* [951] */
    (xdc_Char)0x74,  /* [952] */
    (xdc_Char)0x73,  /* [953] */
    (xdc_Char)0x3a,  /* [954] */
    (xdc_Char)0x20,  /* [955] */
    (xdc_Char)0x54,  /* [956] */
    (xdc_Char)0x68,  /* [957] */
    (xdc_Char)0x65,  /* [958] */
    (xdc_Char)0x20,  /* [959] */
    (xdc_Char)0x45,  /* [960] */
    (xdc_Char)0x76,  /* [961] */
    (xdc_Char)0x65,  /* [962] */
    (xdc_Char)0x6e,  /* [963] */
    (xdc_Char)0x74,  /* [964] */
    (xdc_Char)0x2e,  /* [965] */
    (xdc_Char)0x73,  /* [966] */
    (xdc_Char)0x75,  /* [967] */
    (xdc_Char)0x70,  /* [968] */
    (xdc_Char)0x70,  /* [969] */
    (xdc_Char)0x6f,  /* [970] */
    (xdc_Char)0x72,  /* [971] */
    (xdc_Char)0x74,  /* [972] */
    (xdc_Char)0x73,  /* [973] */
    (xdc_Char)0x45,  /* [974] */
    (xdc_Char)0x76,  /* [975] */
    (xdc_Char)0x65,  /* [976] */
    (xdc_Char)0x6e,  /* [977] */
    (xdc_Char)0x74,  /* [978] */
    (xdc_Char)0x73,  /* [979] */
    (xdc_Char)0x20,  /* [980] */
    (xdc_Char)0x66,  /* [981] */
    (xdc_Char)0x6c,  /* [982] */
    (xdc_Char)0x61,  /* [983] */
    (xdc_Char)0x67,  /* [984] */
    (xdc_Char)0x20,  /* [985] */
    (xdc_Char)0x69,  /* [986] */
    (xdc_Char)0x73,  /* [987] */
    (xdc_Char)0x20,  /* [988] */
    (xdc_Char)0x64,  /* [989] */
    (xdc_Char)0x69,  /* [990] */
    (xdc_Char)0x73,  /* [991] */
    (xdc_Char)0x61,  /* [992] */
    (xdc_Char)0x62,  /* [993] */
    (xdc_Char)0x6c,  /* [994] */
    (xdc_Char)0x65,  /* [995] */
    (xdc_Char)0x64,  /* [996] */
    (xdc_Char)0x2e,  /* [997] */
    (xdc_Char)0x0,  /* [998] */
    (xdc_Char)0x41,  /* [999] */
    (xdc_Char)0x5f,  /* [1000] */
    (xdc_Char)0x69,  /* [1001] */
    (xdc_Char)0x6e,  /* [1002] */
    (xdc_Char)0x76,  /* [1003] */
    (xdc_Char)0x54,  /* [1004] */
    (xdc_Char)0x69,  /* [1005] */
    (xdc_Char)0x6d,  /* [1006] */
    (xdc_Char)0x65,  /* [1007] */
    (xdc_Char)0x6f,  /* [1008] */
    (xdc_Char)0x75,  /* [1009] */
    (xdc_Char)0x74,  /* [1010] */
    (xdc_Char)0x3a,  /* [1011] */
    (xdc_Char)0x20,  /* [1012] */
    (xdc_Char)0x43,  /* [1013] */
    (xdc_Char)0x61,  /* [1014] */
    (xdc_Char)0x6e,  /* [1015] */
    (xdc_Char)0x27,  /* [1016] */
    (xdc_Char)0x74,  /* [1017] */
    (xdc_Char)0x20,  /* [1018] */
    (xdc_Char)0x75,  /* [1019] */
    (xdc_Char)0x73,  /* [1020] */
    (xdc_Char)0x65,  /* [1021] */
    (xdc_Char)0x20,  /* [1022] */
    (xdc_Char)0x42,  /* [1023] */
    (xdc_Char)0x49,  /* [1024] */
    (xdc_Char)0x4f,  /* [1025] */
    (xdc_Char)0x53,  /* [1026] */
    (xdc_Char)0x5f,  /* [1027] */
    (xdc_Char)0x45,  /* [1028] */
    (xdc_Char)0x56,  /* [1029] */
    (xdc_Char)0x45,  /* [1030] */
    (xdc_Char)0x4e,  /* [1031] */
    (xdc_Char)0x54,  /* [1032] */
    (xdc_Char)0x5f,  /* [1033] */
    (xdc_Char)0x41,  /* [1034] */
    (xdc_Char)0x43,  /* [1035] */
    (xdc_Char)0x51,  /* [1036] */
    (xdc_Char)0x55,  /* [1037] */
    (xdc_Char)0x49,  /* [1038] */
    (xdc_Char)0x52,  /* [1039] */
    (xdc_Char)0x45,  /* [1040] */
    (xdc_Char)0x44,  /* [1041] */
    (xdc_Char)0x20,  /* [1042] */
    (xdc_Char)0x77,  /* [1043] */
    (xdc_Char)0x69,  /* [1044] */
    (xdc_Char)0x74,  /* [1045] */
    (xdc_Char)0x68,  /* [1046] */
    (xdc_Char)0x20,  /* [1047] */
    (xdc_Char)0x74,  /* [1048] */
    (xdc_Char)0x68,  /* [1049] */
    (xdc_Char)0x69,  /* [1050] */
    (xdc_Char)0x73,  /* [1051] */
    (xdc_Char)0x20,  /* [1052] */
    (xdc_Char)0x53,  /* [1053] */
    (xdc_Char)0x65,  /* [1054] */
    (xdc_Char)0x6d,  /* [1055] */
    (xdc_Char)0x61,  /* [1056] */
    (xdc_Char)0x70,  /* [1057] */
    (xdc_Char)0x68,  /* [1058] */
    (xdc_Char)0x6f,  /* [1059] */
    (xdc_Char)0x72,  /* [1060] */
    (xdc_Char)0x65,  /* [1061] */
    (xdc_Char)0x2e,  /* [1062] */
    (xdc_Char)0x0,  /* [1063] */
    (xdc_Char)0x41,  /* [1064] */
    (xdc_Char)0x5f,  /* [1065] */
    (xdc_Char)0x6f,  /* [1066] */
    (xdc_Char)0x76,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x72,  /* [1069] */
    (xdc_Char)0x66,  /* [1070] */
    (xdc_Char)0x6c,  /* [1071] */
    (xdc_Char)0x6f,  /* [1072] */
    (xdc_Char)0x77,  /* [1073] */
    (xdc_Char)0x3a,  /* [1074] */
    (xdc_Char)0x20,  /* [1075] */
    (xdc_Char)0x43,  /* [1076] */
    (xdc_Char)0x6f,  /* [1077] */
    (xdc_Char)0x75,  /* [1078] */
    (xdc_Char)0x6e,  /* [1079] */
    (xdc_Char)0x74,  /* [1080] */
    (xdc_Char)0x20,  /* [1081] */
    (xdc_Char)0x68,  /* [1082] */
    (xdc_Char)0x61,  /* [1083] */
    (xdc_Char)0x73,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x65,  /* [1086] */
    (xdc_Char)0x78,  /* [1087] */
    (xdc_Char)0x63,  /* [1088] */
    (xdc_Char)0x65,  /* [1089] */
    (xdc_Char)0x65,  /* [1090] */
    (xdc_Char)0x64,  /* [1091] */
    (xdc_Char)0x65,  /* [1092] */
    (xdc_Char)0x64,  /* [1093] */
    (xdc_Char)0x20,  /* [1094] */
    (xdc_Char)0x36,  /* [1095] */
    (xdc_Char)0x35,  /* [1096] */
    (xdc_Char)0x35,  /* [1097] */
    (xdc_Char)0x33,  /* [1098] */
    (xdc_Char)0x35,  /* [1099] */
    (xdc_Char)0x20,  /* [1100] */
    (xdc_Char)0x61,  /* [1101] */
    (xdc_Char)0x6e,  /* [1102] */
    (xdc_Char)0x64,  /* [1103] */
    (xdc_Char)0x20,  /* [1104] */
    (xdc_Char)0x72,  /* [1105] */
    (xdc_Char)0x6f,  /* [1106] */
    (xdc_Char)0x6c,  /* [1107] */
    (xdc_Char)0x6c,  /* [1108] */
    (xdc_Char)0x65,  /* [1109] */
    (xdc_Char)0x64,  /* [1110] */
    (xdc_Char)0x20,  /* [1111] */
    (xdc_Char)0x6f,  /* [1112] */
    (xdc_Char)0x76,  /* [1113] */
    (xdc_Char)0x65,  /* [1114] */
    (xdc_Char)0x72,  /* [1115] */
    (xdc_Char)0x2e,  /* [1116] */
    (xdc_Char)0x0,  /* [1117] */
    (xdc_Char)0x41,  /* [1118] */
    (xdc_Char)0x5f,  /* [1119] */
    (xdc_Char)0x70,  /* [1120] */
    (xdc_Char)0x65,  /* [1121] */
    (xdc_Char)0x6e,  /* [1122] */
    (xdc_Char)0x64,  /* [1123] */
    (xdc_Char)0x54,  /* [1124] */
    (xdc_Char)0x61,  /* [1125] */
    (xdc_Char)0x73,  /* [1126] */
    (xdc_Char)0x6b,  /* [1127] */
    (xdc_Char)0x44,  /* [1128] */
    (xdc_Char)0x69,  /* [1129] */
    (xdc_Char)0x73,  /* [1130] */
    (xdc_Char)0x61,  /* [1131] */
    (xdc_Char)0x62,  /* [1132] */
    (xdc_Char)0x6c,  /* [1133] */
    (xdc_Char)0x65,  /* [1134] */
    (xdc_Char)0x64,  /* [1135] */
    (xdc_Char)0x3a,  /* [1136] */
    (xdc_Char)0x20,  /* [1137] */
    (xdc_Char)0x43,  /* [1138] */
    (xdc_Char)0x61,  /* [1139] */
    (xdc_Char)0x6e,  /* [1140] */
    (xdc_Char)0x6e,  /* [1141] */
    (xdc_Char)0x6f,  /* [1142] */
    (xdc_Char)0x74,  /* [1143] */
    (xdc_Char)0x20,  /* [1144] */
    (xdc_Char)0x63,  /* [1145] */
    (xdc_Char)0x61,  /* [1146] */
    (xdc_Char)0x6c,  /* [1147] */
    (xdc_Char)0x6c,  /* [1148] */
    (xdc_Char)0x20,  /* [1149] */
    (xdc_Char)0x53,  /* [1150] */
    (xdc_Char)0x65,  /* [1151] */
    (xdc_Char)0x6d,  /* [1152] */
    (xdc_Char)0x61,  /* [1153] */
    (xdc_Char)0x70,  /* [1154] */
    (xdc_Char)0x68,  /* [1155] */
    (xdc_Char)0x6f,  /* [1156] */
    (xdc_Char)0x72,  /* [1157] */
    (xdc_Char)0x65,  /* [1158] */
    (xdc_Char)0x5f,  /* [1159] */
    (xdc_Char)0x70,  /* [1160] */
    (xdc_Char)0x65,  /* [1161] */
    (xdc_Char)0x6e,  /* [1162] */
    (xdc_Char)0x64,  /* [1163] */
    (xdc_Char)0x28,  /* [1164] */
    (xdc_Char)0x29,  /* [1165] */
    (xdc_Char)0x20,  /* [1166] */
    (xdc_Char)0x77,  /* [1167] */
    (xdc_Char)0x68,  /* [1168] */
    (xdc_Char)0x69,  /* [1169] */
    (xdc_Char)0x6c,  /* [1170] */
    (xdc_Char)0x65,  /* [1171] */
    (xdc_Char)0x20,  /* [1172] */
    (xdc_Char)0x74,  /* [1173] */
    (xdc_Char)0x68,  /* [1174] */
    (xdc_Char)0x65,  /* [1175] */
    (xdc_Char)0x20,  /* [1176] */
    (xdc_Char)0x54,  /* [1177] */
    (xdc_Char)0x61,  /* [1178] */
    (xdc_Char)0x73,  /* [1179] */
    (xdc_Char)0x6b,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x6f,  /* [1182] */
    (xdc_Char)0x72,  /* [1183] */
    (xdc_Char)0x20,  /* [1184] */
    (xdc_Char)0x53,  /* [1185] */
    (xdc_Char)0x77,  /* [1186] */
    (xdc_Char)0x69,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x73,  /* [1189] */
    (xdc_Char)0x63,  /* [1190] */
    (xdc_Char)0x68,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x64,  /* [1193] */
    (xdc_Char)0x75,  /* [1194] */
    (xdc_Char)0x6c,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x72,  /* [1197] */
    (xdc_Char)0x20,  /* [1198] */
    (xdc_Char)0x69,  /* [1199] */
    (xdc_Char)0x73,  /* [1200] */
    (xdc_Char)0x20,  /* [1201] */
    (xdc_Char)0x64,  /* [1202] */
    (xdc_Char)0x69,  /* [1203] */
    (xdc_Char)0x73,  /* [1204] */
    (xdc_Char)0x61,  /* [1205] */
    (xdc_Char)0x62,  /* [1206] */
    (xdc_Char)0x6c,  /* [1207] */
    (xdc_Char)0x65,  /* [1208] */
    (xdc_Char)0x64,  /* [1209] */
    (xdc_Char)0x2e,  /* [1210] */
    (xdc_Char)0x0,  /* [1211] */
    (xdc_Char)0x41,  /* [1212] */
    (xdc_Char)0x5f,  /* [1213] */
    (xdc_Char)0x73,  /* [1214] */
    (xdc_Char)0x77,  /* [1215] */
    (xdc_Char)0x69,  /* [1216] */
    (xdc_Char)0x44,  /* [1217] */
    (xdc_Char)0x69,  /* [1218] */
    (xdc_Char)0x73,  /* [1219] */
    (xdc_Char)0x61,  /* [1220] */
    (xdc_Char)0x62,  /* [1221] */
    (xdc_Char)0x6c,  /* [1222] */
    (xdc_Char)0x65,  /* [1223] */
    (xdc_Char)0x64,  /* [1224] */
    (xdc_Char)0x3a,  /* [1225] */
    (xdc_Char)0x20,  /* [1226] */
    (xdc_Char)0x43,  /* [1227] */
    (xdc_Char)0x61,  /* [1228] */
    (xdc_Char)0x6e,  /* [1229] */
    (xdc_Char)0x6e,  /* [1230] */
    (xdc_Char)0x6f,  /* [1231] */
    (xdc_Char)0x74,  /* [1232] */
    (xdc_Char)0x20,  /* [1233] */
    (xdc_Char)0x63,  /* [1234] */
    (xdc_Char)0x72,  /* [1235] */
    (xdc_Char)0x65,  /* [1236] */
    (xdc_Char)0x61,  /* [1237] */
    (xdc_Char)0x74,  /* [1238] */
    (xdc_Char)0x65,  /* [1239] */
    (xdc_Char)0x20,  /* [1240] */
    (xdc_Char)0x61,  /* [1241] */
    (xdc_Char)0x20,  /* [1242] */
    (xdc_Char)0x53,  /* [1243] */
    (xdc_Char)0x77,  /* [1244] */
    (xdc_Char)0x69,  /* [1245] */
    (xdc_Char)0x20,  /* [1246] */
    (xdc_Char)0x77,  /* [1247] */
    (xdc_Char)0x68,  /* [1248] */
    (xdc_Char)0x65,  /* [1249] */
    (xdc_Char)0x6e,  /* [1250] */
    (xdc_Char)0x20,  /* [1251] */
    (xdc_Char)0x53,  /* [1252] */
    (xdc_Char)0x77,  /* [1253] */
    (xdc_Char)0x69,  /* [1254] */
    (xdc_Char)0x20,  /* [1255] */
    (xdc_Char)0x69,  /* [1256] */
    (xdc_Char)0x73,  /* [1257] */
    (xdc_Char)0x20,  /* [1258] */
    (xdc_Char)0x64,  /* [1259] */
    (xdc_Char)0x69,  /* [1260] */
    (xdc_Char)0x73,  /* [1261] */
    (xdc_Char)0x61,  /* [1262] */
    (xdc_Char)0x62,  /* [1263] */
    (xdc_Char)0x6c,  /* [1264] */
    (xdc_Char)0x65,  /* [1265] */
    (xdc_Char)0x64,  /* [1266] */
    (xdc_Char)0x2e,  /* [1267] */
    (xdc_Char)0x0,  /* [1268] */
    (xdc_Char)0x41,  /* [1269] */
    (xdc_Char)0x5f,  /* [1270] */
    (xdc_Char)0x62,  /* [1271] */
    (xdc_Char)0x61,  /* [1272] */
    (xdc_Char)0x64,  /* [1273] */
    (xdc_Char)0x50,  /* [1274] */
    (xdc_Char)0x72,  /* [1275] */
    (xdc_Char)0x69,  /* [1276] */
    (xdc_Char)0x6f,  /* [1277] */
    (xdc_Char)0x72,  /* [1278] */
    (xdc_Char)0x69,  /* [1279] */
    (xdc_Char)0x74,  /* [1280] */
    (xdc_Char)0x79,  /* [1281] */
    (xdc_Char)0x3a,  /* [1282] */
    (xdc_Char)0x20,  /* [1283] */
    (xdc_Char)0x41,  /* [1284] */
    (xdc_Char)0x6e,  /* [1285] */
    (xdc_Char)0x20,  /* [1286] */
    (xdc_Char)0x69,  /* [1287] */
    (xdc_Char)0x6e,  /* [1288] */
    (xdc_Char)0x76,  /* [1289] */
    (xdc_Char)0x61,  /* [1290] */
    (xdc_Char)0x6c,  /* [1291] */
    (xdc_Char)0x69,  /* [1292] */
    (xdc_Char)0x64,  /* [1293] */
    (xdc_Char)0x20,  /* [1294] */
    (xdc_Char)0x53,  /* [1295] */
    (xdc_Char)0x77,  /* [1296] */
    (xdc_Char)0x69,  /* [1297] */
    (xdc_Char)0x20,  /* [1298] */
    (xdc_Char)0x70,  /* [1299] */
    (xdc_Char)0x72,  /* [1300] */
    (xdc_Char)0x69,  /* [1301] */
    (xdc_Char)0x6f,  /* [1302] */
    (xdc_Char)0x72,  /* [1303] */
    (xdc_Char)0x69,  /* [1304] */
    (xdc_Char)0x74,  /* [1305] */
    (xdc_Char)0x79,  /* [1306] */
    (xdc_Char)0x20,  /* [1307] */
    (xdc_Char)0x77,  /* [1308] */
    (xdc_Char)0x61,  /* [1309] */
    (xdc_Char)0x73,  /* [1310] */
    (xdc_Char)0x20,  /* [1311] */
    (xdc_Char)0x75,  /* [1312] */
    (xdc_Char)0x73,  /* [1313] */
    (xdc_Char)0x65,  /* [1314] */
    (xdc_Char)0x64,  /* [1315] */
    (xdc_Char)0x2e,  /* [1316] */
    (xdc_Char)0x0,  /* [1317] */
    (xdc_Char)0x41,  /* [1318] */
    (xdc_Char)0x5f,  /* [1319] */
    (xdc_Char)0x62,  /* [1320] */
    (xdc_Char)0x61,  /* [1321] */
    (xdc_Char)0x64,  /* [1322] */
    (xdc_Char)0x54,  /* [1323] */
    (xdc_Char)0x68,  /* [1324] */
    (xdc_Char)0x72,  /* [1325] */
    (xdc_Char)0x65,  /* [1326] */
    (xdc_Char)0x61,  /* [1327] */
    (xdc_Char)0x64,  /* [1328] */
    (xdc_Char)0x54,  /* [1329] */
    (xdc_Char)0x79,  /* [1330] */
    (xdc_Char)0x70,  /* [1331] */
    (xdc_Char)0x65,  /* [1332] */
    (xdc_Char)0x3a,  /* [1333] */
    (xdc_Char)0x20,  /* [1334] */
    (xdc_Char)0x43,  /* [1335] */
    (xdc_Char)0x61,  /* [1336] */
    (xdc_Char)0x6e,  /* [1337] */
    (xdc_Char)0x6e,  /* [1338] */
    (xdc_Char)0x6f,  /* [1339] */
    (xdc_Char)0x74,  /* [1340] */
    (xdc_Char)0x20,  /* [1341] */
    (xdc_Char)0x63,  /* [1342] */
    (xdc_Char)0x72,  /* [1343] */
    (xdc_Char)0x65,  /* [1344] */
    (xdc_Char)0x61,  /* [1345] */
    (xdc_Char)0x74,  /* [1346] */
    (xdc_Char)0x65,  /* [1347] */
    (xdc_Char)0x2f,  /* [1348] */
    (xdc_Char)0x64,  /* [1349] */
    (xdc_Char)0x65,  /* [1350] */
    (xdc_Char)0x6c,  /* [1351] */
    (xdc_Char)0x65,  /* [1352] */
    (xdc_Char)0x74,  /* [1353] */
    (xdc_Char)0x65,  /* [1354] */
    (xdc_Char)0x20,  /* [1355] */
    (xdc_Char)0x61,  /* [1356] */
    (xdc_Char)0x20,  /* [1357] */
    (xdc_Char)0x74,  /* [1358] */
    (xdc_Char)0x61,  /* [1359] */
    (xdc_Char)0x73,  /* [1360] */
    (xdc_Char)0x6b,  /* [1361] */
    (xdc_Char)0x20,  /* [1362] */
    (xdc_Char)0x66,  /* [1363] */
    (xdc_Char)0x72,  /* [1364] */
    (xdc_Char)0x6f,  /* [1365] */
    (xdc_Char)0x6d,  /* [1366] */
    (xdc_Char)0x20,  /* [1367] */
    (xdc_Char)0x48,  /* [1368] */
    (xdc_Char)0x77,  /* [1369] */
    (xdc_Char)0x69,  /* [1370] */
    (xdc_Char)0x20,  /* [1371] */
    (xdc_Char)0x6f,  /* [1372] */
    (xdc_Char)0x72,  /* [1373] */
    (xdc_Char)0x20,  /* [1374] */
    (xdc_Char)0x53,  /* [1375] */
    (xdc_Char)0x77,  /* [1376] */
    (xdc_Char)0x69,  /* [1377] */
    (xdc_Char)0x20,  /* [1378] */
    (xdc_Char)0x74,  /* [1379] */
    (xdc_Char)0x68,  /* [1380] */
    (xdc_Char)0x72,  /* [1381] */
    (xdc_Char)0x65,  /* [1382] */
    (xdc_Char)0x61,  /* [1383] */
    (xdc_Char)0x64,  /* [1384] */
    (xdc_Char)0x2e,  /* [1385] */
    (xdc_Char)0x0,  /* [1386] */
    (xdc_Char)0x41,  /* [1387] */
    (xdc_Char)0x5f,  /* [1388] */
    (xdc_Char)0x62,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x64,  /* [1391] */
    (xdc_Char)0x54,  /* [1392] */
    (xdc_Char)0x61,  /* [1393] */
    (xdc_Char)0x73,  /* [1394] */
    (xdc_Char)0x6b,  /* [1395] */
    (xdc_Char)0x53,  /* [1396] */
    (xdc_Char)0x74,  /* [1397] */
    (xdc_Char)0x61,  /* [1398] */
    (xdc_Char)0x74,  /* [1399] */
    (xdc_Char)0x65,  /* [1400] */
    (xdc_Char)0x3a,  /* [1401] */
    (xdc_Char)0x20,  /* [1402] */
    (xdc_Char)0x43,  /* [1403] */
    (xdc_Char)0x61,  /* [1404] */
    (xdc_Char)0x6e,  /* [1405] */
    (xdc_Char)0x27,  /* [1406] */
    (xdc_Char)0x74,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x64,  /* [1409] */
    (xdc_Char)0x65,  /* [1410] */
    (xdc_Char)0x6c,  /* [1411] */
    (xdc_Char)0x65,  /* [1412] */
    (xdc_Char)0x74,  /* [1413] */
    (xdc_Char)0x65,  /* [1414] */
    (xdc_Char)0x20,  /* [1415] */
    (xdc_Char)0x61,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x74,  /* [1418] */
    (xdc_Char)0x61,  /* [1419] */
    (xdc_Char)0x73,  /* [1420] */
    (xdc_Char)0x6b,  /* [1421] */
    (xdc_Char)0x20,  /* [1422] */
    (xdc_Char)0x69,  /* [1423] */
    (xdc_Char)0x6e,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x52,  /* [1426] */
    (xdc_Char)0x55,  /* [1427] */
    (xdc_Char)0x4e,  /* [1428] */
    (xdc_Char)0x4e,  /* [1429] */
    (xdc_Char)0x49,  /* [1430] */
    (xdc_Char)0x4e,  /* [1431] */
    (xdc_Char)0x47,  /* [1432] */
    (xdc_Char)0x20,  /* [1433] */
    (xdc_Char)0x73,  /* [1434] */
    (xdc_Char)0x74,  /* [1435] */
    (xdc_Char)0x61,  /* [1436] */
    (xdc_Char)0x74,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x2e,  /* [1439] */
    (xdc_Char)0x0,  /* [1440] */
    (xdc_Char)0x41,  /* [1441] */
    (xdc_Char)0x5f,  /* [1442] */
    (xdc_Char)0x6e,  /* [1443] */
    (xdc_Char)0x6f,  /* [1444] */
    (xdc_Char)0x50,  /* [1445] */
    (xdc_Char)0x65,  /* [1446] */
    (xdc_Char)0x6e,  /* [1447] */
    (xdc_Char)0x64,  /* [1448] */
    (xdc_Char)0x45,  /* [1449] */
    (xdc_Char)0x6c,  /* [1450] */
    (xdc_Char)0x65,  /* [1451] */
    (xdc_Char)0x6d,  /* [1452] */
    (xdc_Char)0x3a,  /* [1453] */
    (xdc_Char)0x20,  /* [1454] */
    (xdc_Char)0x4e,  /* [1455] */
    (xdc_Char)0x6f,  /* [1456] */
    (xdc_Char)0x74,  /* [1457] */
    (xdc_Char)0x20,  /* [1458] */
    (xdc_Char)0x65,  /* [1459] */
    (xdc_Char)0x6e,  /* [1460] */
    (xdc_Char)0x6f,  /* [1461] */
    (xdc_Char)0x75,  /* [1462] */
    (xdc_Char)0x67,  /* [1463] */
    (xdc_Char)0x68,  /* [1464] */
    (xdc_Char)0x20,  /* [1465] */
    (xdc_Char)0x69,  /* [1466] */
    (xdc_Char)0x6e,  /* [1467] */
    (xdc_Char)0x66,  /* [1468] */
    (xdc_Char)0x6f,  /* [1469] */
    (xdc_Char)0x20,  /* [1470] */
    (xdc_Char)0x74,  /* [1471] */
    (xdc_Char)0x6f,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x64,  /* [1474] */
    (xdc_Char)0x65,  /* [1475] */
    (xdc_Char)0x6c,  /* [1476] */
    (xdc_Char)0x65,  /* [1477] */
    (xdc_Char)0x74,  /* [1478] */
    (xdc_Char)0x65,  /* [1479] */
    (xdc_Char)0x20,  /* [1480] */
    (xdc_Char)0x42,  /* [1481] */
    (xdc_Char)0x4c,  /* [1482] */
    (xdc_Char)0x4f,  /* [1483] */
    (xdc_Char)0x43,  /* [1484] */
    (xdc_Char)0x4b,  /* [1485] */
    (xdc_Char)0x45,  /* [1486] */
    (xdc_Char)0x44,  /* [1487] */
    (xdc_Char)0x20,  /* [1488] */
    (xdc_Char)0x74,  /* [1489] */
    (xdc_Char)0x61,  /* [1490] */
    (xdc_Char)0x73,  /* [1491] */
    (xdc_Char)0x6b,  /* [1492] */
    (xdc_Char)0x2e,  /* [1493] */
    (xdc_Char)0x0,  /* [1494] */
    (xdc_Char)0x41,  /* [1495] */
    (xdc_Char)0x5f,  /* [1496] */
    (xdc_Char)0x74,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x73,  /* [1499] */
    (xdc_Char)0x6b,  /* [1500] */
    (xdc_Char)0x44,  /* [1501] */
    (xdc_Char)0x69,  /* [1502] */
    (xdc_Char)0x73,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x62,  /* [1505] */
    (xdc_Char)0x6c,  /* [1506] */
    (xdc_Char)0x65,  /* [1507] */
    (xdc_Char)0x64,  /* [1508] */
    (xdc_Char)0x3a,  /* [1509] */
    (xdc_Char)0x20,  /* [1510] */
    (xdc_Char)0x43,  /* [1511] */
    (xdc_Char)0x61,  /* [1512] */
    (xdc_Char)0x6e,  /* [1513] */
    (xdc_Char)0x6e,  /* [1514] */
    (xdc_Char)0x6f,  /* [1515] */
    (xdc_Char)0x74,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x63,  /* [1518] */
    (xdc_Char)0x72,  /* [1519] */
    (xdc_Char)0x65,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x74,  /* [1522] */
    (xdc_Char)0x65,  /* [1523] */
    (xdc_Char)0x20,  /* [1524] */
    (xdc_Char)0x61,  /* [1525] */
    (xdc_Char)0x20,  /* [1526] */
    (xdc_Char)0x74,  /* [1527] */
    (xdc_Char)0x61,  /* [1528] */
    (xdc_Char)0x73,  /* [1529] */
    (xdc_Char)0x6b,  /* [1530] */
    (xdc_Char)0x20,  /* [1531] */
    (xdc_Char)0x77,  /* [1532] */
    (xdc_Char)0x68,  /* [1533] */
    (xdc_Char)0x65,  /* [1534] */
    (xdc_Char)0x6e,  /* [1535] */
    (xdc_Char)0x20,  /* [1536] */
    (xdc_Char)0x74,  /* [1537] */
    (xdc_Char)0x61,  /* [1538] */
    (xdc_Char)0x73,  /* [1539] */
    (xdc_Char)0x6b,  /* [1540] */
    (xdc_Char)0x69,  /* [1541] */
    (xdc_Char)0x6e,  /* [1542] */
    (xdc_Char)0x67,  /* [1543] */
    (xdc_Char)0x20,  /* [1544] */
    (xdc_Char)0x69,  /* [1545] */
    (xdc_Char)0x73,  /* [1546] */
    (xdc_Char)0x20,  /* [1547] */
    (xdc_Char)0x64,  /* [1548] */
    (xdc_Char)0x69,  /* [1549] */
    (xdc_Char)0x73,  /* [1550] */
    (xdc_Char)0x61,  /* [1551] */
    (xdc_Char)0x62,  /* [1552] */
    (xdc_Char)0x6c,  /* [1553] */
    (xdc_Char)0x65,  /* [1554] */
    (xdc_Char)0x64,  /* [1555] */
    (xdc_Char)0x2e,  /* [1556] */
    (xdc_Char)0x0,  /* [1557] */
    (xdc_Char)0x41,  /* [1558] */
    (xdc_Char)0x5f,  /* [1559] */
    (xdc_Char)0x62,  /* [1560] */
    (xdc_Char)0x61,  /* [1561] */
    (xdc_Char)0x64,  /* [1562] */
    (xdc_Char)0x50,  /* [1563] */
    (xdc_Char)0x72,  /* [1564] */
    (xdc_Char)0x69,  /* [1565] */
    (xdc_Char)0x6f,  /* [1566] */
    (xdc_Char)0x72,  /* [1567] */
    (xdc_Char)0x69,  /* [1568] */
    (xdc_Char)0x74,  /* [1569] */
    (xdc_Char)0x79,  /* [1570] */
    (xdc_Char)0x3a,  /* [1571] */
    (xdc_Char)0x20,  /* [1572] */
    (xdc_Char)0x41,  /* [1573] */
    (xdc_Char)0x6e,  /* [1574] */
    (xdc_Char)0x20,  /* [1575] */
    (xdc_Char)0x69,  /* [1576] */
    (xdc_Char)0x6e,  /* [1577] */
    (xdc_Char)0x76,  /* [1578] */
    (xdc_Char)0x61,  /* [1579] */
    (xdc_Char)0x6c,  /* [1580] */
    (xdc_Char)0x69,  /* [1581] */
    (xdc_Char)0x64,  /* [1582] */
    (xdc_Char)0x20,  /* [1583] */
    (xdc_Char)0x74,  /* [1584] */
    (xdc_Char)0x61,  /* [1585] */
    (xdc_Char)0x73,  /* [1586] */
    (xdc_Char)0x6b,  /* [1587] */
    (xdc_Char)0x20,  /* [1588] */
    (xdc_Char)0x70,  /* [1589] */
    (xdc_Char)0x72,  /* [1590] */
    (xdc_Char)0x69,  /* [1591] */
    (xdc_Char)0x6f,  /* [1592] */
    (xdc_Char)0x72,  /* [1593] */
    (xdc_Char)0x69,  /* [1594] */
    (xdc_Char)0x74,  /* [1595] */
    (xdc_Char)0x79,  /* [1596] */
    (xdc_Char)0x20,  /* [1597] */
    (xdc_Char)0x77,  /* [1598] */
    (xdc_Char)0x61,  /* [1599] */
    (xdc_Char)0x73,  /* [1600] */
    (xdc_Char)0x20,  /* [1601] */
    (xdc_Char)0x75,  /* [1602] */
    (xdc_Char)0x73,  /* [1603] */
    (xdc_Char)0x65,  /* [1604] */
    (xdc_Char)0x64,  /* [1605] */
    (xdc_Char)0x2e,  /* [1606] */
    (xdc_Char)0x0,  /* [1607] */
    (xdc_Char)0x41,  /* [1608] */
    (xdc_Char)0x5f,  /* [1609] */
    (xdc_Char)0x62,  /* [1610] */
    (xdc_Char)0x61,  /* [1611] */
    (xdc_Char)0x64,  /* [1612] */
    (xdc_Char)0x54,  /* [1613] */
    (xdc_Char)0x69,  /* [1614] */
    (xdc_Char)0x6d,  /* [1615] */
    (xdc_Char)0x65,  /* [1616] */
    (xdc_Char)0x6f,  /* [1617] */
    (xdc_Char)0x75,  /* [1618] */
    (xdc_Char)0x74,  /* [1619] */
    (xdc_Char)0x3a,  /* [1620] */
    (xdc_Char)0x20,  /* [1621] */
    (xdc_Char)0x43,  /* [1622] */
    (xdc_Char)0x61,  /* [1623] */
    (xdc_Char)0x6e,  /* [1624] */
    (xdc_Char)0x27,  /* [1625] */
    (xdc_Char)0x74,  /* [1626] */
    (xdc_Char)0x20,  /* [1627] */
    (xdc_Char)0x73,  /* [1628] */
    (xdc_Char)0x6c,  /* [1629] */
    (xdc_Char)0x65,  /* [1630] */
    (xdc_Char)0x65,  /* [1631] */
    (xdc_Char)0x70,  /* [1632] */
    (xdc_Char)0x20,  /* [1633] */
    (xdc_Char)0x46,  /* [1634] */
    (xdc_Char)0x4f,  /* [1635] */
    (xdc_Char)0x52,  /* [1636] */
    (xdc_Char)0x45,  /* [1637] */
    (xdc_Char)0x56,  /* [1638] */
    (xdc_Char)0x45,  /* [1639] */
    (xdc_Char)0x52,  /* [1640] */
    (xdc_Char)0x2e,  /* [1641] */
    (xdc_Char)0x0,  /* [1642] */
    (xdc_Char)0x41,  /* [1643] */
    (xdc_Char)0x5f,  /* [1644] */
    (xdc_Char)0x62,  /* [1645] */
    (xdc_Char)0x61,  /* [1646] */
    (xdc_Char)0x64,  /* [1647] */
    (xdc_Char)0x41,  /* [1648] */
    (xdc_Char)0x66,  /* [1649] */
    (xdc_Char)0x66,  /* [1650] */
    (xdc_Char)0x69,  /* [1651] */
    (xdc_Char)0x6e,  /* [1652] */
    (xdc_Char)0x69,  /* [1653] */
    (xdc_Char)0x74,  /* [1654] */
    (xdc_Char)0x79,  /* [1655] */
    (xdc_Char)0x3a,  /* [1656] */
    (xdc_Char)0x20,  /* [1657] */
    (xdc_Char)0x49,  /* [1658] */
    (xdc_Char)0x6e,  /* [1659] */
    (xdc_Char)0x76,  /* [1660] */
    (xdc_Char)0x61,  /* [1661] */
    (xdc_Char)0x6c,  /* [1662] */
    (xdc_Char)0x69,  /* [1663] */
    (xdc_Char)0x64,  /* [1664] */
    (xdc_Char)0x20,  /* [1665] */
    (xdc_Char)0x61,  /* [1666] */
    (xdc_Char)0x66,  /* [1667] */
    (xdc_Char)0x66,  /* [1668] */
    (xdc_Char)0x69,  /* [1669] */
    (xdc_Char)0x6e,  /* [1670] */
    (xdc_Char)0x69,  /* [1671] */
    (xdc_Char)0x74,  /* [1672] */
    (xdc_Char)0x79,  /* [1673] */
    (xdc_Char)0x2e,  /* [1674] */
    (xdc_Char)0x0,  /* [1675] */
    (xdc_Char)0x41,  /* [1676] */
    (xdc_Char)0x5f,  /* [1677] */
    (xdc_Char)0x73,  /* [1678] */
    (xdc_Char)0x6c,  /* [1679] */
    (xdc_Char)0x65,  /* [1680] */
    (xdc_Char)0x65,  /* [1681] */
    (xdc_Char)0x70,  /* [1682] */
    (xdc_Char)0x54,  /* [1683] */
    (xdc_Char)0x61,  /* [1684] */
    (xdc_Char)0x73,  /* [1685] */
    (xdc_Char)0x6b,  /* [1686] */
    (xdc_Char)0x44,  /* [1687] */
    (xdc_Char)0x69,  /* [1688] */
    (xdc_Char)0x73,  /* [1689] */
    (xdc_Char)0x61,  /* [1690] */
    (xdc_Char)0x62,  /* [1691] */
    (xdc_Char)0x6c,  /* [1692] */
    (xdc_Char)0x65,  /* [1693] */
    (xdc_Char)0x64,  /* [1694] */
    (xdc_Char)0x3a,  /* [1695] */
    (xdc_Char)0x20,  /* [1696] */
    (xdc_Char)0x43,  /* [1697] */
    (xdc_Char)0x61,  /* [1698] */
    (xdc_Char)0x6e,  /* [1699] */
    (xdc_Char)0x6e,  /* [1700] */
    (xdc_Char)0x6f,  /* [1701] */
    (xdc_Char)0x74,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x63,  /* [1704] */
    (xdc_Char)0x61,  /* [1705] */
    (xdc_Char)0x6c,  /* [1706] */
    (xdc_Char)0x6c,  /* [1707] */
    (xdc_Char)0x20,  /* [1708] */
    (xdc_Char)0x54,  /* [1709] */
    (xdc_Char)0x61,  /* [1710] */
    (xdc_Char)0x73,  /* [1711] */
    (xdc_Char)0x6b,  /* [1712] */
    (xdc_Char)0x5f,  /* [1713] */
    (xdc_Char)0x73,  /* [1714] */
    (xdc_Char)0x6c,  /* [1715] */
    (xdc_Char)0x65,  /* [1716] */
    (xdc_Char)0x65,  /* [1717] */
    (xdc_Char)0x70,  /* [1718] */
    (xdc_Char)0x28,  /* [1719] */
    (xdc_Char)0x29,  /* [1720] */
    (xdc_Char)0x20,  /* [1721] */
    (xdc_Char)0x77,  /* [1722] */
    (xdc_Char)0x68,  /* [1723] */
    (xdc_Char)0x69,  /* [1724] */
    (xdc_Char)0x6c,  /* [1725] */
    (xdc_Char)0x65,  /* [1726] */
    (xdc_Char)0x20,  /* [1727] */
    (xdc_Char)0x74,  /* [1728] */
    (xdc_Char)0x68,  /* [1729] */
    (xdc_Char)0x65,  /* [1730] */
    (xdc_Char)0x20,  /* [1731] */
    (xdc_Char)0x54,  /* [1732] */
    (xdc_Char)0x61,  /* [1733] */
    (xdc_Char)0x73,  /* [1734] */
    (xdc_Char)0x6b,  /* [1735] */
    (xdc_Char)0x20,  /* [1736] */
    (xdc_Char)0x73,  /* [1737] */
    (xdc_Char)0x63,  /* [1738] */
    (xdc_Char)0x68,  /* [1739] */
    (xdc_Char)0x65,  /* [1740] */
    (xdc_Char)0x64,  /* [1741] */
    (xdc_Char)0x75,  /* [1742] */
    (xdc_Char)0x6c,  /* [1743] */
    (xdc_Char)0x65,  /* [1744] */
    (xdc_Char)0x72,  /* [1745] */
    (xdc_Char)0x20,  /* [1746] */
    (xdc_Char)0x69,  /* [1747] */
    (xdc_Char)0x73,  /* [1748] */
    (xdc_Char)0x20,  /* [1749] */
    (xdc_Char)0x64,  /* [1750] */
    (xdc_Char)0x69,  /* [1751] */
    (xdc_Char)0x73,  /* [1752] */
    (xdc_Char)0x61,  /* [1753] */
    (xdc_Char)0x62,  /* [1754] */
    (xdc_Char)0x6c,  /* [1755] */
    (xdc_Char)0x65,  /* [1756] */
    (xdc_Char)0x64,  /* [1757] */
    (xdc_Char)0x2e,  /* [1758] */
    (xdc_Char)0x0,  /* [1759] */
    (xdc_Char)0x41,  /* [1760] */
    (xdc_Char)0x5f,  /* [1761] */
    (xdc_Char)0x7a,  /* [1762] */
    (xdc_Char)0x65,  /* [1763] */
    (xdc_Char)0x72,  /* [1764] */
    (xdc_Char)0x6f,  /* [1765] */
    (xdc_Char)0x54,  /* [1766] */
    (xdc_Char)0x69,  /* [1767] */
    (xdc_Char)0x6d,  /* [1768] */
    (xdc_Char)0x65,  /* [1769] */
    (xdc_Char)0x6f,  /* [1770] */
    (xdc_Char)0x75,  /* [1771] */
    (xdc_Char)0x74,  /* [1772] */
    (xdc_Char)0x3a,  /* [1773] */
    (xdc_Char)0x20,  /* [1774] */
    (xdc_Char)0x54,  /* [1775] */
    (xdc_Char)0x69,  /* [1776] */
    (xdc_Char)0x6d,  /* [1777] */
    (xdc_Char)0x65,  /* [1778] */
    (xdc_Char)0x6f,  /* [1779] */
    (xdc_Char)0x75,  /* [1780] */
    (xdc_Char)0x74,  /* [1781] */
    (xdc_Char)0x20,  /* [1782] */
    (xdc_Char)0x76,  /* [1783] */
    (xdc_Char)0x61,  /* [1784] */
    (xdc_Char)0x6c,  /* [1785] */
    (xdc_Char)0x75,  /* [1786] */
    (xdc_Char)0x65,  /* [1787] */
    (xdc_Char)0x20,  /* [1788] */
    (xdc_Char)0x61,  /* [1789] */
    (xdc_Char)0x6e,  /* [1790] */
    (xdc_Char)0x6e,  /* [1791] */
    (xdc_Char)0x6f,  /* [1792] */
    (xdc_Char)0x74,  /* [1793] */
    (xdc_Char)0x20,  /* [1794] */
    (xdc_Char)0x62,  /* [1795] */
    (xdc_Char)0x65,  /* [1796] */
    (xdc_Char)0x20,  /* [1797] */
    (xdc_Char)0x7a,  /* [1798] */
    (xdc_Char)0x65,  /* [1799] */
    (xdc_Char)0x72,  /* [1800] */
    (xdc_Char)0x6f,  /* [1801] */
    (xdc_Char)0x0,  /* [1802] */
    (xdc_Char)0x41,  /* [1803] */
    (xdc_Char)0x5f,  /* [1804] */
    (xdc_Char)0x69,  /* [1805] */
    (xdc_Char)0x6e,  /* [1806] */
    (xdc_Char)0x76,  /* [1807] */
    (xdc_Char)0x61,  /* [1808] */
    (xdc_Char)0x6c,  /* [1809] */
    (xdc_Char)0x69,  /* [1810] */
    (xdc_Char)0x64,  /* [1811] */
    (xdc_Char)0x4b,  /* [1812] */
    (xdc_Char)0x65,  /* [1813] */
    (xdc_Char)0x79,  /* [1814] */
    (xdc_Char)0x3a,  /* [1815] */
    (xdc_Char)0x20,  /* [1816] */
    (xdc_Char)0x74,  /* [1817] */
    (xdc_Char)0x68,  /* [1818] */
    (xdc_Char)0x65,  /* [1819] */
    (xdc_Char)0x20,  /* [1820] */
    (xdc_Char)0x6b,  /* [1821] */
    (xdc_Char)0x65,  /* [1822] */
    (xdc_Char)0x79,  /* [1823] */
    (xdc_Char)0x20,  /* [1824] */
    (xdc_Char)0x6d,  /* [1825] */
    (xdc_Char)0x75,  /* [1826] */
    (xdc_Char)0x73,  /* [1827] */
    (xdc_Char)0x74,  /* [1828] */
    (xdc_Char)0x20,  /* [1829] */
    (xdc_Char)0x62,  /* [1830] */
    (xdc_Char)0x65,  /* [1831] */
    (xdc_Char)0x20,  /* [1832] */
    (xdc_Char)0x73,  /* [1833] */
    (xdc_Char)0x65,  /* [1834] */
    (xdc_Char)0x74,  /* [1835] */
    (xdc_Char)0x20,  /* [1836] */
    (xdc_Char)0x74,  /* [1837] */
    (xdc_Char)0x6f,  /* [1838] */
    (xdc_Char)0x20,  /* [1839] */
    (xdc_Char)0x61,  /* [1840] */
    (xdc_Char)0x20,  /* [1841] */
    (xdc_Char)0x6e,  /* [1842] */
    (xdc_Char)0x6f,  /* [1843] */
    (xdc_Char)0x6e,  /* [1844] */
    (xdc_Char)0x2d,  /* [1845] */
    (xdc_Char)0x64,  /* [1846] */
    (xdc_Char)0x65,  /* [1847] */
    (xdc_Char)0x66,  /* [1848] */
    (xdc_Char)0x61,  /* [1849] */
    (xdc_Char)0x75,  /* [1850] */
    (xdc_Char)0x6c,  /* [1851] */
    (xdc_Char)0x74,  /* [1852] */
    (xdc_Char)0x20,  /* [1853] */
    (xdc_Char)0x76,  /* [1854] */
    (xdc_Char)0x61,  /* [1855] */
    (xdc_Char)0x6c,  /* [1856] */
    (xdc_Char)0x75,  /* [1857] */
    (xdc_Char)0x65,  /* [1858] */
    (xdc_Char)0x0,  /* [1859] */
    (xdc_Char)0x41,  /* [1860] */
    (xdc_Char)0x5f,  /* [1861] */
    (xdc_Char)0x62,  /* [1862] */
    (xdc_Char)0x61,  /* [1863] */
    (xdc_Char)0x64,  /* [1864] */
    (xdc_Char)0x43,  /* [1865] */
    (xdc_Char)0x6f,  /* [1866] */
    (xdc_Char)0x6e,  /* [1867] */
    (xdc_Char)0x74,  /* [1868] */
    (xdc_Char)0x65,  /* [1869] */
    (xdc_Char)0x78,  /* [1870] */
    (xdc_Char)0x74,  /* [1871] */
    (xdc_Char)0x3a,  /* [1872] */
    (xdc_Char)0x20,  /* [1873] */
    (xdc_Char)0x62,  /* [1874] */
    (xdc_Char)0x61,  /* [1875] */
    (xdc_Char)0x64,  /* [1876] */
    (xdc_Char)0x20,  /* [1877] */
    (xdc_Char)0x63,  /* [1878] */
    (xdc_Char)0x61,  /* [1879] */
    (xdc_Char)0x6c,  /* [1880] */
    (xdc_Char)0x6c,  /* [1881] */
    (xdc_Char)0x69,  /* [1882] */
    (xdc_Char)0x6e,  /* [1883] */
    (xdc_Char)0x67,  /* [1884] */
    (xdc_Char)0x20,  /* [1885] */
    (xdc_Char)0x63,  /* [1886] */
    (xdc_Char)0x6f,  /* [1887] */
    (xdc_Char)0x6e,  /* [1888] */
    (xdc_Char)0x74,  /* [1889] */
    (xdc_Char)0x65,  /* [1890] */
    (xdc_Char)0x78,  /* [1891] */
    (xdc_Char)0x74,  /* [1892] */
    (xdc_Char)0x2e,  /* [1893] */
    (xdc_Char)0x20,  /* [1894] */
    (xdc_Char)0x4d,  /* [1895] */
    (xdc_Char)0x61,  /* [1896] */
    (xdc_Char)0x79,  /* [1897] */
    (xdc_Char)0x20,  /* [1898] */
    (xdc_Char)0x6e,  /* [1899] */
    (xdc_Char)0x6f,  /* [1900] */
    (xdc_Char)0x74,  /* [1901] */
    (xdc_Char)0x20,  /* [1902] */
    (xdc_Char)0x62,  /* [1903] */
    (xdc_Char)0x65,  /* [1904] */
    (xdc_Char)0x20,  /* [1905] */
    (xdc_Char)0x65,  /* [1906] */
    (xdc_Char)0x6e,  /* [1907] */
    (xdc_Char)0x74,  /* [1908] */
    (xdc_Char)0x65,  /* [1909] */
    (xdc_Char)0x72,  /* [1910] */
    (xdc_Char)0x65,  /* [1911] */
    (xdc_Char)0x64,  /* [1912] */
    (xdc_Char)0x20,  /* [1913] */
    (xdc_Char)0x66,  /* [1914] */
    (xdc_Char)0x72,  /* [1915] */
    (xdc_Char)0x6f,  /* [1916] */
    (xdc_Char)0x6d,  /* [1917] */
    (xdc_Char)0x20,  /* [1918] */
    (xdc_Char)0x61,  /* [1919] */
    (xdc_Char)0x20,  /* [1920] */
    (xdc_Char)0x68,  /* [1921] */
    (xdc_Char)0x61,  /* [1922] */
    (xdc_Char)0x72,  /* [1923] */
    (xdc_Char)0x64,  /* [1924] */
    (xdc_Char)0x77,  /* [1925] */
    (xdc_Char)0x61,  /* [1926] */
    (xdc_Char)0x72,  /* [1927] */
    (xdc_Char)0x65,  /* [1928] */
    (xdc_Char)0x20,  /* [1929] */
    (xdc_Char)0x69,  /* [1930] */
    (xdc_Char)0x6e,  /* [1931] */
    (xdc_Char)0x74,  /* [1932] */
    (xdc_Char)0x65,  /* [1933] */
    (xdc_Char)0x72,  /* [1934] */
    (xdc_Char)0x72,  /* [1935] */
    (xdc_Char)0x75,  /* [1936] */
    (xdc_Char)0x70,  /* [1937] */
    (xdc_Char)0x74,  /* [1938] */
    (xdc_Char)0x20,  /* [1939] */
    (xdc_Char)0x74,  /* [1940] */
    (xdc_Char)0x68,  /* [1941] */
    (xdc_Char)0x72,  /* [1942] */
    (xdc_Char)0x65,  /* [1943] */
    (xdc_Char)0x61,  /* [1944] */
    (xdc_Char)0x64,  /* [1945] */
    (xdc_Char)0x2e,  /* [1946] */
    (xdc_Char)0x0,  /* [1947] */
    (xdc_Char)0x41,  /* [1948] */
    (xdc_Char)0x5f,  /* [1949] */
    (xdc_Char)0x62,  /* [1950] */
    (xdc_Char)0x61,  /* [1951] */
    (xdc_Char)0x64,  /* [1952] */
    (xdc_Char)0x43,  /* [1953] */
    (xdc_Char)0x6f,  /* [1954] */
    (xdc_Char)0x6e,  /* [1955] */
    (xdc_Char)0x74,  /* [1956] */
    (xdc_Char)0x65,  /* [1957] */
    (xdc_Char)0x78,  /* [1958] */
    (xdc_Char)0x74,  /* [1959] */
    (xdc_Char)0x3a,  /* [1960] */
    (xdc_Char)0x20,  /* [1961] */
    (xdc_Char)0x62,  /* [1962] */
    (xdc_Char)0x61,  /* [1963] */
    (xdc_Char)0x64,  /* [1964] */
    (xdc_Char)0x20,  /* [1965] */
    (xdc_Char)0x63,  /* [1966] */
    (xdc_Char)0x61,  /* [1967] */
    (xdc_Char)0x6c,  /* [1968] */
    (xdc_Char)0x6c,  /* [1969] */
    (xdc_Char)0x69,  /* [1970] */
    (xdc_Char)0x6e,  /* [1971] */
    (xdc_Char)0x67,  /* [1972] */
    (xdc_Char)0x20,  /* [1973] */
    (xdc_Char)0x63,  /* [1974] */
    (xdc_Char)0x6f,  /* [1975] */
    (xdc_Char)0x6e,  /* [1976] */
    (xdc_Char)0x74,  /* [1977] */
    (xdc_Char)0x65,  /* [1978] */
    (xdc_Char)0x78,  /* [1979] */
    (xdc_Char)0x74,  /* [1980] */
    (xdc_Char)0x2e,  /* [1981] */
    (xdc_Char)0x20,  /* [1982] */
    (xdc_Char)0x4d,  /* [1983] */
    (xdc_Char)0x61,  /* [1984] */
    (xdc_Char)0x79,  /* [1985] */
    (xdc_Char)0x20,  /* [1986] */
    (xdc_Char)0x6e,  /* [1987] */
    (xdc_Char)0x6f,  /* [1988] */
    (xdc_Char)0x74,  /* [1989] */
    (xdc_Char)0x20,  /* [1990] */
    (xdc_Char)0x62,  /* [1991] */
    (xdc_Char)0x65,  /* [1992] */
    (xdc_Char)0x20,  /* [1993] */
    (xdc_Char)0x65,  /* [1994] */
    (xdc_Char)0x6e,  /* [1995] */
    (xdc_Char)0x74,  /* [1996] */
    (xdc_Char)0x65,  /* [1997] */
    (xdc_Char)0x72,  /* [1998] */
    (xdc_Char)0x65,  /* [1999] */
    (xdc_Char)0x64,  /* [2000] */
    (xdc_Char)0x20,  /* [2001] */
    (xdc_Char)0x66,  /* [2002] */
    (xdc_Char)0x72,  /* [2003] */
    (xdc_Char)0x6f,  /* [2004] */
    (xdc_Char)0x6d,  /* [2005] */
    (xdc_Char)0x20,  /* [2006] */
    (xdc_Char)0x61,  /* [2007] */
    (xdc_Char)0x20,  /* [2008] */
    (xdc_Char)0x73,  /* [2009] */
    (xdc_Char)0x6f,  /* [2010] */
    (xdc_Char)0x66,  /* [2011] */
    (xdc_Char)0x74,  /* [2012] */
    (xdc_Char)0x77,  /* [2013] */
    (xdc_Char)0x61,  /* [2014] */
    (xdc_Char)0x72,  /* [2015] */
    (xdc_Char)0x65,  /* [2016] */
    (xdc_Char)0x20,  /* [2017] */
    (xdc_Char)0x6f,  /* [2018] */
    (xdc_Char)0x72,  /* [2019] */
    (xdc_Char)0x20,  /* [2020] */
    (xdc_Char)0x68,  /* [2021] */
    (xdc_Char)0x61,  /* [2022] */
    (xdc_Char)0x72,  /* [2023] */
    (xdc_Char)0x64,  /* [2024] */
    (xdc_Char)0x77,  /* [2025] */
    (xdc_Char)0x61,  /* [2026] */
    (xdc_Char)0x72,  /* [2027] */
    (xdc_Char)0x65,  /* [2028] */
    (xdc_Char)0x20,  /* [2029] */
    (xdc_Char)0x69,  /* [2030] */
    (xdc_Char)0x6e,  /* [2031] */
    (xdc_Char)0x74,  /* [2032] */
    (xdc_Char)0x65,  /* [2033] */
    (xdc_Char)0x72,  /* [2034] */
    (xdc_Char)0x72,  /* [2035] */
    (xdc_Char)0x75,  /* [2036] */
    (xdc_Char)0x70,  /* [2037] */
    (xdc_Char)0x74,  /* [2038] */
    (xdc_Char)0x20,  /* [2039] */
    (xdc_Char)0x74,  /* [2040] */
    (xdc_Char)0x68,  /* [2041] */
    (xdc_Char)0x72,  /* [2042] */
    (xdc_Char)0x65,  /* [2043] */
    (xdc_Char)0x61,  /* [2044] */
    (xdc_Char)0x64,  /* [2045] */
    (xdc_Char)0x2e,  /* [2046] */
    (xdc_Char)0x0,  /* [2047] */
    (xdc_Char)0x41,  /* [2048] */
    (xdc_Char)0x5f,  /* [2049] */
    (xdc_Char)0x62,  /* [2050] */
    (xdc_Char)0x61,  /* [2051] */
    (xdc_Char)0x64,  /* [2052] */
    (xdc_Char)0x43,  /* [2053] */
    (xdc_Char)0x6f,  /* [2054] */
    (xdc_Char)0x6e,  /* [2055] */
    (xdc_Char)0x74,  /* [2056] */
    (xdc_Char)0x65,  /* [2057] */
    (xdc_Char)0x78,  /* [2058] */
    (xdc_Char)0x74,  /* [2059] */
    (xdc_Char)0x3a,  /* [2060] */
    (xdc_Char)0x20,  /* [2061] */
    (xdc_Char)0x62,  /* [2062] */
    (xdc_Char)0x61,  /* [2063] */
    (xdc_Char)0x64,  /* [2064] */
    (xdc_Char)0x20,  /* [2065] */
    (xdc_Char)0x63,  /* [2066] */
    (xdc_Char)0x61,  /* [2067] */
    (xdc_Char)0x6c,  /* [2068] */
    (xdc_Char)0x6c,  /* [2069] */
    (xdc_Char)0x69,  /* [2070] */
    (xdc_Char)0x6e,  /* [2071] */
    (xdc_Char)0x67,  /* [2072] */
    (xdc_Char)0x20,  /* [2073] */
    (xdc_Char)0x63,  /* [2074] */
    (xdc_Char)0x6f,  /* [2075] */
    (xdc_Char)0x6e,  /* [2076] */
    (xdc_Char)0x74,  /* [2077] */
    (xdc_Char)0x65,  /* [2078] */
    (xdc_Char)0x78,  /* [2079] */
    (xdc_Char)0x74,  /* [2080] */
    (xdc_Char)0x2e,  /* [2081] */
    (xdc_Char)0x20,  /* [2082] */
    (xdc_Char)0x53,  /* [2083] */
    (xdc_Char)0x65,  /* [2084] */
    (xdc_Char)0x65,  /* [2085] */
    (xdc_Char)0x20,  /* [2086] */
    (xdc_Char)0x47,  /* [2087] */
    (xdc_Char)0x61,  /* [2088] */
    (xdc_Char)0x74,  /* [2089] */
    (xdc_Char)0x65,  /* [2090] */
    (xdc_Char)0x4d,  /* [2091] */
    (xdc_Char)0x75,  /* [2092] */
    (xdc_Char)0x74,  /* [2093] */
    (xdc_Char)0x65,  /* [2094] */
    (xdc_Char)0x78,  /* [2095] */
    (xdc_Char)0x50,  /* [2096] */
    (xdc_Char)0x72,  /* [2097] */
    (xdc_Char)0x69,  /* [2098] */
    (xdc_Char)0x20,  /* [2099] */
    (xdc_Char)0x41,  /* [2100] */
    (xdc_Char)0x50,  /* [2101] */
    (xdc_Char)0x49,  /* [2102] */
    (xdc_Char)0x20,  /* [2103] */
    (xdc_Char)0x64,  /* [2104] */
    (xdc_Char)0x6f,  /* [2105] */
    (xdc_Char)0x63,  /* [2106] */
    (xdc_Char)0x20,  /* [2107] */
    (xdc_Char)0x66,  /* [2108] */
    (xdc_Char)0x6f,  /* [2109] */
    (xdc_Char)0x72,  /* [2110] */
    (xdc_Char)0x20,  /* [2111] */
    (xdc_Char)0x64,  /* [2112] */
    (xdc_Char)0x65,  /* [2113] */
    (xdc_Char)0x74,  /* [2114] */
    (xdc_Char)0x61,  /* [2115] */
    (xdc_Char)0x69,  /* [2116] */
    (xdc_Char)0x6c,  /* [2117] */
    (xdc_Char)0x73,  /* [2118] */
    (xdc_Char)0x2e,  /* [2119] */
    (xdc_Char)0x0,  /* [2120] */
    (xdc_Char)0x41,  /* [2121] */
    (xdc_Char)0x5f,  /* [2122] */
    (xdc_Char)0x65,  /* [2123] */
    (xdc_Char)0x6e,  /* [2124] */
    (xdc_Char)0x74,  /* [2125] */
    (xdc_Char)0x65,  /* [2126] */
    (xdc_Char)0x72,  /* [2127] */
    (xdc_Char)0x54,  /* [2128] */
    (xdc_Char)0x61,  /* [2129] */
    (xdc_Char)0x73,  /* [2130] */
    (xdc_Char)0x6b,  /* [2131] */
    (xdc_Char)0x44,  /* [2132] */
    (xdc_Char)0x69,  /* [2133] */
    (xdc_Char)0x73,  /* [2134] */
    (xdc_Char)0x61,  /* [2135] */
    (xdc_Char)0x62,  /* [2136] */
    (xdc_Char)0x6c,  /* [2137] */
    (xdc_Char)0x65,  /* [2138] */
    (xdc_Char)0x64,  /* [2139] */
    (xdc_Char)0x3a,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x43,  /* [2142] */
    (xdc_Char)0x61,  /* [2143] */
    (xdc_Char)0x6e,  /* [2144] */
    (xdc_Char)0x6e,  /* [2145] */
    (xdc_Char)0x6f,  /* [2146] */
    (xdc_Char)0x74,  /* [2147] */
    (xdc_Char)0x20,  /* [2148] */
    (xdc_Char)0x63,  /* [2149] */
    (xdc_Char)0x61,  /* [2150] */
    (xdc_Char)0x6c,  /* [2151] */
    (xdc_Char)0x6c,  /* [2152] */
    (xdc_Char)0x20,  /* [2153] */
    (xdc_Char)0x47,  /* [2154] */
    (xdc_Char)0x61,  /* [2155] */
    (xdc_Char)0x74,  /* [2156] */
    (xdc_Char)0x65,  /* [2157] */
    (xdc_Char)0x4d,  /* [2158] */
    (xdc_Char)0x75,  /* [2159] */
    (xdc_Char)0x74,  /* [2160] */
    (xdc_Char)0x65,  /* [2161] */
    (xdc_Char)0x78,  /* [2162] */
    (xdc_Char)0x50,  /* [2163] */
    (xdc_Char)0x72,  /* [2164] */
    (xdc_Char)0x69,  /* [2165] */
    (xdc_Char)0x5f,  /* [2166] */
    (xdc_Char)0x65,  /* [2167] */
    (xdc_Char)0x6e,  /* [2168] */
    (xdc_Char)0x74,  /* [2169] */
    (xdc_Char)0x65,  /* [2170] */
    (xdc_Char)0x72,  /* [2171] */
    (xdc_Char)0x28,  /* [2172] */
    (xdc_Char)0x29,  /* [2173] */
    (xdc_Char)0x20,  /* [2174] */
    (xdc_Char)0x77,  /* [2175] */
    (xdc_Char)0x68,  /* [2176] */
    (xdc_Char)0x69,  /* [2177] */
    (xdc_Char)0x6c,  /* [2178] */
    (xdc_Char)0x65,  /* [2179] */
    (xdc_Char)0x20,  /* [2180] */
    (xdc_Char)0x74,  /* [2181] */
    (xdc_Char)0x68,  /* [2182] */
    (xdc_Char)0x65,  /* [2183] */
    (xdc_Char)0x20,  /* [2184] */
    (xdc_Char)0x54,  /* [2185] */
    (xdc_Char)0x61,  /* [2186] */
    (xdc_Char)0x73,  /* [2187] */
    (xdc_Char)0x6b,  /* [2188] */
    (xdc_Char)0x20,  /* [2189] */
    (xdc_Char)0x6f,  /* [2190] */
    (xdc_Char)0x72,  /* [2191] */
    (xdc_Char)0x20,  /* [2192] */
    (xdc_Char)0x53,  /* [2193] */
    (xdc_Char)0x77,  /* [2194] */
    (xdc_Char)0x69,  /* [2195] */
    (xdc_Char)0x20,  /* [2196] */
    (xdc_Char)0x73,  /* [2197] */
    (xdc_Char)0x63,  /* [2198] */
    (xdc_Char)0x68,  /* [2199] */
    (xdc_Char)0x65,  /* [2200] */
    (xdc_Char)0x64,  /* [2201] */
    (xdc_Char)0x75,  /* [2202] */
    (xdc_Char)0x6c,  /* [2203] */
    (xdc_Char)0x65,  /* [2204] */
    (xdc_Char)0x72,  /* [2205] */
    (xdc_Char)0x20,  /* [2206] */
    (xdc_Char)0x69,  /* [2207] */
    (xdc_Char)0x73,  /* [2208] */
    (xdc_Char)0x20,  /* [2209] */
    (xdc_Char)0x64,  /* [2210] */
    (xdc_Char)0x69,  /* [2211] */
    (xdc_Char)0x73,  /* [2212] */
    (xdc_Char)0x61,  /* [2213] */
    (xdc_Char)0x62,  /* [2214] */
    (xdc_Char)0x6c,  /* [2215] */
    (xdc_Char)0x65,  /* [2216] */
    (xdc_Char)0x64,  /* [2217] */
    (xdc_Char)0x2e,  /* [2218] */
    (xdc_Char)0x0,  /* [2219] */
    (xdc_Char)0x41,  /* [2220] */
    (xdc_Char)0x5f,  /* [2221] */
    (xdc_Char)0x62,  /* [2222] */
    (xdc_Char)0x61,  /* [2223] */
    (xdc_Char)0x64,  /* [2224] */
    (xdc_Char)0x43,  /* [2225] */
    (xdc_Char)0x6f,  /* [2226] */
    (xdc_Char)0x6e,  /* [2227] */
    (xdc_Char)0x74,  /* [2228] */
    (xdc_Char)0x65,  /* [2229] */
    (xdc_Char)0x78,  /* [2230] */
    (xdc_Char)0x74,  /* [2231] */
    (xdc_Char)0x3a,  /* [2232] */
    (xdc_Char)0x20,  /* [2233] */
    (xdc_Char)0x62,  /* [2234] */
    (xdc_Char)0x61,  /* [2235] */
    (xdc_Char)0x64,  /* [2236] */
    (xdc_Char)0x20,  /* [2237] */
    (xdc_Char)0x63,  /* [2238] */
    (xdc_Char)0x61,  /* [2239] */
    (xdc_Char)0x6c,  /* [2240] */
    (xdc_Char)0x6c,  /* [2241] */
    (xdc_Char)0x69,  /* [2242] */
    (xdc_Char)0x6e,  /* [2243] */
    (xdc_Char)0x67,  /* [2244] */
    (xdc_Char)0x20,  /* [2245] */
    (xdc_Char)0x63,  /* [2246] */
    (xdc_Char)0x6f,  /* [2247] */
    (xdc_Char)0x6e,  /* [2248] */
    (xdc_Char)0x74,  /* [2249] */
    (xdc_Char)0x65,  /* [2250] */
    (xdc_Char)0x78,  /* [2251] */
    (xdc_Char)0x74,  /* [2252] */
    (xdc_Char)0x2e,  /* [2253] */
    (xdc_Char)0x20,  /* [2254] */
    (xdc_Char)0x53,  /* [2255] */
    (xdc_Char)0x65,  /* [2256] */
    (xdc_Char)0x65,  /* [2257] */
    (xdc_Char)0x20,  /* [2258] */
    (xdc_Char)0x47,  /* [2259] */
    (xdc_Char)0x61,  /* [2260] */
    (xdc_Char)0x74,  /* [2261] */
    (xdc_Char)0x65,  /* [2262] */
    (xdc_Char)0x4d,  /* [2263] */
    (xdc_Char)0x75,  /* [2264] */
    (xdc_Char)0x74,  /* [2265] */
    (xdc_Char)0x65,  /* [2266] */
    (xdc_Char)0x78,  /* [2267] */
    (xdc_Char)0x20,  /* [2268] */
    (xdc_Char)0x41,  /* [2269] */
    (xdc_Char)0x50,  /* [2270] */
    (xdc_Char)0x49,  /* [2271] */
    (xdc_Char)0x20,  /* [2272] */
    (xdc_Char)0x64,  /* [2273] */
    (xdc_Char)0x6f,  /* [2274] */
    (xdc_Char)0x63,  /* [2275] */
    (xdc_Char)0x20,  /* [2276] */
    (xdc_Char)0x66,  /* [2277] */
    (xdc_Char)0x6f,  /* [2278] */
    (xdc_Char)0x72,  /* [2279] */
    (xdc_Char)0x20,  /* [2280] */
    (xdc_Char)0x64,  /* [2281] */
    (xdc_Char)0x65,  /* [2282] */
    (xdc_Char)0x74,  /* [2283] */
    (xdc_Char)0x61,  /* [2284] */
    (xdc_Char)0x69,  /* [2285] */
    (xdc_Char)0x6c,  /* [2286] */
    (xdc_Char)0x73,  /* [2287] */
    (xdc_Char)0x2e,  /* [2288] */
    (xdc_Char)0x0,  /* [2289] */
    (xdc_Char)0x61,  /* [2290] */
    (xdc_Char)0x73,  /* [2291] */
    (xdc_Char)0x73,  /* [2292] */
    (xdc_Char)0x65,  /* [2293] */
    (xdc_Char)0x72,  /* [2294] */
    (xdc_Char)0x74,  /* [2295] */
    (xdc_Char)0x69,  /* [2296] */
    (xdc_Char)0x6f,  /* [2297] */
    (xdc_Char)0x6e,  /* [2298] */
    (xdc_Char)0x20,  /* [2299] */
    (xdc_Char)0x66,  /* [2300] */
    (xdc_Char)0x61,  /* [2301] */
    (xdc_Char)0x69,  /* [2302] */
    (xdc_Char)0x6c,  /* [2303] */
    (xdc_Char)0x75,  /* [2304] */
    (xdc_Char)0x72,  /* [2305] */
    (xdc_Char)0x65,  /* [2306] */
    (xdc_Char)0x25,  /* [2307] */
    (xdc_Char)0x73,  /* [2308] */
    (xdc_Char)0x25,  /* [2309] */
    (xdc_Char)0x73,  /* [2310] */
    (xdc_Char)0x0,  /* [2311] */
    (xdc_Char)0x25,  /* [2312] */
    (xdc_Char)0x24,  /* [2313] */
    (xdc_Char)0x53,  /* [2314] */
    (xdc_Char)0x0,  /* [2315] */
    (xdc_Char)0x6f,  /* [2316] */
    (xdc_Char)0x75,  /* [2317] */
    (xdc_Char)0x74,  /* [2318] */
    (xdc_Char)0x20,  /* [2319] */
    (xdc_Char)0x6f,  /* [2320] */
    (xdc_Char)0x66,  /* [2321] */
    (xdc_Char)0x20,  /* [2322] */
    (xdc_Char)0x6d,  /* [2323] */
    (xdc_Char)0x65,  /* [2324] */
    (xdc_Char)0x6d,  /* [2325] */
    (xdc_Char)0x6f,  /* [2326] */
    (xdc_Char)0x72,  /* [2327] */
    (xdc_Char)0x79,  /* [2328] */
    (xdc_Char)0x3a,  /* [2329] */
    (xdc_Char)0x20,  /* [2330] */
    (xdc_Char)0x68,  /* [2331] */
    (xdc_Char)0x65,  /* [2332] */
    (xdc_Char)0x61,  /* [2333] */
    (xdc_Char)0x70,  /* [2334] */
    (xdc_Char)0x3d,  /* [2335] */
    (xdc_Char)0x30,  /* [2336] */
    (xdc_Char)0x78,  /* [2337] */
    (xdc_Char)0x25,  /* [2338] */
    (xdc_Char)0x78,  /* [2339] */
    (xdc_Char)0x2c,  /* [2340] */
    (xdc_Char)0x20,  /* [2341] */
    (xdc_Char)0x73,  /* [2342] */
    (xdc_Char)0x69,  /* [2343] */
    (xdc_Char)0x7a,  /* [2344] */
    (xdc_Char)0x65,  /* [2345] */
    (xdc_Char)0x3d,  /* [2346] */
    (xdc_Char)0x25,  /* [2347] */
    (xdc_Char)0x75,  /* [2348] */
    (xdc_Char)0x0,  /* [2349] */
    (xdc_Char)0x25,  /* [2350] */
    (xdc_Char)0x73,  /* [2351] */
    (xdc_Char)0x20,  /* [2352] */
    (xdc_Char)0x30,  /* [2353] */
    (xdc_Char)0x78,  /* [2354] */
    (xdc_Char)0x25,  /* [2355] */
    (xdc_Char)0x78,  /* [2356] */
    (xdc_Char)0x0,  /* [2357] */
    (xdc_Char)0x45,  /* [2358] */
    (xdc_Char)0x5f,  /* [2359] */
    (xdc_Char)0x62,  /* [2360] */
    (xdc_Char)0x61,  /* [2361] */
    (xdc_Char)0x64,  /* [2362] */
    (xdc_Char)0x4c,  /* [2363] */
    (xdc_Char)0x65,  /* [2364] */
    (xdc_Char)0x76,  /* [2365] */
    (xdc_Char)0x65,  /* [2366] */
    (xdc_Char)0x6c,  /* [2367] */
    (xdc_Char)0x3a,  /* [2368] */
    (xdc_Char)0x20,  /* [2369] */
    (xdc_Char)0x42,  /* [2370] */
    (xdc_Char)0x61,  /* [2371] */
    (xdc_Char)0x64,  /* [2372] */
    (xdc_Char)0x20,  /* [2373] */
    (xdc_Char)0x66,  /* [2374] */
    (xdc_Char)0x69,  /* [2375] */
    (xdc_Char)0x6c,  /* [2376] */
    (xdc_Char)0x74,  /* [2377] */
    (xdc_Char)0x65,  /* [2378] */
    (xdc_Char)0x72,  /* [2379] */
    (xdc_Char)0x20,  /* [2380] */
    (xdc_Char)0x6c,  /* [2381] */
    (xdc_Char)0x65,  /* [2382] */
    (xdc_Char)0x76,  /* [2383] */
    (xdc_Char)0x65,  /* [2384] */
    (xdc_Char)0x6c,  /* [2385] */
    (xdc_Char)0x20,  /* [2386] */
    (xdc_Char)0x76,  /* [2387] */
    (xdc_Char)0x61,  /* [2388] */
    (xdc_Char)0x6c,  /* [2389] */
    (xdc_Char)0x75,  /* [2390] */
    (xdc_Char)0x65,  /* [2391] */
    (xdc_Char)0x3a,  /* [2392] */
    (xdc_Char)0x20,  /* [2393] */
    (xdc_Char)0x25,  /* [2394] */
    (xdc_Char)0x64,  /* [2395] */
    (xdc_Char)0x0,  /* [2396] */
    (xdc_Char)0x66,  /* [2397] */
    (xdc_Char)0x72,  /* [2398] */
    (xdc_Char)0x65,  /* [2399] */
    (xdc_Char)0x65,  /* [2400] */
    (xdc_Char)0x28,  /* [2401] */
    (xdc_Char)0x29,  /* [2402] */
    (xdc_Char)0x20,  /* [2403] */
    (xdc_Char)0x69,  /* [2404] */
    (xdc_Char)0x6e,  /* [2405] */
    (xdc_Char)0x76,  /* [2406] */
    (xdc_Char)0x61,  /* [2407] */
    (xdc_Char)0x6c,  /* [2408] */
    (xdc_Char)0x69,  /* [2409] */
    (xdc_Char)0x64,  /* [2410] */
    (xdc_Char)0x20,  /* [2411] */
    (xdc_Char)0x69,  /* [2412] */
    (xdc_Char)0x6e,  /* [2413] */
    (xdc_Char)0x20,  /* [2414] */
    (xdc_Char)0x67,  /* [2415] */
    (xdc_Char)0x72,  /* [2416] */
    (xdc_Char)0x6f,  /* [2417] */
    (xdc_Char)0x77,  /* [2418] */
    (xdc_Char)0x74,  /* [2419] */
    (xdc_Char)0x68,  /* [2420] */
    (xdc_Char)0x2d,  /* [2421] */
    (xdc_Char)0x6f,  /* [2422] */
    (xdc_Char)0x6e,  /* [2423] */
    (xdc_Char)0x6c,  /* [2424] */
    (xdc_Char)0x79,  /* [2425] */
    (xdc_Char)0x20,  /* [2426] */
    (xdc_Char)0x48,  /* [2427] */
    (xdc_Char)0x65,  /* [2428] */
    (xdc_Char)0x61,  /* [2429] */
    (xdc_Char)0x70,  /* [2430] */
    (xdc_Char)0x4d,  /* [2431] */
    (xdc_Char)0x69,  /* [2432] */
    (xdc_Char)0x6e,  /* [2433] */
    (xdc_Char)0x0,  /* [2434] */
    (xdc_Char)0x54,  /* [2435] */
    (xdc_Char)0x68,  /* [2436] */
    (xdc_Char)0x65,  /* [2437] */
    (xdc_Char)0x20,  /* [2438] */
    (xdc_Char)0x52,  /* [2439] */
    (xdc_Char)0x54,  /* [2440] */
    (xdc_Char)0x53,  /* [2441] */
    (xdc_Char)0x20,  /* [2442] */
    (xdc_Char)0x68,  /* [2443] */
    (xdc_Char)0x65,  /* [2444] */
    (xdc_Char)0x61,  /* [2445] */
    (xdc_Char)0x70,  /* [2446] */
    (xdc_Char)0x20,  /* [2447] */
    (xdc_Char)0x69,  /* [2448] */
    (xdc_Char)0x73,  /* [2449] */
    (xdc_Char)0x20,  /* [2450] */
    (xdc_Char)0x75,  /* [2451] */
    (xdc_Char)0x73,  /* [2452] */
    (xdc_Char)0x65,  /* [2453] */
    (xdc_Char)0x64,  /* [2454] */
    (xdc_Char)0x20,  /* [2455] */
    (xdc_Char)0x75,  /* [2456] */
    (xdc_Char)0x70,  /* [2457] */
    (xdc_Char)0x2e,  /* [2458] */
    (xdc_Char)0x20,  /* [2459] */
    (xdc_Char)0x45,  /* [2460] */
    (xdc_Char)0x78,  /* [2461] */
    (xdc_Char)0x61,  /* [2462] */
    (xdc_Char)0x6d,  /* [2463] */
    (xdc_Char)0x69,  /* [2464] */
    (xdc_Char)0x6e,  /* [2465] */
    (xdc_Char)0x65,  /* [2466] */
    (xdc_Char)0x20,  /* [2467] */
    (xdc_Char)0x50,  /* [2468] */
    (xdc_Char)0x72,  /* [2469] */
    (xdc_Char)0x6f,  /* [2470] */
    (xdc_Char)0x67,  /* [2471] */
    (xdc_Char)0x72,  /* [2472] */
    (xdc_Char)0x61,  /* [2473] */
    (xdc_Char)0x6d,  /* [2474] */
    (xdc_Char)0x2e,  /* [2475] */
    (xdc_Char)0x68,  /* [2476] */
    (xdc_Char)0x65,  /* [2477] */
    (xdc_Char)0x61,  /* [2478] */
    (xdc_Char)0x70,  /* [2479] */
    (xdc_Char)0x2e,  /* [2480] */
    (xdc_Char)0x0,  /* [2481] */
    (xdc_Char)0x45,  /* [2482] */
    (xdc_Char)0x5f,  /* [2483] */
    (xdc_Char)0x62,  /* [2484] */
    (xdc_Char)0x61,  /* [2485] */
    (xdc_Char)0x64,  /* [2486] */
    (xdc_Char)0x43,  /* [2487] */
    (xdc_Char)0x6f,  /* [2488] */
    (xdc_Char)0x6d,  /* [2489] */
    (xdc_Char)0x6d,  /* [2490] */
    (xdc_Char)0x61,  /* [2491] */
    (xdc_Char)0x6e,  /* [2492] */
    (xdc_Char)0x64,  /* [2493] */
    (xdc_Char)0x3a,  /* [2494] */
    (xdc_Char)0x20,  /* [2495] */
    (xdc_Char)0x52,  /* [2496] */
    (xdc_Char)0x65,  /* [2497] */
    (xdc_Char)0x63,  /* [2498] */
    (xdc_Char)0x65,  /* [2499] */
    (xdc_Char)0x69,  /* [2500] */
    (xdc_Char)0x76,  /* [2501] */
    (xdc_Char)0x65,  /* [2502] */
    (xdc_Char)0x64,  /* [2503] */
    (xdc_Char)0x20,  /* [2504] */
    (xdc_Char)0x69,  /* [2505] */
    (xdc_Char)0x6e,  /* [2506] */
    (xdc_Char)0x76,  /* [2507] */
    (xdc_Char)0x61,  /* [2508] */
    (xdc_Char)0x6c,  /* [2509] */
    (xdc_Char)0x69,  /* [2510] */
    (xdc_Char)0x64,  /* [2511] */
    (xdc_Char)0x20,  /* [2512] */
    (xdc_Char)0x63,  /* [2513] */
    (xdc_Char)0x6f,  /* [2514] */
    (xdc_Char)0x6d,  /* [2515] */
    (xdc_Char)0x6d,  /* [2516] */
    (xdc_Char)0x61,  /* [2517] */
    (xdc_Char)0x6e,  /* [2518] */
    (xdc_Char)0x64,  /* [2519] */
    (xdc_Char)0x2c,  /* [2520] */
    (xdc_Char)0x20,  /* [2521] */
    (xdc_Char)0x69,  /* [2522] */
    (xdc_Char)0x64,  /* [2523] */
    (xdc_Char)0x3a,  /* [2524] */
    (xdc_Char)0x20,  /* [2525] */
    (xdc_Char)0x25,  /* [2526] */
    (xdc_Char)0x64,  /* [2527] */
    (xdc_Char)0x2e,  /* [2528] */
    (xdc_Char)0x0,  /* [2529] */
    (xdc_Char)0x45,  /* [2530] */
    (xdc_Char)0x5f,  /* [2531] */
    (xdc_Char)0x61,  /* [2532] */
    (xdc_Char)0x6c,  /* [2533] */
    (xdc_Char)0x72,  /* [2534] */
    (xdc_Char)0x65,  /* [2535] */
    (xdc_Char)0x61,  /* [2536] */
    (xdc_Char)0x64,  /* [2537] */
    (xdc_Char)0x79,  /* [2538] */
    (xdc_Char)0x44,  /* [2539] */
    (xdc_Char)0x65,  /* [2540] */
    (xdc_Char)0x66,  /* [2541] */
    (xdc_Char)0x69,  /* [2542] */
    (xdc_Char)0x6e,  /* [2543] */
    (xdc_Char)0x65,  /* [2544] */
    (xdc_Char)0x64,  /* [2545] */
    (xdc_Char)0x3a,  /* [2546] */
    (xdc_Char)0x20,  /* [2547] */
    (xdc_Char)0x48,  /* [2548] */
    (xdc_Char)0x77,  /* [2549] */
    (xdc_Char)0x69,  /* [2550] */
    (xdc_Char)0x20,  /* [2551] */
    (xdc_Char)0x61,  /* [2552] */
    (xdc_Char)0x6c,  /* [2553] */
    (xdc_Char)0x72,  /* [2554] */
    (xdc_Char)0x65,  /* [2555] */
    (xdc_Char)0x61,  /* [2556] */
    (xdc_Char)0x64,  /* [2557] */
    (xdc_Char)0x79,  /* [2558] */
    (xdc_Char)0x20,  /* [2559] */
    (xdc_Char)0x64,  /* [2560] */
    (xdc_Char)0x65,  /* [2561] */
    (xdc_Char)0x66,  /* [2562] */
    (xdc_Char)0x69,  /* [2563] */
    (xdc_Char)0x6e,  /* [2564] */
    (xdc_Char)0x65,  /* [2565] */
    (xdc_Char)0x64,  /* [2566] */
    (xdc_Char)0x3a,  /* [2567] */
    (xdc_Char)0x20,  /* [2568] */
    (xdc_Char)0x69,  /* [2569] */
    (xdc_Char)0x6e,  /* [2570] */
    (xdc_Char)0x74,  /* [2571] */
    (xdc_Char)0x72,  /* [2572] */
    (xdc_Char)0x23,  /* [2573] */
    (xdc_Char)0x20,  /* [2574] */
    (xdc_Char)0x25,  /* [2575] */
    (xdc_Char)0x64,  /* [2576] */
    (xdc_Char)0x0,  /* [2577] */
    (xdc_Char)0x45,  /* [2578] */
    (xdc_Char)0x5f,  /* [2579] */
    (xdc_Char)0x6e,  /* [2580] */
    (xdc_Char)0x6f,  /* [2581] */
    (xdc_Char)0x74,  /* [2582] */
    (xdc_Char)0x49,  /* [2583] */
    (xdc_Char)0x6d,  /* [2584] */
    (xdc_Char)0x70,  /* [2585] */
    (xdc_Char)0x6c,  /* [2586] */
    (xdc_Char)0x65,  /* [2587] */
    (xdc_Char)0x6d,  /* [2588] */
    (xdc_Char)0x65,  /* [2589] */
    (xdc_Char)0x6e,  /* [2590] */
    (xdc_Char)0x74,  /* [2591] */
    (xdc_Char)0x65,  /* [2592] */
    (xdc_Char)0x64,  /* [2593] */
    (xdc_Char)0x3a,  /* [2594] */
    (xdc_Char)0x20,  /* [2595] */
    (xdc_Char)0x46,  /* [2596] */
    (xdc_Char)0x75,  /* [2597] */
    (xdc_Char)0x6e,  /* [2598] */
    (xdc_Char)0x63,  /* [2599] */
    (xdc_Char)0x74,  /* [2600] */
    (xdc_Char)0x69,  /* [2601] */
    (xdc_Char)0x6f,  /* [2602] */
    (xdc_Char)0x6e,  /* [2603] */
    (xdc_Char)0x20,  /* [2604] */
    (xdc_Char)0x6e,  /* [2605] */
    (xdc_Char)0x6f,  /* [2606] */
    (xdc_Char)0x74,  /* [2607] */
    (xdc_Char)0x20,  /* [2608] */
    (xdc_Char)0x69,  /* [2609] */
    (xdc_Char)0x6d,  /* [2610] */
    (xdc_Char)0x70,  /* [2611] */
    (xdc_Char)0x6c,  /* [2612] */
    (xdc_Char)0x65,  /* [2613] */
    (xdc_Char)0x6d,  /* [2614] */
    (xdc_Char)0x65,  /* [2615] */
    (xdc_Char)0x6e,  /* [2616] */
    (xdc_Char)0x74,  /* [2617] */
    (xdc_Char)0x65,  /* [2618] */
    (xdc_Char)0x64,  /* [2619] */
    (xdc_Char)0x3a,  /* [2620] */
    (xdc_Char)0x20,  /* [2621] */
    (xdc_Char)0x25,  /* [2622] */
    (xdc_Char)0x73,  /* [2623] */
    (xdc_Char)0x0,  /* [2624] */
    (xdc_Char)0x45,  /* [2625] */
    (xdc_Char)0x5f,  /* [2626] */
    (xdc_Char)0x69,  /* [2627] */
    (xdc_Char)0x6e,  /* [2628] */
    (xdc_Char)0x76,  /* [2629] */
    (xdc_Char)0x61,  /* [2630] */
    (xdc_Char)0x6c,  /* [2631] */
    (xdc_Char)0x69,  /* [2632] */
    (xdc_Char)0x64,  /* [2633] */
    (xdc_Char)0x54,  /* [2634] */
    (xdc_Char)0x69,  /* [2635] */
    (xdc_Char)0x6d,  /* [2636] */
    (xdc_Char)0x65,  /* [2637] */
    (xdc_Char)0x72,  /* [2638] */
    (xdc_Char)0x3a,  /* [2639] */
    (xdc_Char)0x20,  /* [2640] */
    (xdc_Char)0x49,  /* [2641] */
    (xdc_Char)0x6e,  /* [2642] */
    (xdc_Char)0x76,  /* [2643] */
    (xdc_Char)0x61,  /* [2644] */
    (xdc_Char)0x6c,  /* [2645] */
    (xdc_Char)0x69,  /* [2646] */
    (xdc_Char)0x64,  /* [2647] */
    (xdc_Char)0x20,  /* [2648] */
    (xdc_Char)0x54,  /* [2649] */
    (xdc_Char)0x69,  /* [2650] */
    (xdc_Char)0x6d,  /* [2651] */
    (xdc_Char)0x65,  /* [2652] */
    (xdc_Char)0x72,  /* [2653] */
    (xdc_Char)0x20,  /* [2654] */
    (xdc_Char)0x49,  /* [2655] */
    (xdc_Char)0x64,  /* [2656] */
    (xdc_Char)0x20,  /* [2657] */
    (xdc_Char)0x25,  /* [2658] */
    (xdc_Char)0x64,  /* [2659] */
    (xdc_Char)0x0,  /* [2660] */
    (xdc_Char)0x45,  /* [2661] */
    (xdc_Char)0x5f,  /* [2662] */
    (xdc_Char)0x6e,  /* [2663] */
    (xdc_Char)0x6f,  /* [2664] */
    (xdc_Char)0x74,  /* [2665] */
    (xdc_Char)0x41,  /* [2666] */
    (xdc_Char)0x76,  /* [2667] */
    (xdc_Char)0x61,  /* [2668] */
    (xdc_Char)0x69,  /* [2669] */
    (xdc_Char)0x6c,  /* [2670] */
    (xdc_Char)0x61,  /* [2671] */
    (xdc_Char)0x62,  /* [2672] */
    (xdc_Char)0x6c,  /* [2673] */
    (xdc_Char)0x65,  /* [2674] */
    (xdc_Char)0x3a,  /* [2675] */
    (xdc_Char)0x20,  /* [2676] */
    (xdc_Char)0x54,  /* [2677] */
    (xdc_Char)0x69,  /* [2678] */
    (xdc_Char)0x6d,  /* [2679] */
    (xdc_Char)0x65,  /* [2680] */
    (xdc_Char)0x72,  /* [2681] */
    (xdc_Char)0x20,  /* [2682] */
    (xdc_Char)0x6e,  /* [2683] */
    (xdc_Char)0x6f,  /* [2684] */
    (xdc_Char)0x74,  /* [2685] */
    (xdc_Char)0x20,  /* [2686] */
    (xdc_Char)0x61,  /* [2687] */
    (xdc_Char)0x76,  /* [2688] */
    (xdc_Char)0x61,  /* [2689] */
    (xdc_Char)0x69,  /* [2690] */
    (xdc_Char)0x6c,  /* [2691] */
    (xdc_Char)0x61,  /* [2692] */
    (xdc_Char)0x62,  /* [2693] */
    (xdc_Char)0x6c,  /* [2694] */
    (xdc_Char)0x65,  /* [2695] */
    (xdc_Char)0x20,  /* [2696] */
    (xdc_Char)0x25,  /* [2697] */
    (xdc_Char)0x64,  /* [2698] */
    (xdc_Char)0x0,  /* [2699] */
    (xdc_Char)0x45,  /* [2700] */
    (xdc_Char)0x5f,  /* [2701] */
    (xdc_Char)0x63,  /* [2702] */
    (xdc_Char)0x61,  /* [2703] */
    (xdc_Char)0x6e,  /* [2704] */
    (xdc_Char)0x6e,  /* [2705] */
    (xdc_Char)0x6f,  /* [2706] */
    (xdc_Char)0x74,  /* [2707] */
    (xdc_Char)0x53,  /* [2708] */
    (xdc_Char)0x75,  /* [2709] */
    (xdc_Char)0x70,  /* [2710] */
    (xdc_Char)0x70,  /* [2711] */
    (xdc_Char)0x6f,  /* [2712] */
    (xdc_Char)0x72,  /* [2713] */
    (xdc_Char)0x74,  /* [2714] */
    (xdc_Char)0x3a,  /* [2715] */
    (xdc_Char)0x20,  /* [2716] */
    (xdc_Char)0x54,  /* [2717] */
    (xdc_Char)0x69,  /* [2718] */
    (xdc_Char)0x6d,  /* [2719] */
    (xdc_Char)0x65,  /* [2720] */
    (xdc_Char)0x72,  /* [2721] */
    (xdc_Char)0x20,  /* [2722] */
    (xdc_Char)0x63,  /* [2723] */
    (xdc_Char)0x61,  /* [2724] */
    (xdc_Char)0x6e,  /* [2725] */
    (xdc_Char)0x6e,  /* [2726] */
    (xdc_Char)0x6f,  /* [2727] */
    (xdc_Char)0x74,  /* [2728] */
    (xdc_Char)0x20,  /* [2729] */
    (xdc_Char)0x73,  /* [2730] */
    (xdc_Char)0x75,  /* [2731] */
    (xdc_Char)0x70,  /* [2732] */
    (xdc_Char)0x70,  /* [2733] */
    (xdc_Char)0x6f,  /* [2734] */
    (xdc_Char)0x72,  /* [2735] */
    (xdc_Char)0x74,  /* [2736] */
    (xdc_Char)0x20,  /* [2737] */
    (xdc_Char)0x72,  /* [2738] */
    (xdc_Char)0x65,  /* [2739] */
    (xdc_Char)0x71,  /* [2740] */
    (xdc_Char)0x75,  /* [2741] */
    (xdc_Char)0x65,  /* [2742] */
    (xdc_Char)0x73,  /* [2743] */
    (xdc_Char)0x74,  /* [2744] */
    (xdc_Char)0x65,  /* [2745] */
    (xdc_Char)0x64,  /* [2746] */
    (xdc_Char)0x20,  /* [2747] */
    (xdc_Char)0x70,  /* [2748] */
    (xdc_Char)0x65,  /* [2749] */
    (xdc_Char)0x72,  /* [2750] */
    (xdc_Char)0x69,  /* [2751] */
    (xdc_Char)0x6f,  /* [2752] */
    (xdc_Char)0x64,  /* [2753] */
    (xdc_Char)0x20,  /* [2754] */
    (xdc_Char)0x25,  /* [2755] */
    (xdc_Char)0x64,  /* [2756] */
    (xdc_Char)0x0,  /* [2757] */
    (xdc_Char)0x45,  /* [2758] */
    (xdc_Char)0x5f,  /* [2759] */
    (xdc_Char)0x72,  /* [2760] */
    (xdc_Char)0x75,  /* [2761] */
    (xdc_Char)0x6e,  /* [2762] */
    (xdc_Char)0x74,  /* [2763] */
    (xdc_Char)0x69,  /* [2764] */
    (xdc_Char)0x6d,  /* [2765] */
    (xdc_Char)0x65,  /* [2766] */
    (xdc_Char)0x43,  /* [2767] */
    (xdc_Char)0x72,  /* [2768] */
    (xdc_Char)0x65,  /* [2769] */
    (xdc_Char)0x61,  /* [2770] */
    (xdc_Char)0x74,  /* [2771] */
    (xdc_Char)0x65,  /* [2772] */
    (xdc_Char)0x3a,  /* [2773] */
    (xdc_Char)0x20,  /* [2774] */
    (xdc_Char)0x52,  /* [2775] */
    (xdc_Char)0x75,  /* [2776] */
    (xdc_Char)0x6e,  /* [2777] */
    (xdc_Char)0x74,  /* [2778] */
    (xdc_Char)0x69,  /* [2779] */
    (xdc_Char)0x6d,  /* [2780] */
    (xdc_Char)0x65,  /* [2781] */
    (xdc_Char)0x20,  /* [2782] */
    (xdc_Char)0x54,  /* [2783] */
    (xdc_Char)0x69,  /* [2784] */
    (xdc_Char)0x6d,  /* [2785] */
    (xdc_Char)0x65,  /* [2786] */
    (xdc_Char)0x72,  /* [2787] */
    (xdc_Char)0x20,  /* [2788] */
    (xdc_Char)0x63,  /* [2789] */
    (xdc_Char)0x72,  /* [2790] */
    (xdc_Char)0x65,  /* [2791] */
    (xdc_Char)0x61,  /* [2792] */
    (xdc_Char)0x74,  /* [2793] */
    (xdc_Char)0x65,  /* [2794] */
    (xdc_Char)0x20,  /* [2795] */
    (xdc_Char)0x69,  /* [2796] */
    (xdc_Char)0x73,  /* [2797] */
    (xdc_Char)0x20,  /* [2798] */
    (xdc_Char)0x6e,  /* [2799] */
    (xdc_Char)0x6f,  /* [2800] */
    (xdc_Char)0x74,  /* [2801] */
    (xdc_Char)0x20,  /* [2802] */
    (xdc_Char)0x73,  /* [2803] */
    (xdc_Char)0x75,  /* [2804] */
    (xdc_Char)0x70,  /* [2805] */
    (xdc_Char)0x70,  /* [2806] */
    (xdc_Char)0x6f,  /* [2807] */
    (xdc_Char)0x72,  /* [2808] */
    (xdc_Char)0x74,  /* [2809] */
    (xdc_Char)0x65,  /* [2810] */
    (xdc_Char)0x64,  /* [2811] */
    (xdc_Char)0x20,  /* [2812] */
    (xdc_Char)0x25,  /* [2813] */
    (xdc_Char)0x64,  /* [2814] */
    (xdc_Char)0x0,  /* [2815] */
    (xdc_Char)0x45,  /* [2816] */
    (xdc_Char)0x5f,  /* [2817] */
    (xdc_Char)0x64,  /* [2818] */
    (xdc_Char)0x79,  /* [2819] */
    (xdc_Char)0x6e,  /* [2820] */
    (xdc_Char)0x61,  /* [2821] */
    (xdc_Char)0x6d,  /* [2822] */
    (xdc_Char)0x69,  /* [2823] */
    (xdc_Char)0x63,  /* [2824] */
    (xdc_Char)0x4d,  /* [2825] */
    (xdc_Char)0x6f,  /* [2826] */
    (xdc_Char)0x64,  /* [2827] */
    (xdc_Char)0x65,  /* [2828] */
    (xdc_Char)0x4e,  /* [2829] */
    (xdc_Char)0x6f,  /* [2830] */
    (xdc_Char)0x74,  /* [2831] */
    (xdc_Char)0x41,  /* [2832] */
    (xdc_Char)0x6c,  /* [2833] */
    (xdc_Char)0x6c,  /* [2834] */
    (xdc_Char)0x6f,  /* [2835] */
    (xdc_Char)0x77,  /* [2836] */
    (xdc_Char)0x65,  /* [2837] */
    (xdc_Char)0x64,  /* [2838] */
    (xdc_Char)0x3a,  /* [2839] */
    (xdc_Char)0x20,  /* [2840] */
    (xdc_Char)0x44,  /* [2841] */
    (xdc_Char)0x79,  /* [2842] */
    (xdc_Char)0x6e,  /* [2843] */
    (xdc_Char)0x61,  /* [2844] */
    (xdc_Char)0x6d,  /* [2845] */
    (xdc_Char)0x69,  /* [2846] */
    (xdc_Char)0x63,  /* [2847] */
    (xdc_Char)0x20,  /* [2848] */
    (xdc_Char)0x6d,  /* [2849] */
    (xdc_Char)0x6f,  /* [2850] */
    (xdc_Char)0x64,  /* [2851] */
    (xdc_Char)0x65,  /* [2852] */
    (xdc_Char)0x20,  /* [2853] */
    (xdc_Char)0x69,  /* [2854] */
    (xdc_Char)0x73,  /* [2855] */
    (xdc_Char)0x20,  /* [2856] */
    (xdc_Char)0x6e,  /* [2857] */
    (xdc_Char)0x6f,  /* [2858] */
    (xdc_Char)0x74,  /* [2859] */
    (xdc_Char)0x20,  /* [2860] */
    (xdc_Char)0x65,  /* [2861] */
    (xdc_Char)0x6e,  /* [2862] */
    (xdc_Char)0x61,  /* [2863] */
    (xdc_Char)0x62,  /* [2864] */
    (xdc_Char)0x6c,  /* [2865] */
    (xdc_Char)0x65,  /* [2866] */
    (xdc_Char)0x64,  /* [2867] */
    (xdc_Char)0x20,  /* [2868] */
    (xdc_Char)0x28,  /* [2869] */
    (xdc_Char)0x61,  /* [2870] */
    (xdc_Char)0x6c,  /* [2871] */
    (xdc_Char)0x6c,  /* [2872] */
    (xdc_Char)0x6f,  /* [2873] */
    (xdc_Char)0x77,  /* [2874] */
    (xdc_Char)0x44,  /* [2875] */
    (xdc_Char)0x79,  /* [2876] */
    (xdc_Char)0x6e,  /* [2877] */
    (xdc_Char)0x61,  /* [2878] */
    (xdc_Char)0x6d,  /* [2879] */
    (xdc_Char)0x69,  /* [2880] */
    (xdc_Char)0x63,  /* [2881] */
    (xdc_Char)0x4d,  /* [2882] */
    (xdc_Char)0x6f,  /* [2883] */
    (xdc_Char)0x64,  /* [2884] */
    (xdc_Char)0x65,  /* [2885] */
    (xdc_Char)0x3d,  /* [2886] */
    (xdc_Char)0x66,  /* [2887] */
    (xdc_Char)0x61,  /* [2888] */
    (xdc_Char)0x6c,  /* [2889] */
    (xdc_Char)0x73,  /* [2890] */
    (xdc_Char)0x65,  /* [2891] */
    (xdc_Char)0x29,  /* [2892] */
    (xdc_Char)0x0,  /* [2893] */
    (xdc_Char)0x45,  /* [2894] */
    (xdc_Char)0x5f,  /* [2895] */
    (xdc_Char)0x73,  /* [2896] */
    (xdc_Char)0x74,  /* [2897] */
    (xdc_Char)0x61,  /* [2898] */
    (xdc_Char)0x63,  /* [2899] */
    (xdc_Char)0x6b,  /* [2900] */
    (xdc_Char)0x4f,  /* [2901] */
    (xdc_Char)0x76,  /* [2902] */
    (xdc_Char)0x65,  /* [2903] */
    (xdc_Char)0x72,  /* [2904] */
    (xdc_Char)0x66,  /* [2905] */
    (xdc_Char)0x6c,  /* [2906] */
    (xdc_Char)0x6f,  /* [2907] */
    (xdc_Char)0x77,  /* [2908] */
    (xdc_Char)0x3a,  /* [2909] */
    (xdc_Char)0x20,  /* [2910] */
    (xdc_Char)0x49,  /* [2911] */
    (xdc_Char)0x53,  /* [2912] */
    (xdc_Char)0x52,  /* [2913] */
    (xdc_Char)0x20,  /* [2914] */
    (xdc_Char)0x73,  /* [2915] */
    (xdc_Char)0x74,  /* [2916] */
    (xdc_Char)0x61,  /* [2917] */
    (xdc_Char)0x63,  /* [2918] */
    (xdc_Char)0x6b,  /* [2919] */
    (xdc_Char)0x20,  /* [2920] */
    (xdc_Char)0x6f,  /* [2921] */
    (xdc_Char)0x76,  /* [2922] */
    (xdc_Char)0x65,  /* [2923] */
    (xdc_Char)0x72,  /* [2924] */
    (xdc_Char)0x66,  /* [2925] */
    (xdc_Char)0x6c,  /* [2926] */
    (xdc_Char)0x6f,  /* [2927] */
    (xdc_Char)0x77,  /* [2928] */
    (xdc_Char)0x2e,  /* [2929] */
    (xdc_Char)0x0,  /* [2930] */
    (xdc_Char)0x45,  /* [2931] */
    (xdc_Char)0x5f,  /* [2932] */
    (xdc_Char)0x73,  /* [2933] */
    (xdc_Char)0x74,  /* [2934] */
    (xdc_Char)0x61,  /* [2935] */
    (xdc_Char)0x63,  /* [2936] */
    (xdc_Char)0x6b,  /* [2937] */
    (xdc_Char)0x4f,  /* [2938] */
    (xdc_Char)0x76,  /* [2939] */
    (xdc_Char)0x65,  /* [2940] */
    (xdc_Char)0x72,  /* [2941] */
    (xdc_Char)0x66,  /* [2942] */
    (xdc_Char)0x6c,  /* [2943] */
    (xdc_Char)0x6f,  /* [2944] */
    (xdc_Char)0x77,  /* [2945] */
    (xdc_Char)0x3a,  /* [2946] */
    (xdc_Char)0x20,  /* [2947] */
    (xdc_Char)0x54,  /* [2948] */
    (xdc_Char)0x61,  /* [2949] */
    (xdc_Char)0x73,  /* [2950] */
    (xdc_Char)0x6b,  /* [2951] */
    (xdc_Char)0x20,  /* [2952] */
    (xdc_Char)0x30,  /* [2953] */
    (xdc_Char)0x78,  /* [2954] */
    (xdc_Char)0x25,  /* [2955] */
    (xdc_Char)0x78,  /* [2956] */
    (xdc_Char)0x20,  /* [2957] */
    (xdc_Char)0x73,  /* [2958] */
    (xdc_Char)0x74,  /* [2959] */
    (xdc_Char)0x61,  /* [2960] */
    (xdc_Char)0x63,  /* [2961] */
    (xdc_Char)0x6b,  /* [2962] */
    (xdc_Char)0x20,  /* [2963] */
    (xdc_Char)0x6f,  /* [2964] */
    (xdc_Char)0x76,  /* [2965] */
    (xdc_Char)0x65,  /* [2966] */
    (xdc_Char)0x72,  /* [2967] */
    (xdc_Char)0x66,  /* [2968] */
    (xdc_Char)0x6c,  /* [2969] */
    (xdc_Char)0x6f,  /* [2970] */
    (xdc_Char)0x77,  /* [2971] */
    (xdc_Char)0x2e,  /* [2972] */
    (xdc_Char)0x0,  /* [2973] */
    (xdc_Char)0x45,  /* [2974] */
    (xdc_Char)0x5f,  /* [2975] */
    (xdc_Char)0x73,  /* [2976] */
    (xdc_Char)0x70,  /* [2977] */
    (xdc_Char)0x4f,  /* [2978] */
    (xdc_Char)0x75,  /* [2979] */
    (xdc_Char)0x74,  /* [2980] */
    (xdc_Char)0x4f,  /* [2981] */
    (xdc_Char)0x66,  /* [2982] */
    (xdc_Char)0x42,  /* [2983] */
    (xdc_Char)0x6f,  /* [2984] */
    (xdc_Char)0x75,  /* [2985] */
    (xdc_Char)0x6e,  /* [2986] */
    (xdc_Char)0x64,  /* [2987] */
    (xdc_Char)0x73,  /* [2988] */
    (xdc_Char)0x3a,  /* [2989] */
    (xdc_Char)0x20,  /* [2990] */
    (xdc_Char)0x54,  /* [2991] */
    (xdc_Char)0x61,  /* [2992] */
    (xdc_Char)0x73,  /* [2993] */
    (xdc_Char)0x6b,  /* [2994] */
    (xdc_Char)0x20,  /* [2995] */
    (xdc_Char)0x30,  /* [2996] */
    (xdc_Char)0x78,  /* [2997] */
    (xdc_Char)0x25,  /* [2998] */
    (xdc_Char)0x78,  /* [2999] */
    (xdc_Char)0x20,  /* [3000] */
    (xdc_Char)0x73,  /* [3001] */
    (xdc_Char)0x74,  /* [3002] */
    (xdc_Char)0x61,  /* [3003] */
    (xdc_Char)0x63,  /* [3004] */
    (xdc_Char)0x6b,  /* [3005] */
    (xdc_Char)0x20,  /* [3006] */
    (xdc_Char)0x65,  /* [3007] */
    (xdc_Char)0x72,  /* [3008] */
    (xdc_Char)0x72,  /* [3009] */
    (xdc_Char)0x6f,  /* [3010] */
    (xdc_Char)0x72,  /* [3011] */
    (xdc_Char)0x2c,  /* [3012] */
    (xdc_Char)0x20,  /* [3013] */
    (xdc_Char)0x53,  /* [3014] */
    (xdc_Char)0x50,  /* [3015] */
    (xdc_Char)0x20,  /* [3016] */
    (xdc_Char)0x3d,  /* [3017] */
    (xdc_Char)0x20,  /* [3018] */
    (xdc_Char)0x30,  /* [3019] */
    (xdc_Char)0x78,  /* [3020] */
    (xdc_Char)0x25,  /* [3021] */
    (xdc_Char)0x78,  /* [3022] */
    (xdc_Char)0x2e,  /* [3023] */
    (xdc_Char)0x0,  /* [3024] */
    (xdc_Char)0x45,  /* [3025] */
    (xdc_Char)0x5f,  /* [3026] */
    (xdc_Char)0x64,  /* [3027] */
    (xdc_Char)0x65,  /* [3028] */
    (xdc_Char)0x6c,  /* [3029] */
    (xdc_Char)0x65,  /* [3030] */
    (xdc_Char)0x74,  /* [3031] */
    (xdc_Char)0x65,  /* [3032] */
    (xdc_Char)0x4e,  /* [3033] */
    (xdc_Char)0x6f,  /* [3034] */
    (xdc_Char)0x74,  /* [3035] */
    (xdc_Char)0x41,  /* [3036] */
    (xdc_Char)0x6c,  /* [3037] */
    (xdc_Char)0x6c,  /* [3038] */
    (xdc_Char)0x6f,  /* [3039] */
    (xdc_Char)0x77,  /* [3040] */
    (xdc_Char)0x65,  /* [3041] */
    (xdc_Char)0x64,  /* [3042] */
    (xdc_Char)0x3a,  /* [3043] */
    (xdc_Char)0x20,  /* [3044] */
    (xdc_Char)0x54,  /* [3045] */
    (xdc_Char)0x61,  /* [3046] */
    (xdc_Char)0x73,  /* [3047] */
    (xdc_Char)0x6b,  /* [3048] */
    (xdc_Char)0x20,  /* [3049] */
    (xdc_Char)0x30,  /* [3050] */
    (xdc_Char)0x78,  /* [3051] */
    (xdc_Char)0x25,  /* [3052] */
    (xdc_Char)0x78,  /* [3053] */
    (xdc_Char)0x2e,  /* [3054] */
    (xdc_Char)0x0,  /* [3055] */
    (xdc_Char)0x45,  /* [3056] */
    (xdc_Char)0x5f,  /* [3057] */
    (xdc_Char)0x70,  /* [3058] */
    (xdc_Char)0x72,  /* [3059] */
    (xdc_Char)0x69,  /* [3060] */
    (xdc_Char)0x6f,  /* [3061] */
    (xdc_Char)0x72,  /* [3062] */
    (xdc_Char)0x69,  /* [3063] */
    (xdc_Char)0x74,  /* [3064] */
    (xdc_Char)0x79,  /* [3065] */
    (xdc_Char)0x3a,  /* [3066] */
    (xdc_Char)0x20,  /* [3067] */
    (xdc_Char)0x54,  /* [3068] */
    (xdc_Char)0x68,  /* [3069] */
    (xdc_Char)0x72,  /* [3070] */
    (xdc_Char)0x65,  /* [3071] */
    (xdc_Char)0x61,  /* [3072] */
    (xdc_Char)0x64,  /* [3073] */
    (xdc_Char)0x20,  /* [3074] */
    (xdc_Char)0x70,  /* [3075] */
    (xdc_Char)0x72,  /* [3076] */
    (xdc_Char)0x69,  /* [3077] */
    (xdc_Char)0x6f,  /* [3078] */
    (xdc_Char)0x72,  /* [3079] */
    (xdc_Char)0x69,  /* [3080] */
    (xdc_Char)0x74,  /* [3081] */
    (xdc_Char)0x79,  /* [3082] */
    (xdc_Char)0x20,  /* [3083] */
    (xdc_Char)0x69,  /* [3084] */
    (xdc_Char)0x73,  /* [3085] */
    (xdc_Char)0x20,  /* [3086] */
    (xdc_Char)0x69,  /* [3087] */
    (xdc_Char)0x6e,  /* [3088] */
    (xdc_Char)0x76,  /* [3089] */
    (xdc_Char)0x61,  /* [3090] */
    (xdc_Char)0x6c,  /* [3091] */
    (xdc_Char)0x69,  /* [3092] */
    (xdc_Char)0x64,  /* [3093] */
    (xdc_Char)0x20,  /* [3094] */
    (xdc_Char)0x25,  /* [3095] */
    (xdc_Char)0x64,  /* [3096] */
    (xdc_Char)0x0,  /* [3097] */
    (xdc_Char)0x3c,  /* [3098] */
    (xdc_Char)0x2d,  /* [3099] */
    (xdc_Char)0x2d,  /* [3100] */
    (xdc_Char)0x20,  /* [3101] */
    (xdc_Char)0x63,  /* [3102] */
    (xdc_Char)0x6f,  /* [3103] */
    (xdc_Char)0x6e,  /* [3104] */
    (xdc_Char)0x73,  /* [3105] */
    (xdc_Char)0x74,  /* [3106] */
    (xdc_Char)0x72,  /* [3107] */
    (xdc_Char)0x75,  /* [3108] */
    (xdc_Char)0x63,  /* [3109] */
    (xdc_Char)0x74,  /* [3110] */
    (xdc_Char)0x3a,  /* [3111] */
    (xdc_Char)0x20,  /* [3112] */
    (xdc_Char)0x25,  /* [3113] */
    (xdc_Char)0x70,  /* [3114] */
    (xdc_Char)0x28,  /* [3115] */
    (xdc_Char)0x27,  /* [3116] */
    (xdc_Char)0x25,  /* [3117] */
    (xdc_Char)0x73,  /* [3118] */
    (xdc_Char)0x27,  /* [3119] */
    (xdc_Char)0x29,  /* [3120] */
    (xdc_Char)0x0,  /* [3121] */
    (xdc_Char)0x3c,  /* [3122] */
    (xdc_Char)0x2d,  /* [3123] */
    (xdc_Char)0x2d,  /* [3124] */
    (xdc_Char)0x20,  /* [3125] */
    (xdc_Char)0x63,  /* [3126] */
    (xdc_Char)0x72,  /* [3127] */
    (xdc_Char)0x65,  /* [3128] */
    (xdc_Char)0x61,  /* [3129] */
    (xdc_Char)0x74,  /* [3130] */
    (xdc_Char)0x65,  /* [3131] */
    (xdc_Char)0x3a,  /* [3132] */
    (xdc_Char)0x20,  /* [3133] */
    (xdc_Char)0x25,  /* [3134] */
    (xdc_Char)0x70,  /* [3135] */
    (xdc_Char)0x28,  /* [3136] */
    (xdc_Char)0x27,  /* [3137] */
    (xdc_Char)0x25,  /* [3138] */
    (xdc_Char)0x73,  /* [3139] */
    (xdc_Char)0x27,  /* [3140] */
    (xdc_Char)0x29,  /* [3141] */
    (xdc_Char)0x0,  /* [3142] */
    (xdc_Char)0x2d,  /* [3143] */
    (xdc_Char)0x2d,  /* [3144] */
    (xdc_Char)0x3e,  /* [3145] */
    (xdc_Char)0x20,  /* [3146] */
    (xdc_Char)0x64,  /* [3147] */
    (xdc_Char)0x65,  /* [3148] */
    (xdc_Char)0x73,  /* [3149] */
    (xdc_Char)0x74,  /* [3150] */
    (xdc_Char)0x72,  /* [3151] */
    (xdc_Char)0x75,  /* [3152] */
    (xdc_Char)0x63,  /* [3153] */
    (xdc_Char)0x74,  /* [3154] */
    (xdc_Char)0x3a,  /* [3155] */
    (xdc_Char)0x20,  /* [3156] */
    (xdc_Char)0x28,  /* [3157] */
    (xdc_Char)0x25,  /* [3158] */
    (xdc_Char)0x70,  /* [3159] */
    (xdc_Char)0x29,  /* [3160] */
    (xdc_Char)0x0,  /* [3161] */
    (xdc_Char)0x2d,  /* [3162] */
    (xdc_Char)0x2d,  /* [3163] */
    (xdc_Char)0x3e,  /* [3164] */
    (xdc_Char)0x20,  /* [3165] */
    (xdc_Char)0x64,  /* [3166] */
    (xdc_Char)0x65,  /* [3167] */
    (xdc_Char)0x6c,  /* [3168] */
    (xdc_Char)0x65,  /* [3169] */
    (xdc_Char)0x74,  /* [3170] */
    (xdc_Char)0x65,  /* [3171] */
    (xdc_Char)0x3a,  /* [3172] */
    (xdc_Char)0x20,  /* [3173] */
    (xdc_Char)0x28,  /* [3174] */
    (xdc_Char)0x25,  /* [3175] */
    (xdc_Char)0x70,  /* [3176] */
    (xdc_Char)0x29,  /* [3177] */
    (xdc_Char)0x0,  /* [3178] */
    (xdc_Char)0x45,  /* [3179] */
    (xdc_Char)0x52,  /* [3180] */
    (xdc_Char)0x52,  /* [3181] */
    (xdc_Char)0x4f,  /* [3182] */
    (xdc_Char)0x52,  /* [3183] */
    (xdc_Char)0x3a,  /* [3184] */
    (xdc_Char)0x20,  /* [3185] */
    (xdc_Char)0x25,  /* [3186] */
    (xdc_Char)0x24,  /* [3187] */
    (xdc_Char)0x46,  /* [3188] */
    (xdc_Char)0x25,  /* [3189] */
    (xdc_Char)0x24,  /* [3190] */
    (xdc_Char)0x53,  /* [3191] */
    (xdc_Char)0x0,  /* [3192] */
    (xdc_Char)0x57,  /* [3193] */
    (xdc_Char)0x41,  /* [3194] */
    (xdc_Char)0x52,  /* [3195] */
    (xdc_Char)0x4e,  /* [3196] */
    (xdc_Char)0x49,  /* [3197] */
    (xdc_Char)0x4e,  /* [3198] */
    (xdc_Char)0x47,  /* [3199] */
    (xdc_Char)0x3a,  /* [3200] */
    (xdc_Char)0x20,  /* [3201] */
    (xdc_Char)0x25,  /* [3202] */
    (xdc_Char)0x24,  /* [3203] */
    (xdc_Char)0x46,  /* [3204] */
    (xdc_Char)0x25,  /* [3205] */
    (xdc_Char)0x24,  /* [3206] */
    (xdc_Char)0x53,  /* [3207] */
    (xdc_Char)0x0,  /* [3208] */
    (xdc_Char)0x25,  /* [3209] */
    (xdc_Char)0x24,  /* [3210] */
    (xdc_Char)0x46,  /* [3211] */
    (xdc_Char)0x25,  /* [3212] */
    (xdc_Char)0x24,  /* [3213] */
    (xdc_Char)0x53,  /* [3214] */
    (xdc_Char)0x0,  /* [3215] */
    (xdc_Char)0x53,  /* [3216] */
    (xdc_Char)0x74,  /* [3217] */
    (xdc_Char)0x61,  /* [3218] */
    (xdc_Char)0x72,  /* [3219] */
    (xdc_Char)0x74,  /* [3220] */
    (xdc_Char)0x3a,  /* [3221] */
    (xdc_Char)0x20,  /* [3222] */
    (xdc_Char)0x25,  /* [3223] */
    (xdc_Char)0x24,  /* [3224] */
    (xdc_Char)0x53,  /* [3225] */
    (xdc_Char)0x0,  /* [3226] */
    (xdc_Char)0x53,  /* [3227] */
    (xdc_Char)0x74,  /* [3228] */
    (xdc_Char)0x6f,  /* [3229] */
    (xdc_Char)0x70,  /* [3230] */
    (xdc_Char)0x3a,  /* [3231] */
    (xdc_Char)0x20,  /* [3232] */
    (xdc_Char)0x25,  /* [3233] */
    (xdc_Char)0x24,  /* [3234] */
    (xdc_Char)0x53,  /* [3235] */
    (xdc_Char)0x0,  /* [3236] */
    (xdc_Char)0x53,  /* [3237] */
    (xdc_Char)0x74,  /* [3238] */
    (xdc_Char)0x61,  /* [3239] */
    (xdc_Char)0x72,  /* [3240] */
    (xdc_Char)0x74,  /* [3241] */
    (xdc_Char)0x49,  /* [3242] */
    (xdc_Char)0x6e,  /* [3243] */
    (xdc_Char)0x73,  /* [3244] */
    (xdc_Char)0x74,  /* [3245] */
    (xdc_Char)0x61,  /* [3246] */
    (xdc_Char)0x6e,  /* [3247] */
    (xdc_Char)0x63,  /* [3248] */
    (xdc_Char)0x65,  /* [3249] */
    (xdc_Char)0x3a,  /* [3250] */
    (xdc_Char)0x20,  /* [3251] */
    (xdc_Char)0x25,  /* [3252] */
    (xdc_Char)0x24,  /* [3253] */
    (xdc_Char)0x53,  /* [3254] */
    (xdc_Char)0x0,  /* [3255] */
    (xdc_Char)0x53,  /* [3256] */
    (xdc_Char)0x74,  /* [3257] */
    (xdc_Char)0x6f,  /* [3258] */
    (xdc_Char)0x70,  /* [3259] */
    (xdc_Char)0x49,  /* [3260] */
    (xdc_Char)0x6e,  /* [3261] */
    (xdc_Char)0x73,  /* [3262] */
    (xdc_Char)0x74,  /* [3263] */
    (xdc_Char)0x61,  /* [3264] */
    (xdc_Char)0x6e,  /* [3265] */
    (xdc_Char)0x63,  /* [3266] */
    (xdc_Char)0x65,  /* [3267] */
    (xdc_Char)0x3a,  /* [3268] */
    (xdc_Char)0x20,  /* [3269] */
    (xdc_Char)0x25,  /* [3270] */
    (xdc_Char)0x24,  /* [3271] */
    (xdc_Char)0x53,  /* [3272] */
    (xdc_Char)0x0,  /* [3273] */
    (xdc_Char)0x4c,  /* [3274] */
    (xdc_Char)0x4d,  /* [3275] */
    (xdc_Char)0x5f,  /* [3276] */
    (xdc_Char)0x62,  /* [3277] */
    (xdc_Char)0x65,  /* [3278] */
    (xdc_Char)0x67,  /* [3279] */
    (xdc_Char)0x69,  /* [3280] */
    (xdc_Char)0x6e,  /* [3281] */
    (xdc_Char)0x3a,  /* [3282] */
    (xdc_Char)0x20,  /* [3283] */
    (xdc_Char)0x68,  /* [3284] */
    (xdc_Char)0x77,  /* [3285] */
    (xdc_Char)0x69,  /* [3286] */
    (xdc_Char)0x3a,  /* [3287] */
    (xdc_Char)0x20,  /* [3288] */
    (xdc_Char)0x30,  /* [3289] */
    (xdc_Char)0x78,  /* [3290] */
    (xdc_Char)0x25,  /* [3291] */
    (xdc_Char)0x78,  /* [3292] */
    (xdc_Char)0x2c,  /* [3293] */
    (xdc_Char)0x20,  /* [3294] */
    (xdc_Char)0x66,  /* [3295] */
    (xdc_Char)0x75,  /* [3296] */
    (xdc_Char)0x6e,  /* [3297] */
    (xdc_Char)0x63,  /* [3298] */
    (xdc_Char)0x3a,  /* [3299] */
    (xdc_Char)0x20,  /* [3300] */
    (xdc_Char)0x30,  /* [3301] */
    (xdc_Char)0x78,  /* [3302] */
    (xdc_Char)0x25,  /* [3303] */
    (xdc_Char)0x78,  /* [3304] */
    (xdc_Char)0x2c,  /* [3305] */
    (xdc_Char)0x20,  /* [3306] */
    (xdc_Char)0x70,  /* [3307] */
    (xdc_Char)0x72,  /* [3308] */
    (xdc_Char)0x65,  /* [3309] */
    (xdc_Char)0x54,  /* [3310] */
    (xdc_Char)0x68,  /* [3311] */
    (xdc_Char)0x72,  /* [3312] */
    (xdc_Char)0x65,  /* [3313] */
    (xdc_Char)0x61,  /* [3314] */
    (xdc_Char)0x64,  /* [3315] */
    (xdc_Char)0x3a,  /* [3316] */
    (xdc_Char)0x20,  /* [3317] */
    (xdc_Char)0x25,  /* [3318] */
    (xdc_Char)0x64,  /* [3319] */
    (xdc_Char)0x2c,  /* [3320] */
    (xdc_Char)0x20,  /* [3321] */
    (xdc_Char)0x69,  /* [3322] */
    (xdc_Char)0x6e,  /* [3323] */
    (xdc_Char)0x74,  /* [3324] */
    (xdc_Char)0x4e,  /* [3325] */
    (xdc_Char)0x75,  /* [3326] */
    (xdc_Char)0x6d,  /* [3327] */
    (xdc_Char)0x3a,  /* [3328] */
    (xdc_Char)0x20,  /* [3329] */
    (xdc_Char)0x25,  /* [3330] */
    (xdc_Char)0x64,  /* [3331] */
    (xdc_Char)0x2c,  /* [3332] */
    (xdc_Char)0x20,  /* [3333] */
    (xdc_Char)0x69,  /* [3334] */
    (xdc_Char)0x72,  /* [3335] */
    (xdc_Char)0x70,  /* [3336] */
    (xdc_Char)0x3a,  /* [3337] */
    (xdc_Char)0x20,  /* [3338] */
    (xdc_Char)0x30,  /* [3339] */
    (xdc_Char)0x78,  /* [3340] */
    (xdc_Char)0x25,  /* [3341] */
    (xdc_Char)0x78,  /* [3342] */
    (xdc_Char)0x0,  /* [3343] */
    (xdc_Char)0x4c,  /* [3344] */
    (xdc_Char)0x44,  /* [3345] */
    (xdc_Char)0x5f,  /* [3346] */
    (xdc_Char)0x65,  /* [3347] */
    (xdc_Char)0x6e,  /* [3348] */
    (xdc_Char)0x64,  /* [3349] */
    (xdc_Char)0x3a,  /* [3350] */
    (xdc_Char)0x20,  /* [3351] */
    (xdc_Char)0x68,  /* [3352] */
    (xdc_Char)0x77,  /* [3353] */
    (xdc_Char)0x69,  /* [3354] */
    (xdc_Char)0x3a,  /* [3355] */
    (xdc_Char)0x20,  /* [3356] */
    (xdc_Char)0x30,  /* [3357] */
    (xdc_Char)0x78,  /* [3358] */
    (xdc_Char)0x25,  /* [3359] */
    (xdc_Char)0x78,  /* [3360] */
    (xdc_Char)0x0,  /* [3361] */
    (xdc_Char)0x4c,  /* [3362] */
    (xdc_Char)0x57,  /* [3363] */
    (xdc_Char)0x5f,  /* [3364] */
    (xdc_Char)0x64,  /* [3365] */
    (xdc_Char)0x65,  /* [3366] */
    (xdc_Char)0x6c,  /* [3367] */
    (xdc_Char)0x61,  /* [3368] */
    (xdc_Char)0x79,  /* [3369] */
    (xdc_Char)0x65,  /* [3370] */
    (xdc_Char)0x64,  /* [3371] */
    (xdc_Char)0x3a,  /* [3372] */
    (xdc_Char)0x20,  /* [3373] */
    (xdc_Char)0x64,  /* [3374] */
    (xdc_Char)0x65,  /* [3375] */
    (xdc_Char)0x6c,  /* [3376] */
    (xdc_Char)0x61,  /* [3377] */
    (xdc_Char)0x79,  /* [3378] */
    (xdc_Char)0x3a,  /* [3379] */
    (xdc_Char)0x20,  /* [3380] */
    (xdc_Char)0x25,  /* [3381] */
    (xdc_Char)0x64,  /* [3382] */
    (xdc_Char)0x0,  /* [3383] */
    (xdc_Char)0x4c,  /* [3384] */
    (xdc_Char)0x4d,  /* [3385] */
    (xdc_Char)0x5f,  /* [3386] */
    (xdc_Char)0x74,  /* [3387] */
    (xdc_Char)0x69,  /* [3388] */
    (xdc_Char)0x63,  /* [3389] */
    (xdc_Char)0x6b,  /* [3390] */
    (xdc_Char)0x3a,  /* [3391] */
    (xdc_Char)0x20,  /* [3392] */
    (xdc_Char)0x74,  /* [3393] */
    (xdc_Char)0x69,  /* [3394] */
    (xdc_Char)0x63,  /* [3395] */
    (xdc_Char)0x6b,  /* [3396] */
    (xdc_Char)0x3a,  /* [3397] */
    (xdc_Char)0x20,  /* [3398] */
    (xdc_Char)0x25,  /* [3399] */
    (xdc_Char)0x64,  /* [3400] */
    (xdc_Char)0x0,  /* [3401] */
    (xdc_Char)0x4c,  /* [3402] */
    (xdc_Char)0x4d,  /* [3403] */
    (xdc_Char)0x5f,  /* [3404] */
    (xdc_Char)0x62,  /* [3405] */
    (xdc_Char)0x65,  /* [3406] */
    (xdc_Char)0x67,  /* [3407] */
    (xdc_Char)0x69,  /* [3408] */
    (xdc_Char)0x6e,  /* [3409] */
    (xdc_Char)0x3a,  /* [3410] */
    (xdc_Char)0x20,  /* [3411] */
    (xdc_Char)0x63,  /* [3412] */
    (xdc_Char)0x6c,  /* [3413] */
    (xdc_Char)0x6b,  /* [3414] */
    (xdc_Char)0x3a,  /* [3415] */
    (xdc_Char)0x20,  /* [3416] */
    (xdc_Char)0x30,  /* [3417] */
    (xdc_Char)0x78,  /* [3418] */
    (xdc_Char)0x25,  /* [3419] */
    (xdc_Char)0x78,  /* [3420] */
    (xdc_Char)0x2c,  /* [3421] */
    (xdc_Char)0x20,  /* [3422] */
    (xdc_Char)0x66,  /* [3423] */
    (xdc_Char)0x75,  /* [3424] */
    (xdc_Char)0x6e,  /* [3425] */
    (xdc_Char)0x63,  /* [3426] */
    (xdc_Char)0x3a,  /* [3427] */
    (xdc_Char)0x20,  /* [3428] */
    (xdc_Char)0x30,  /* [3429] */
    (xdc_Char)0x78,  /* [3430] */
    (xdc_Char)0x25,  /* [3431] */
    (xdc_Char)0x78,  /* [3432] */
    (xdc_Char)0x0,  /* [3433] */
    (xdc_Char)0x4c,  /* [3434] */
    (xdc_Char)0x4d,  /* [3435] */
    (xdc_Char)0x5f,  /* [3436] */
    (xdc_Char)0x62,  /* [3437] */
    (xdc_Char)0x65,  /* [3438] */
    (xdc_Char)0x67,  /* [3439] */
    (xdc_Char)0x69,  /* [3440] */
    (xdc_Char)0x6e,  /* [3441] */
    (xdc_Char)0x3a,  /* [3442] */
    (xdc_Char)0x20,  /* [3443] */
    (xdc_Char)0x73,  /* [3444] */
    (xdc_Char)0x77,  /* [3445] */
    (xdc_Char)0x69,  /* [3446] */
    (xdc_Char)0x3a,  /* [3447] */
    (xdc_Char)0x20,  /* [3448] */
    (xdc_Char)0x30,  /* [3449] */
    (xdc_Char)0x78,  /* [3450] */
    (xdc_Char)0x25,  /* [3451] */
    (xdc_Char)0x78,  /* [3452] */
    (xdc_Char)0x2c,  /* [3453] */
    (xdc_Char)0x20,  /* [3454] */
    (xdc_Char)0x66,  /* [3455] */
    (xdc_Char)0x75,  /* [3456] */
    (xdc_Char)0x6e,  /* [3457] */
    (xdc_Char)0x63,  /* [3458] */
    (xdc_Char)0x3a,  /* [3459] */
    (xdc_Char)0x20,  /* [3460] */
    (xdc_Char)0x30,  /* [3461] */
    (xdc_Char)0x78,  /* [3462] */
    (xdc_Char)0x25,  /* [3463] */
    (xdc_Char)0x78,  /* [3464] */
    (xdc_Char)0x2c,  /* [3465] */
    (xdc_Char)0x20,  /* [3466] */
    (xdc_Char)0x70,  /* [3467] */
    (xdc_Char)0x72,  /* [3468] */
    (xdc_Char)0x65,  /* [3469] */
    (xdc_Char)0x54,  /* [3470] */
    (xdc_Char)0x68,  /* [3471] */
    (xdc_Char)0x72,  /* [3472] */
    (xdc_Char)0x65,  /* [3473] */
    (xdc_Char)0x61,  /* [3474] */
    (xdc_Char)0x64,  /* [3475] */
    (xdc_Char)0x3a,  /* [3476] */
    (xdc_Char)0x20,  /* [3477] */
    (xdc_Char)0x25,  /* [3478] */
    (xdc_Char)0x64,  /* [3479] */
    (xdc_Char)0x0,  /* [3480] */
    (xdc_Char)0x4c,  /* [3481] */
    (xdc_Char)0x44,  /* [3482] */
    (xdc_Char)0x5f,  /* [3483] */
    (xdc_Char)0x65,  /* [3484] */
    (xdc_Char)0x6e,  /* [3485] */
    (xdc_Char)0x64,  /* [3486] */
    (xdc_Char)0x3a,  /* [3487] */
    (xdc_Char)0x20,  /* [3488] */
    (xdc_Char)0x73,  /* [3489] */
    (xdc_Char)0x77,  /* [3490] */
    (xdc_Char)0x69,  /* [3491] */
    (xdc_Char)0x3a,  /* [3492] */
    (xdc_Char)0x20,  /* [3493] */
    (xdc_Char)0x30,  /* [3494] */
    (xdc_Char)0x78,  /* [3495] */
    (xdc_Char)0x25,  /* [3496] */
    (xdc_Char)0x78,  /* [3497] */
    (xdc_Char)0x0,  /* [3498] */
    (xdc_Char)0x4c,  /* [3499] */
    (xdc_Char)0x4d,  /* [3500] */
    (xdc_Char)0x5f,  /* [3501] */
    (xdc_Char)0x70,  /* [3502] */
    (xdc_Char)0x6f,  /* [3503] */
    (xdc_Char)0x73,  /* [3504] */
    (xdc_Char)0x74,  /* [3505] */
    (xdc_Char)0x3a,  /* [3506] */
    (xdc_Char)0x20,  /* [3507] */
    (xdc_Char)0x73,  /* [3508] */
    (xdc_Char)0x77,  /* [3509] */
    (xdc_Char)0x69,  /* [3510] */
    (xdc_Char)0x3a,  /* [3511] */
    (xdc_Char)0x20,  /* [3512] */
    (xdc_Char)0x30,  /* [3513] */
    (xdc_Char)0x78,  /* [3514] */
    (xdc_Char)0x25,  /* [3515] */
    (xdc_Char)0x78,  /* [3516] */
    (xdc_Char)0x2c,  /* [3517] */
    (xdc_Char)0x20,  /* [3518] */
    (xdc_Char)0x66,  /* [3519] */
    (xdc_Char)0x75,  /* [3520] */
    (xdc_Char)0x6e,  /* [3521] */
    (xdc_Char)0x63,  /* [3522] */
    (xdc_Char)0x3a,  /* [3523] */
    (xdc_Char)0x20,  /* [3524] */
    (xdc_Char)0x30,  /* [3525] */
    (xdc_Char)0x78,  /* [3526] */
    (xdc_Char)0x25,  /* [3527] */
    (xdc_Char)0x78,  /* [3528] */
    (xdc_Char)0x2c,  /* [3529] */
    (xdc_Char)0x20,  /* [3530] */
    (xdc_Char)0x70,  /* [3531] */
    (xdc_Char)0x72,  /* [3532] */
    (xdc_Char)0x69,  /* [3533] */
    (xdc_Char)0x3a,  /* [3534] */
    (xdc_Char)0x20,  /* [3535] */
    (xdc_Char)0x25,  /* [3536] */
    (xdc_Char)0x64,  /* [3537] */
    (xdc_Char)0x0,  /* [3538] */
    (xdc_Char)0x78,  /* [3539] */
    (xdc_Char)0x64,  /* [3540] */
    (xdc_Char)0x63,  /* [3541] */
    (xdc_Char)0x2e,  /* [3542] */
    (xdc_Char)0x0,  /* [3543] */
    (xdc_Char)0x72,  /* [3544] */
    (xdc_Char)0x75,  /* [3545] */
    (xdc_Char)0x6e,  /* [3546] */
    (xdc_Char)0x74,  /* [3547] */
    (xdc_Char)0x69,  /* [3548] */
    (xdc_Char)0x6d,  /* [3549] */
    (xdc_Char)0x65,  /* [3550] */
    (xdc_Char)0x2e,  /* [3551] */
    (xdc_Char)0x0,  /* [3552] */
    (xdc_Char)0x41,  /* [3553] */
    (xdc_Char)0x73,  /* [3554] */
    (xdc_Char)0x73,  /* [3555] */
    (xdc_Char)0x65,  /* [3556] */
    (xdc_Char)0x72,  /* [3557] */
    (xdc_Char)0x74,  /* [3558] */
    (xdc_Char)0x0,  /* [3559] */
    (xdc_Char)0x43,  /* [3560] */
    (xdc_Char)0x6f,  /* [3561] */
    (xdc_Char)0x72,  /* [3562] */
    (xdc_Char)0x65,  /* [3563] */
    (xdc_Char)0x0,  /* [3564] */
    (xdc_Char)0x44,  /* [3565] */
    (xdc_Char)0x65,  /* [3566] */
    (xdc_Char)0x66,  /* [3567] */
    (xdc_Char)0x61,  /* [3568] */
    (xdc_Char)0x75,  /* [3569] */
    (xdc_Char)0x6c,  /* [3570] */
    (xdc_Char)0x74,  /* [3571] */
    (xdc_Char)0x73,  /* [3572] */
    (xdc_Char)0x0,  /* [3573] */
    (xdc_Char)0x44,  /* [3574] */
    (xdc_Char)0x69,  /* [3575] */
    (xdc_Char)0x61,  /* [3576] */
    (xdc_Char)0x67,  /* [3577] */
    (xdc_Char)0x73,  /* [3578] */
    (xdc_Char)0x0,  /* [3579] */
    (xdc_Char)0x45,  /* [3580] */
    (xdc_Char)0x72,  /* [3581] */
    (xdc_Char)0x72,  /* [3582] */
    (xdc_Char)0x6f,  /* [3583] */
    (xdc_Char)0x72,  /* [3584] */
    (xdc_Char)0x0,  /* [3585] */
    (xdc_Char)0x47,  /* [3586] */
    (xdc_Char)0x61,  /* [3587] */
    (xdc_Char)0x74,  /* [3588] */
    (xdc_Char)0x65,  /* [3589] */
    (xdc_Char)0x0,  /* [3590] */
    (xdc_Char)0x47,  /* [3591] */
    (xdc_Char)0x61,  /* [3592] */
    (xdc_Char)0x74,  /* [3593] */
    (xdc_Char)0x65,  /* [3594] */
    (xdc_Char)0x4e,  /* [3595] */
    (xdc_Char)0x75,  /* [3596] */
    (xdc_Char)0x6c,  /* [3597] */
    (xdc_Char)0x6c,  /* [3598] */
    (xdc_Char)0x0,  /* [3599] */
    (xdc_Char)0x4c,  /* [3600] */
    (xdc_Char)0x6f,  /* [3601] */
    (xdc_Char)0x67,  /* [3602] */
    (xdc_Char)0x0,  /* [3603] */
    (xdc_Char)0x4c,  /* [3604] */
    (xdc_Char)0x6f,  /* [3605] */
    (xdc_Char)0x67,  /* [3606] */
    (xdc_Char)0x67,  /* [3607] */
    (xdc_Char)0x65,  /* [3608] */
    (xdc_Char)0x72,  /* [3609] */
    (xdc_Char)0x42,  /* [3610] */
    (xdc_Char)0x75,  /* [3611] */
    (xdc_Char)0x66,  /* [3612] */
    (xdc_Char)0x0,  /* [3613] */
    (xdc_Char)0x4d,  /* [3614] */
    (xdc_Char)0x61,  /* [3615] */
    (xdc_Char)0x69,  /* [3616] */
    (xdc_Char)0x6e,  /* [3617] */
    (xdc_Char)0x0,  /* [3618] */
    (xdc_Char)0x4d,  /* [3619] */
    (xdc_Char)0x65,  /* [3620] */
    (xdc_Char)0x6d,  /* [3621] */
    (xdc_Char)0x6f,  /* [3622] */
    (xdc_Char)0x72,  /* [3623] */
    (xdc_Char)0x79,  /* [3624] */
    (xdc_Char)0x0,  /* [3625] */
    (xdc_Char)0x48,  /* [3626] */
    (xdc_Char)0x65,  /* [3627] */
    (xdc_Char)0x61,  /* [3628] */
    (xdc_Char)0x70,  /* [3629] */
    (xdc_Char)0x4d,  /* [3630] */
    (xdc_Char)0x69,  /* [3631] */
    (xdc_Char)0x6e,  /* [3632] */
    (xdc_Char)0x0,  /* [3633] */
    (xdc_Char)0x52,  /* [3634] */
    (xdc_Char)0x65,  /* [3635] */
    (xdc_Char)0x67,  /* [3636] */
    (xdc_Char)0x69,  /* [3637] */
    (xdc_Char)0x73,  /* [3638] */
    (xdc_Char)0x74,  /* [3639] */
    (xdc_Char)0x72,  /* [3640] */
    (xdc_Char)0x79,  /* [3641] */
    (xdc_Char)0x0,  /* [3642] */
    (xdc_Char)0x53,  /* [3643] */
    (xdc_Char)0x74,  /* [3644] */
    (xdc_Char)0x61,  /* [3645] */
    (xdc_Char)0x72,  /* [3646] */
    (xdc_Char)0x74,  /* [3647] */
    (xdc_Char)0x75,  /* [3648] */
    (xdc_Char)0x70,  /* [3649] */
    (xdc_Char)0x0,  /* [3650] */
    (xdc_Char)0x53,  /* [3651] */
    (xdc_Char)0x79,  /* [3652] */
    (xdc_Char)0x73,  /* [3653] */
    (xdc_Char)0x74,  /* [3654] */
    (xdc_Char)0x65,  /* [3655] */
    (xdc_Char)0x6d,  /* [3656] */
    (xdc_Char)0x0,  /* [3657] */
    (xdc_Char)0x53,  /* [3658] */
    (xdc_Char)0x79,  /* [3659] */
    (xdc_Char)0x73,  /* [3660] */
    (xdc_Char)0x4d,  /* [3661] */
    (xdc_Char)0x69,  /* [3662] */
    (xdc_Char)0x6e,  /* [3663] */
    (xdc_Char)0x0,  /* [3664] */
    (xdc_Char)0x54,  /* [3665] */
    (xdc_Char)0x65,  /* [3666] */
    (xdc_Char)0x78,  /* [3667] */
    (xdc_Char)0x74,  /* [3668] */
    (xdc_Char)0x0,  /* [3669] */
    (xdc_Char)0x74,  /* [3670] */
    (xdc_Char)0x69,  /* [3671] */
    (xdc_Char)0x2e,  /* [3672] */
    (xdc_Char)0x0,  /* [3673] */
    (xdc_Char)0x73,  /* [3674] */
    (xdc_Char)0x79,  /* [3675] */
    (xdc_Char)0x73,  /* [3676] */
    (xdc_Char)0x62,  /* [3677] */
    (xdc_Char)0x69,  /* [3678] */
    (xdc_Char)0x6f,  /* [3679] */
    (xdc_Char)0x73,  /* [3680] */
    (xdc_Char)0x2e,  /* [3681] */
    (xdc_Char)0x0,  /* [3682] */
    (xdc_Char)0x66,  /* [3683] */
    (xdc_Char)0x61,  /* [3684] */
    (xdc_Char)0x6d,  /* [3685] */
    (xdc_Char)0x69,  /* [3686] */
    (xdc_Char)0x6c,  /* [3687] */
    (xdc_Char)0x79,  /* [3688] */
    (xdc_Char)0x2e,  /* [3689] */
    (xdc_Char)0x0,  /* [3690] */
    (xdc_Char)0x6d,  /* [3691] */
    (xdc_Char)0x73,  /* [3692] */
    (xdc_Char)0x70,  /* [3693] */
    (xdc_Char)0x34,  /* [3694] */
    (xdc_Char)0x33,  /* [3695] */
    (xdc_Char)0x30,  /* [3696] */
    (xdc_Char)0x2e,  /* [3697] */
    (xdc_Char)0x0,  /* [3698] */
    (xdc_Char)0x48,  /* [3699] */
    (xdc_Char)0x77,  /* [3700] */
    (xdc_Char)0x69,  /* [3701] */
    (xdc_Char)0x0,  /* [3702] */
    (xdc_Char)0x49,  /* [3703] */
    (xdc_Char)0x6e,  /* [3704] */
    (xdc_Char)0x74,  /* [3705] */
    (xdc_Char)0x72,  /* [3706] */
    (xdc_Char)0x69,  /* [3707] */
    (xdc_Char)0x6e,  /* [3708] */
    (xdc_Char)0x73,  /* [3709] */
    (xdc_Char)0x69,  /* [3710] */
    (xdc_Char)0x63,  /* [3711] */
    (xdc_Char)0x73,  /* [3712] */
    (xdc_Char)0x53,  /* [3713] */
    (xdc_Char)0x75,  /* [3714] */
    (xdc_Char)0x70,  /* [3715] */
    (xdc_Char)0x70,  /* [3716] */
    (xdc_Char)0x6f,  /* [3717] */
    (xdc_Char)0x72,  /* [3718] */
    (xdc_Char)0x74,  /* [3719] */
    (xdc_Char)0x0,  /* [3720] */
    (xdc_Char)0x54,  /* [3721] */
    (xdc_Char)0x69,  /* [3722] */
    (xdc_Char)0x6d,  /* [3723] */
    (xdc_Char)0x65,  /* [3724] */
    (xdc_Char)0x72,  /* [3725] */
    (xdc_Char)0x0,  /* [3726] */
    (xdc_Char)0x54,  /* [3727] */
    (xdc_Char)0x69,  /* [3728] */
    (xdc_Char)0x6d,  /* [3729] */
    (xdc_Char)0x65,  /* [3730] */
    (xdc_Char)0x73,  /* [3731] */
    (xdc_Char)0x74,  /* [3732] */
    (xdc_Char)0x61,  /* [3733] */
    (xdc_Char)0x6d,  /* [3734] */
    (xdc_Char)0x70,  /* [3735] */
    (xdc_Char)0x50,  /* [3736] */
    (xdc_Char)0x72,  /* [3737] */
    (xdc_Char)0x6f,  /* [3738] */
    (xdc_Char)0x76,  /* [3739] */
    (xdc_Char)0x69,  /* [3740] */
    (xdc_Char)0x64,  /* [3741] */
    (xdc_Char)0x65,  /* [3742] */
    (xdc_Char)0x72,  /* [3743] */
    (xdc_Char)0x0,  /* [3744] */
    (xdc_Char)0x43,  /* [3745] */
    (xdc_Char)0x6c,  /* [3746] */
    (xdc_Char)0x6f,  /* [3747] */
    (xdc_Char)0x63,  /* [3748] */
    (xdc_Char)0x6b,  /* [3749] */
    (xdc_Char)0x46,  /* [3750] */
    (xdc_Char)0x72,  /* [3751] */
    (xdc_Char)0x65,  /* [3752] */
    (xdc_Char)0x71,  /* [3753] */
    (xdc_Char)0x73,  /* [3754] */
    (xdc_Char)0x0,  /* [3755] */
    (xdc_Char)0x42,  /* [3756] */
    (xdc_Char)0x49,  /* [3757] */
    (xdc_Char)0x4f,  /* [3758] */
    (xdc_Char)0x53,  /* [3759] */
    (xdc_Char)0x0,  /* [3760] */
    (xdc_Char)0x68,  /* [3761] */
    (xdc_Char)0x61,  /* [3762] */
    (xdc_Char)0x6c,  /* [3763] */
    (xdc_Char)0x2e,  /* [3764] */
    (xdc_Char)0x0,  /* [3765] */
    (xdc_Char)0x6b,  /* [3766] */
    (xdc_Char)0x6e,  /* [3767] */
    (xdc_Char)0x6c,  /* [3768] */
    (xdc_Char)0x2e,  /* [3769] */
    (xdc_Char)0x0,  /* [3770] */
    (xdc_Char)0x43,  /* [3771] */
    (xdc_Char)0x6c,  /* [3772] */
    (xdc_Char)0x6f,  /* [3773] */
    (xdc_Char)0x63,  /* [3774] */
    (xdc_Char)0x6b,  /* [3775] */
    (xdc_Char)0x0,  /* [3776] */
    (xdc_Char)0x49,  /* [3777] */
    (xdc_Char)0x64,  /* [3778] */
    (xdc_Char)0x6c,  /* [3779] */
    (xdc_Char)0x65,  /* [3780] */
    (xdc_Char)0x0,  /* [3781] */
    (xdc_Char)0x49,  /* [3782] */
    (xdc_Char)0x6e,  /* [3783] */
    (xdc_Char)0x74,  /* [3784] */
    (xdc_Char)0x72,  /* [3785] */
    (xdc_Char)0x69,  /* [3786] */
    (xdc_Char)0x6e,  /* [3787] */
    (xdc_Char)0x73,  /* [3788] */
    (xdc_Char)0x69,  /* [3789] */
    (xdc_Char)0x63,  /* [3790] */
    (xdc_Char)0x73,  /* [3791] */
    (xdc_Char)0x0,  /* [3792] */
    (xdc_Char)0x51,  /* [3793] */
    (xdc_Char)0x75,  /* [3794] */
    (xdc_Char)0x65,  /* [3795] */
    (xdc_Char)0x75,  /* [3796] */
    (xdc_Char)0x65,  /* [3797] */
    (xdc_Char)0x0,  /* [3798] */
    (xdc_Char)0x53,  /* [3799] */
    (xdc_Char)0x77,  /* [3800] */
    (xdc_Char)0x69,  /* [3801] */
    (xdc_Char)0x0,  /* [3802] */
    (xdc_Char)0x67,  /* [3803] */
    (xdc_Char)0x61,  /* [3804] */
    (xdc_Char)0x74,  /* [3805] */
    (xdc_Char)0x65,  /* [3806] */
    (xdc_Char)0x73,  /* [3807] */
    (xdc_Char)0x2e,  /* [3808] */
    (xdc_Char)0x0,  /* [3809] */
    (xdc_Char)0x47,  /* [3810] */
    (xdc_Char)0x61,  /* [3811] */
    (xdc_Char)0x74,  /* [3812] */
    (xdc_Char)0x65,  /* [3813] */
    (xdc_Char)0x48,  /* [3814] */
    (xdc_Char)0x77,  /* [3815] */
    (xdc_Char)0x69,  /* [3816] */
    (xdc_Char)0x0,  /* [3817] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[39] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0xdd3,  /* left */
        (xdc_Bits16)0xdd8,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xde1,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xde8,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xded,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xdf6,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xdfc,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe02,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe07,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe10,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe14,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe1e,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe23,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe2a,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe32,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe3b,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe43,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe4a,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xe51,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0xe56,  /* left */
        (xdc_Bits16)0xe5a,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0xe63,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0xe6b,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0xe73,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0xe77,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0xe89,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0xe8f,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0xea1,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0xeac,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0xeb1,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0xe73,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0xe89,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0xeb6,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801f,  /* left */
        (xdc_Bits16)0xebb,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801f,  /* left */
        (xdc_Bits16)0xec1,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801f,  /* left */
        (xdc_Bits16)0xec6,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801f,  /* left */
        (xdc_Bits16)0xed1,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x801f,  /* left */
        (xdc_Bits16)0xed7,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0xedb,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0xee2,  /* right */
    },  /* [38] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x8012;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0xeea;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x27;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));

/* Module_startup */
xdc_Int ti_sysbios_family_msp430_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_msp430_Hwi_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.msp430.Timer FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_msp430_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_msp430_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_msp430_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_msp430_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_msp430_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_msp430_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_Timer_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sysbios_family_msp430_Timer_oneShotStub__ENTRY_EVT 0x0
#define ti_sysbios_family_msp430_Timer_oneShotStub__EXIT_EVT 0x0
#define ti_sysbios_family_msp430_Timer_oneShotNestStub__ENTRY_EVT 0x0
#define ti_sysbios_family_msp430_Timer_oneShotNestStub__EXIT_EVT 0x0
#define ti_sysbios_family_msp430_Timer_periodicStub__ENTRY_EVT 0x0
#define ti_sysbios_family_msp430_Timer_periodicStub__EXIT_EVT 0x0
#define ti_sysbios_family_msp430_Timer_periodicNestStub__ENTRY_EVT 0x0
#define ti_sysbios_family_msp430_Timer_periodicNestStub__EXIT_EVT 0x0
#define ti_sysbios_family_msp430_Timer_getHandle__ENTRY_EVT 0x0
#define ti_sysbios_family_msp430_Timer_getHandle__EXIT_EVT 0x0
#define ti_sysbios_family_msp430_Timer_reconfig__ENTRY_EVT 0x0
#define ti_sysbios_family_msp430_Timer_reconfig__EXIT_EVT 0x0

/* oneShotStub__E */
xdc_Void ti_sysbios_family_msp430_Timer_oneShotStub__E( xdc_UArg arg ) 
{
    ti_sysbios_family_msp430_Timer_oneShotStub__F(arg);
}

/* oneShotNestStub__E */
xdc_Void ti_sysbios_family_msp430_Timer_oneShotNestStub__E( xdc_UArg arg ) 
{
    ti_sysbios_family_msp430_Timer_oneShotNestStub__F(arg);
}

/* periodicStub__E */
xdc_Void ti_sysbios_family_msp430_Timer_periodicStub__E( xdc_UArg arg ) 
{
    ti_sysbios_family_msp430_Timer_periodicStub__F(arg);
}

/* periodicNestStub__E */
xdc_Void ti_sysbios_family_msp430_Timer_periodicNestStub__E( xdc_UArg arg ) 
{
    ti_sysbios_family_msp430_Timer_periodicNestStub__F(arg);
}

/* getHandle__E */
ti_sysbios_family_msp430_Timer_Handle ti_sysbios_family_msp430_Timer_getHandle__E( xdc_UInt id ) 
{
    return ti_sysbios_family_msp430_Timer_getHandle__F(id);
}

/* reconfig__E */
xdc_Void ti_sysbios_family_msp430_Timer_reconfig__E( ti_sysbios_family_msp430_Timer_Handle __inst, ti_sysbios_family_msp430_Timer_FuncPtr tickFxn, const ti_sysbios_family_msp430_Timer_Params* timerParams, xdc_runtime_Error_Block* eb ) 
{
    ti_sysbios_family_msp430_Timer_reconfig__F((void*)__inst, tickFxn, timerParams, eb);
}

/* Module_startup */
xdc_Int ti_sysbios_family_msp430_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_msp430_Timer_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.msp430.TimestampProvider FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_msp430_TimestampProvider_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_msp430_TimestampProvider_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_msp430_TimestampProvider_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_msp430_TimestampProvider_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_msp430_TimestampProvider_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_TimestampProvider_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_TimestampProvider_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_TimestampProvider_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_TimestampProvider_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_TimestampProvider_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sysbios_family_msp430_TimestampProvider_startTimer__ENTRY_EVT 0x0
#define ti_sysbios_family_msp430_TimestampProvider_startTimer__EXIT_EVT 0x0
#define ti_sysbios_family_msp430_TimestampProvider_rolloverFunc__ENTRY_EVT 0x0
#define ti_sysbios_family_msp430_TimestampProvider_rolloverFunc__EXIT_EVT 0x0

/* startTimer__E */
xdc_Void ti_sysbios_family_msp430_TimestampProvider_startTimer__E( void ) 
{
    ti_sysbios_family_msp430_TimestampProvider_startTimer__F();
}

/* rolloverFunc__E */
xdc_Void ti_sysbios_family_msp430_TimestampProvider_rolloverFunc__E( xdc_UArg unused ) 
{
    ti_sysbios_family_msp430_TimestampProvider_rolloverFunc__F(unused);
}

/* Module_startup */
xdc_Int ti_sysbios_family_msp430_TimestampProvider_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_msp430_TimestampProvider_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sysbios_gates_GateHwi_query__ENTRY_EVT 0x0
#define ti_sysbios_gates_GateHwi_query__EXIT_EVT 0x0

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_CString control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Error_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Error_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Error_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Error_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Error_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Error_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Error_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Error_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Error_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Error_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Error_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Error_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Error_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Error_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Error_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Error_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Error_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Error_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_Error_check__ENTRY_EVT 0x0
#define xdc_runtime_Error_check__EXIT_EVT 0x0
#define xdc_runtime_Error_getData__ENTRY_EVT 0x0
#define xdc_runtime_Error_getData__EXIT_EVT 0x0
#define xdc_runtime_Error_getCode__ENTRY_EVT 0x0
#define xdc_runtime_Error_getCode__EXIT_EVT 0x0
#define xdc_runtime_Error_getId__ENTRY_EVT 0x0
#define xdc_runtime_Error_getId__EXIT_EVT 0x0
#define xdc_runtime_Error_getMsg__ENTRY_EVT 0x0
#define xdc_runtime_Error_getMsg__EXIT_EVT 0x0
#define xdc_runtime_Error_getSite__ENTRY_EVT 0x0
#define xdc_runtime_Error_getSite__EXIT_EVT 0x0
#define xdc_runtime_Error_init__ENTRY_EVT 0x0
#define xdc_runtime_Error_init__EXIT_EVT 0x0
#define xdc_runtime_Error_print__ENTRY_EVT 0x0
#define xdc_runtime_Error_print__EXIT_EVT 0x0
#define xdc_runtime_Error_raiseX__ENTRY_EVT 0x0
#define xdc_runtime_Error_raiseX__EXIT_EVT 0x0

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_CString file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.GateNull FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool xdc_runtime_GateNull_query__E( xdc_Int qual ) 
{
    return xdc_runtime_GateNull_query__F(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_GateNull_enter__E( xdc_runtime_GateNull_Handle __inst ) 
{
    return xdc_runtime_GateNull_enter__F((void*)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_GateNull_leave__E( xdc_runtime_GateNull_Handle __inst, xdc_IArg key ) 
{
    xdc_runtime_GateNull_leave__F((void*)__inst, key);
}


/*
 * ======== xdc.runtime.HeapMin FUNCTION STUBS ========
 */

/* getStats__E */
xdc_Void xdc_runtime_HeapMin_getStats__E( xdc_runtime_HeapMin_Handle __inst, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_HeapMin_getStats__F((void*)__inst, stats);
}

/* alloc__E */
xdc_Ptr xdc_runtime_HeapMin_alloc__E( xdc_runtime_HeapMin_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_HeapMin_alloc__F((void*)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_HeapMin_free__E( xdc_runtime_HeapMin_Handle __inst, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_HeapMin_free__F((void*)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_HeapMin_isBlocking__E( xdc_runtime_HeapMin_Handle __inst ) 
{
    return xdc_runtime_HeapMin_isBlocking__F((void*)__inst);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.LoggerBuf FUNCTION STUBS ========
 */

/* enable__E */
xdc_Bool xdc_runtime_LoggerBuf_enable__E( xdc_runtime_LoggerBuf_Handle __inst ) 
{
    return xdc_runtime_LoggerBuf_enable__F((void*)__inst);
}

/* disable__E */
xdc_Bool xdc_runtime_LoggerBuf_disable__E( xdc_runtime_LoggerBuf_Handle __inst ) 
{
    return xdc_runtime_LoggerBuf_disable__F((void*)__inst);
}

/* write0__E */
xdc_Void xdc_runtime_LoggerBuf_write0__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid ) 
{
    xdc_runtime_LoggerBuf_write0__F((void*)__inst, evt, mid);
}

/* write1__E */
xdc_Void xdc_runtime_LoggerBuf_write1__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1 ) 
{
    xdc_runtime_LoggerBuf_write1__F((void*)__inst, evt, mid, a1);
}

/* write2__E */
xdc_Void xdc_runtime_LoggerBuf_write2__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2 ) 
{
    xdc_runtime_LoggerBuf_write2__F((void*)__inst, evt, mid, a1, a2);
}

/* write4__E */
xdc_Void xdc_runtime_LoggerBuf_write4__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2, xdc_IArg a3, xdc_IArg a4 ) 
{
    xdc_runtime_LoggerBuf_write4__F((void*)__inst, evt, mid, a1, a2, a3, a4);
}

/* write8__E */
xdc_Void xdc_runtime_LoggerBuf_write8__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2, xdc_IArg a3, xdc_IArg a4, xdc_IArg a5, xdc_IArg a6, xdc_IArg a7, xdc_IArg a8 ) 
{
    xdc_runtime_LoggerBuf_write8__F((void*)__inst, evt, mid, a1, a2, a3, a4, a5, a6, a7, a8);
}

/* setFilterLevel__E */
xdc_Void xdc_runtime_LoggerBuf_setFilterLevel__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Diags_Mask mask, xdc_runtime_Diags_EventLevel filterLevel ) 
{
    xdc_runtime_LoggerBuf_setFilterLevel__F((void*)__inst, mask, filterLevel);
}

/* getFilterLevel__E */
xdc_runtime_Diags_Mask xdc_runtime_LoggerBuf_getFilterLevel__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Diags_EventLevel level ) 
{
    return xdc_runtime_LoggerBuf_getFilterLevel__F((void*)__inst, level);
}

/* flushAll__E */
xdc_Void xdc_runtime_LoggerBuf_flushAll__E( void ) 
{
    xdc_runtime_LoggerBuf_flushAll__F();
}

/* flushAllInternal__E */
xdc_Void xdc_runtime_LoggerBuf_flushAllInternal__E( xdc_Int stat ) 
{
    xdc_runtime_LoggerBuf_flushAllInternal__F(stat);
}

/* reset__E */
xdc_Void xdc_runtime_LoggerBuf_reset__E( xdc_runtime_LoggerBuf_Handle __inst ) 
{
    xdc_runtime_LoggerBuf_reset__F((void*)__inst);
}

/* flush__E */
xdc_Void xdc_runtime_LoggerBuf_flush__E( xdc_runtime_LoggerBuf_Handle __inst ) 
{
    xdc_runtime_LoggerBuf_flush__F((void*)__inst);
}

/* getNextEntry__E */
xdc_Int xdc_runtime_LoggerBuf_getNextEntry__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_EventRec* evtRec ) 
{
    return xdc_runtime_LoggerBuf_getNextEntry__F((void*)__inst, evtRec);
}

/* Module_startup */
xdc_Int xdc_runtime_LoggerBuf_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_LoggerBuf_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Registry_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Registry_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Registry_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Registry_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Registry_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Registry_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Registry_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Registry_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Registry_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Registry_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Registry_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Registry_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Registry_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Registry_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Registry_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Registry_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Registry_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Registry_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_Registry_addModule__ENTRY_EVT 0x0
#define xdc_runtime_Registry_addModule__EXIT_EVT 0x0
#define xdc_runtime_Registry_findByName__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findByName__EXIT_EVT 0x0
#define xdc_runtime_Registry_findByNamePattern__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findByNamePattern__EXIT_EVT 0x0
#define xdc_runtime_Registry_findById__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findById__EXIT_EVT 0x0
#define xdc_runtime_Registry_getMask__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getMask__EXIT_EVT 0x0
#define xdc_runtime_Registry_isMember__ENTRY_EVT 0x0
#define xdc_runtime_Registry_isMember__EXIT_EVT 0x0
#define xdc_runtime_Registry_getNextModule__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getNextModule__EXIT_EVT 0x0
#define xdc_runtime_Registry_getModuleName__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getModuleName__EXIT_EVT 0x0
#define xdc_runtime_Registry_getModuleId__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getModuleId__EXIT_EVT 0x0

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_CString modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_CString modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_CString namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_CString name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_CString xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysMin FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysMin_abort__E( xdc_CString str ) 
{
    xdc_runtime_SysMin_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysMin_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysMin_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysMin_flush__E( void ) 
{
    xdc_runtime_SysMin_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysMin_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysMin_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysMin_ready__E( void ) 
{
    return xdc_runtime_SysMin_ready__F();
}

/* Module_startup */
xdc_Int xdc_runtime_SysMin_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_SysMin_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_CString str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vsnprintf__E */
xdc_Int xdc_runtime_System_vsnprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsnprintf__F(buf, n, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_CString pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.GateNull */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_GateNull_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_GateNull_Object__create__S(oa, osz, aa, (xdc_runtime_GateNull___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    xdc_runtime_GateNull_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_GateNull_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return xdc_runtime_GateNull_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return xdc_runtime_GateNull_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return xdc_runtime_GateNull_enter((xdc_runtime_GateNull_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    xdc_runtime_GateNull_leave((xdc_runtime_GateNull_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_msp430_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_msp430_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_msp430_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_msp430_Hwi_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_msp430_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_msp430_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_msp430_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_msp430_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_msp430_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_msp430_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_msp430_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_msp430_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_msp430_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_msp430_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_msp430_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_msp430_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_msp430_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_msp430_Hwi_getFunc((ti_sysbios_family_msp430_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_msp430_Hwi_setFunc((ti_sysbios_family_msp430_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_msp430_Hwi_getHookContext((ti_sysbios_family_msp430_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_msp430_Hwi_setHookContext((ti_sysbios_family_msp430_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Hwi_getIrp((ti_sysbios_family_msp430_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_msp430_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_family_msp430_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_msp430_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_msp430_Timer_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_msp430_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_msp430_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_msp430_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_msp430_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_family_msp430_Timer_getMaxTicks((ti_sysbios_family_msp430_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_family_msp430_Timer_setNextTick((ti_sysbios_family_msp430_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_msp430_Timer_start((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_msp430_Timer_stop((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_msp430_Timer_setPeriod((ti_sysbios_family_msp430_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_msp430_Timer_setPeriodMicroSecs((ti_sysbios_family_msp430_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getPeriod((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getCount((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_msp430_Timer_getFreq((ti_sysbios_family_msp430_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_msp430_Timer_getFunc((ti_sysbios_family_msp430_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_msp430_Timer_setFunc((ti_sysbios_family_msp430_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_msp430_Timer_trigger((ti_sysbios_family_msp430_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getExpiredCounts((ti_sysbios_family_msp430_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_msp430_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_LoggerBuf_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_LoggerBuf_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_LoggerBuf_Module_GateProxy_enter__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_LoggerBuf_Module_GateProxy_leave__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_LoggerBuf_TimestampProxy_get32__E( void )
{
    return ti_sysbios_family_msp430_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sysbios_family_msp430_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_msp430_TimestampProvider_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.HeapMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_HeapMin_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_HeapMin_Object__create__S(oa, osz, aa, (xdc_runtime_HeapMin___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    xdc_runtime_HeapMin_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_HeapMin_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return xdc_runtime_HeapMin_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.msp430.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_msp430_Hwi_Object2__ s0; char c; } ti_sysbios_family_msp430_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(ti_sysbios_family_msp430_Hwi___S1) - sizeof(ti_sysbios_family_msp430_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_msp430_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_msp430_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_msp430_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.family.msp430.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_msp430_Timer_Object2__ s0; char c; } ti_sysbios_family_msp430_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(ti_sysbios_family_msp430_Timer___S1) - sizeof(ti_sysbios_family_msp430_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_msp430_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_msp430_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_msp430_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.GateNull OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_GateNull_Object2__ s0; char c; } xdc_runtime_GateNull___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_GateNull_Object__DESC__C = {
    (Ptr)&xdc_runtime_GateNull_Module__FXNS__C, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(xdc_runtime_GateNull___S1) - sizeof(xdc_runtime_GateNull_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_GateNull_Object2__), /* objSize */
    (Ptr)&xdc_runtime_GateNull_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_GateNull_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.HeapMin OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_HeapMin_Object2__ s0; char c; } xdc_runtime_HeapMin___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_HeapMin_Object__DESC__C = {
    (Ptr)&xdc_runtime_HeapMin_Module__FXNS__C, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(xdc_runtime_HeapMin___S1) - sizeof(xdc_runtime_HeapMin_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_HeapMin_Object2__), /* objSize */
    (Ptr)&xdc_runtime_HeapMin_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_HeapMin_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.LoggerBuf OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerBuf_Object2__ s0; char c; } xdc_runtime_LoggerBuf___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C = {
    (Ptr)&xdc_runtime_LoggerBuf_Module__FXNS__C, /* fxnTab */
    (Ptr)0, /* modLink */
    sizeof(xdc_runtime_LoggerBuf___S1) - sizeof(xdc_runtime_LoggerBuf_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerBuf_Object2__), /* objSize */
    (Ptr)&xdc_runtime_LoggerBuf_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerBuf_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_GateNull_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.msp430.ClockFreqs SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_ClockFreqs_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_msp430_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_msp430_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_msp430_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_msp430_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_msp430_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_msp430_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32790;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_msp430_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_msp430_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_msp430_Hwi_Object__*)ti_sysbios_family_msp430_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_msp430_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_family_msp430_Hwi_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    return NULL;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_family_msp430_Hwi_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_msp430_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_msp430_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_msp430_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_msp430_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_msp430_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_msp430_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_msp430_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32792;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_msp430_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_msp430_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_family_msp430_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_msp430_Timer_Object__*)ti_sysbios_family_msp430_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_msp430_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_family_msp430_Timer_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    return NULL;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_msp430_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_msp430_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_family_msp430_Timer_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== ti.sysbios.family.msp430.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_TimestampProvider_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32806;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_gates_GateHwi_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    return NULL;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_gates_GateHwi_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_hal_Hwi_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    return NULL;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_hal_Hwi_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_hal_Timer_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    return NULL;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_hal_Timer_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;

    /* assert oa is not null */
    if (oa == NULL) {
        xdc_runtime_Error_raiseX(NULL, ti_sysbios_knl_Clock_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    }

    /* common instance initialization */
    obj = xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_knl_Clock_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;


    /* assert oa is not null */
    if (oa == NULL) {
        xdc_runtime_Error_raiseX(NULL, ti_sysbios_knl_Queue_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    }

    /* common instance initialization */
    obj = xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_knl_Queue_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_knl_Swi_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    return NULL;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, ti_sysbios_knl_Swi_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.GateNull SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_GateNull_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_GateNull_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_GateNull_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_GateNull_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_GateNull_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_GateNull_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_GateNull_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_GateNull_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_GateNull_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_GateNull_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_GateNull_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_GateNull_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_GateNull_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_GateNull_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_GateNull_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_GateNull_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_GateNull_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_GateNull_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_GateNull_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_GateNull_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32776;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_GateNull_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
}

/* Object__get__S */
xdc_Ptr xdc_runtime_GateNull_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_GateNull_Object__*)oa) + i;
    }

    if (xdc_runtime_GateNull_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_GateNull_Object__*)xdc_runtime_GateNull_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_GateNull_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr xdc_runtime_GateNull_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr xdc_runtime_GateNull_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_GateNull___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_Error_raiseX(NULL, xdc_runtime_GateNull_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    return NULL;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_GateNull_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&xdc_runtime_GateNull_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_GateNull_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, xdc_runtime_GateNull_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== xdc.runtime.HeapMin SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_HeapMin_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_HeapMin_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_HeapMin_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_HeapMin_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_HeapMin_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_HeapMin_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_HeapMin_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_HeapMin_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_HeapMin_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_HeapMin_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_HeapMin_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_HeapMin_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_HeapMin_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_HeapMin_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_HeapMin_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_HeapMin_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_HeapMin_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_HeapMin_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_HeapMin_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_HeapMin_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32781;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_HeapMin_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
}

/* Object__get__S */
xdc_Ptr xdc_runtime_HeapMin_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_HeapMin_Object__*)oa) + i;
    }

    if (xdc_runtime_HeapMin_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_HeapMin_Object__*)xdc_runtime_HeapMin_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_HeapMin_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr xdc_runtime_HeapMin_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr xdc_runtime_HeapMin_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_HeapMin___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_Error_raiseX(NULL, xdc_runtime_HeapMin_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    return NULL;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_HeapMin_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&xdc_runtime_HeapMin_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_HeapMin_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, xdc_runtime_HeapMin_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerBuf SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__S( void ) 
{
    return xdc_runtime_LoggerBuf_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_LoggerBuf_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32778;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerBuf_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_LoggerBuf_Object__*)oa) + i;
    }

    if (xdc_runtime_LoggerBuf_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_LoggerBuf_Object__*)xdc_runtime_LoggerBuf_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__first__S( void ) 
{
    return NULL;
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__next__S( xdc_Ptr obj ) 
{
    return NULL;
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_LoggerBuf___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_Error_raiseX(NULL, xdc_runtime_LoggerBuf_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"create policy error", 0);
    return NULL;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_LoggerBuf_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_destructObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerBuf_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Error_raiseX(NULL, xdc_runtime_LoggerBuf_Module__id__C, NULL, 0, xdc_runtime_Error_E_generic, (xdc_IArg)"delete policy error", 0);
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_LoggerBuf_TimestampProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_HeapMin_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */


/*
 * ======== CONSTANTS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__FXNS__C, ".const:xdc_runtime_GateNull_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__FXNS__C, ".const:xdc_runtime_HeapMin_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__FXNS__C, ".const:xdc_runtime_LoggerBuf_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__PARAMS__C, ".const:xdc_runtime_GateNull_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Object__PARAMS__C, ".const:xdc_runtime_HeapMin_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__PARAMS__C, ".const:xdc_runtime_LoggerBuf_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__id__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__count__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__heap__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__table__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_ACLK__C, ".const:ti_sysbios_family_msp430_ClockFreqs_ACLK__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_SMCLK__C, ".const:ti_sysbios_family_msp430_ClockFreqs_SMCLK__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__DESC__C, ".const:ti_sysbios_family_msp430_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_msp430_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__id__C, ".const:ti_sysbios_family_msp430_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__count__C, ".const:ti_sysbios_family_msp430_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__heap__C, ".const:ti_sysbios_family_msp430_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_msp430_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__table__C, ".const:ti_sysbios_family_msp430_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_LM_begin__C, ".const:ti_sysbios_family_msp430_Hwi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_LD_end__C, ".const:ti_sysbios_family_msp430_Hwi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_E_notImplemented__C, ".const:ti_sysbios_family_msp430_Hwi_E_notImplemented__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_hooks__C, ".const:ti_sysbios_family_msp430_Hwi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__DESC__C, ".const:ti_sysbios_family_msp430_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__gateObj__C, ".const:ti_sysbios_family_msp430_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__id__C, ".const:ti_sysbios_family_msp430_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__count__C, ".const:ti_sysbios_family_msp430_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__heap__C, ".const:ti_sysbios_family_msp430_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__sizeof__C, ".const:ti_sysbios_family_msp430_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__table__C, ".const:ti_sysbios_family_msp430_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_msp430_Timer_E_invalidTimer__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_notAvailable__C, ".const:ti_sysbios_family_msp430_Timer_E_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_msp430_Timer_E_cannotSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_runtimeCreate__C, ".const:ti_sysbios_family_msp430_Timer_E_runtimeCreate__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_anyMask__C, ".const:ti_sysbios_family_msp430_Timer_anyMask__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_keepAwake__C, ".const:ti_sysbios_family_msp430_Timer_keepAwake__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_startupNeeded__C, ".const:ti_sysbios_family_msp430_Timer_startupNeeded__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_numTimerDevices__C, ".const:ti_sysbios_family_msp430_Timer_numTimerDevices__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_timerId__C, ".const:ti_sysbios_family_msp430_TimestampProvider_timerId__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_msp430_TimestampProvider_useClockTimer__C");
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_clockSource__C, ".const:ti_sysbios_family_msp430_TimestampProvider_clockSource__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__DESC__C, ".const:xdc_runtime_GateNull_Object__DESC__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__PARAMS__C, ".const:xdc_runtime_GateNull_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__diagsEnabled__C, ".const:xdc_runtime_GateNull_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__diagsIncluded__C, ".const:xdc_runtime_GateNull_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__diagsMask__C, ".const:xdc_runtime_GateNull_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__gateObj__C, ".const:xdc_runtime_GateNull_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__gatePrms__C, ".const:xdc_runtime_GateNull_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__id__C, ".const:xdc_runtime_GateNull_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerDefined__C, ".const:xdc_runtime_GateNull_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerObj__C, ".const:xdc_runtime_GateNull_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerFxn0__C, ".const:xdc_runtime_GateNull_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerFxn1__C, ".const:xdc_runtime_GateNull_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerFxn2__C, ".const:xdc_runtime_GateNull_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerFxn4__C, ".const:xdc_runtime_GateNull_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerFxn8__C, ".const:xdc_runtime_GateNull_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__startupDoneFxn__C, ".const:xdc_runtime_GateNull_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__count__C, ".const:xdc_runtime_GateNull_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__heap__C, ".const:xdc_runtime_GateNull_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__sizeof__C, ".const:xdc_runtime_GateNull_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__table__C, ".const:xdc_runtime_GateNull_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Object__DESC__C, ".const:xdc_runtime_HeapMin_Object__DESC__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Object__PARAMS__C, ".const:xdc_runtime_HeapMin_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__diagsEnabled__C, ".const:xdc_runtime_HeapMin_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__diagsIncluded__C, ".const:xdc_runtime_HeapMin_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__diagsMask__C, ".const:xdc_runtime_HeapMin_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__gateObj__C, ".const:xdc_runtime_HeapMin_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__gatePrms__C, ".const:xdc_runtime_HeapMin_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__id__C, ".const:xdc_runtime_HeapMin_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__loggerDefined__C, ".const:xdc_runtime_HeapMin_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__loggerObj__C, ".const:xdc_runtime_HeapMin_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__loggerFxn0__C, ".const:xdc_runtime_HeapMin_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__loggerFxn1__C, ".const:xdc_runtime_HeapMin_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__loggerFxn2__C, ".const:xdc_runtime_HeapMin_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__loggerFxn4__C, ".const:xdc_runtime_HeapMin_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__loggerFxn8__C, ".const:xdc_runtime_HeapMin_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Module__startupDoneFxn__C, ".const:xdc_runtime_HeapMin_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Object__count__C, ".const:xdc_runtime_HeapMin_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Object__heap__C, ".const:xdc_runtime_HeapMin_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Object__sizeof__C, ".const:xdc_runtime_HeapMin_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_Object__table__C, ".const:xdc_runtime_HeapMin_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_A_zeroSize__C, ".const:xdc_runtime_HeapMin_A_zeroSize__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_E_freeError__C, ".const:xdc_runtime_HeapMin_E_freeError__C");
#pragma DATA_SECTION(xdc_runtime_HeapMin_freeError__C, ".const:xdc_runtime_HeapMin_freeError__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__DESC__C, ".const:xdc_runtime_LoggerBuf_Object__DESC__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__PARAMS__C, ".const:xdc_runtime_LoggerBuf_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsEnabled__C, ".const:xdc_runtime_LoggerBuf_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsIncluded__C, ".const:xdc_runtime_LoggerBuf_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsMask__C, ".const:xdc_runtime_LoggerBuf_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gateObj__C, ".const:xdc_runtime_LoggerBuf_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gatePrms__C, ".const:xdc_runtime_LoggerBuf_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__id__C, ".const:xdc_runtime_LoggerBuf_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerDefined__C, ".const:xdc_runtime_LoggerBuf_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerObj__C, ".const:xdc_runtime_LoggerBuf_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn0__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn1__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn2__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn4__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn8__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__startupDoneFxn__C, ".const:xdc_runtime_LoggerBuf_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__count__C, ".const:xdc_runtime_LoggerBuf_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__heap__C, ".const:xdc_runtime_LoggerBuf_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__sizeof__C, ".const:xdc_runtime_LoggerBuf_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__table__C, ".const:xdc_runtime_LoggerBuf_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_filterByLevel__C, ".const:xdc_runtime_LoggerBuf_filterByLevel__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_E_badLevel__C, ".const:xdc_runtime_LoggerBuf_E_badLevel__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_enableFlush__C, ".const:xdc_runtime_LoggerBuf_enableFlush__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_statusLogger__C, ".const:xdc_runtime_LoggerBuf_statusLogger__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level1Mask__C, ".const:xdc_runtime_LoggerBuf_level1Mask__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level2Mask__C, ".const:xdc_runtime_LoggerBuf_level2Mask__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level3Mask__C, ".const:xdc_runtime_LoggerBuf_level3Mask__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level4Mask__C, ".const:xdc_runtime_LoggerBuf_level4Mask__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
