
/*
 * Do not modify this file; it is automatically generated from the template
 * linkcmd.xdt in the ti.platforms.msp430 package and will be overwritten.
 */

/*
 * put '"'s around paths because, without this, the linker
 * considers '-' as minus operator, not a file name character.
 */


-l"F:\Documents\Hedera\Hedera_SLS\EmbeddedSoftware\idle_MSP430F5529\Debug\configPkg\package\cfg\idle_pe430X.oe430X"
-l"F:\Documents\Hedera\Hedera_SLS\EmbeddedSoftware\idle_MSP430F5529\src\sysbios\sysbios.ae430X"
-l"C:\ti\xdctools_3_25_04_88\packages\ti\catalog\msp430\init\lib\ti.catalog.msp430.init.ae430X"
-l"C:\ti\xdctools_3_25_04_88\packages\ti\targets\msp430\rts430\lib\ti.targets.msp430.rts430.ae430X"

--retain="*(xdc.meta)"
--retain="*(xdc.noload)"


/* Elf symbols */
--symbol_map __TI_STACK_BASE=_stack
--symbol_map __TI_STACK_SIZE=_STACK_SIZE
--symbol_map __TI_STATIC_BASE=__bss__
--symbol_map __c_int00=_c_int00
--symbol_map __TI_cleanup_ptr=_cleanup_ptr
--symbol_map __TI_dtors_ptr=_dtors_ptr


--args 0x0
-heap  0x0
-stack 0x200

/*
 * Linker command file contributions from all loaded packages:
 */

/* Content from xdc.services.global (null): */

/* Content from xdc (null): */

/* Content from xdc.corevers (null): */

/* Content from xdc.shelf (null): */

/* Content from xdc.services.spec (null): */

/* Content from xdc.services.intern.xsr (null): */

/* Content from xdc.services.intern.gen (null): */

/* Content from xdc.services.intern.cmd (null): */

/* Content from xdc.bld (null): */

/* Content from ti.targets (null): */

/* Content from ti.targets.msp430.elf (null): */

/* Content from xdc.rov (null): */

/* Content from xdc.runtime (null): */

/* Content from xdc.services.getset (null): */

/* Content from ti.targets.msp430.rts430 (null): */

/* Content from ti.sysbios.interfaces (null): */

/* Content from ti.sysbios.family (null): */

/* Content from ti.sysbios.hal (null): */

/* Content from ti.sysbios.rts (null): */

/* Content from xdc.runtime.knl (null): */

/* Content from xdc.platform (null): */

/* Content from ti.catalog.msp430 (null): */

/* Content from ti.catalog (null): */

/* Content from ti.catalog.msp430.init (null): */

/* Content from xdc.cfg (null): */

/* Content from ti.catalog.msp430.peripherals.interrupt (null): */

/* Content from ti.catalog.msp430.peripherals.special_function (null): */

/* Content from ti.catalog.msp430.peripherals.timer (null): */

/* Content from ti.catalog.msp430.peripherals.watchdog (null): */

/* Content from ti.catalog.msp430.peripherals.clock (null): */

/* Content from ti.platforms.msp430 (null): */

/* Content from ti.sysbios (null): */

/* Content from ti.sysbios.knl (null): */

/* Content from ti.sysbios.family.msp430 (null): */

/* Content from ti.sysbios.gates (null): */

/* Content from ti.sysbios.xdcruntime (null): */

/* Content from ti.sysbios.utils (null): */

/* Content from configPkg (null): */

/* Content from xdc.services.io (null): */



/*
 * symbolic aliases for static instance objects
 */
xdc_runtime_Startup__EXECFXN__C = 1;
xdc_runtime_Startup__RESETFXN__C = 1;


SECTIONS
{



    xdc.meta: type = COPY
}

