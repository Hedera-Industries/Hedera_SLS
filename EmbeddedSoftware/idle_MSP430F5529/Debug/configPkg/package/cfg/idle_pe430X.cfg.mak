# invoke SourceDir generated makefile for idle.pe430X
idle.pe430X: .libraries,idle.pe430X
.libraries,idle.pe430X: package/cfg/idle_pe430X.xdl
	$(MAKE) -f F:\Documents\Hedera\Hedera_SLS\EmbeddedSoftware\idle_MSP430F5529/src/makefile.libs

clean::
	$(MAKE) -f F:\Documents\Hedera\Hedera_SLS\EmbeddedSoftware\idle_MSP430F5529/src/makefile.libs clean

