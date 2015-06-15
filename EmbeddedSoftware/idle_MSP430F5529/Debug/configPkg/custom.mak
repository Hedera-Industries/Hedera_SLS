## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,e430X linker.cmd package/cfg/idle_pe430X.oe430X

linker.cmd: package/cfg/idle_pe430X.xdl
	$(SED) 's"^\"\(package/cfg/idle_pe430Xcfg.cmd\)\"$""\"F:/Documents/Hedera/Hedera_SLS/EmbeddedSoftware/idle_MSP430F5529/Debug/configPkg/\1\""' package/cfg/idle_pe430X.xdl > $@
