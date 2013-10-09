#define SI4313_DEVTYPE         0x00
#define SI4313_VERSION         0x01
#define SI4313_DEVSTATUS       0x02
#define SI4313_INTPSTAT1       0x03
#define SI4313_INTPSTAT2       0x04
#define SI4313_INTPENB1        0x05
#define SI4313_INTPENB2        0x06
#define SI4313_CONTROL1        0x07
#define SI4313_CONTROL2        0x08
#define SI4313_XTLOAD          0x09
#define SI4313_MCUCLK          0x0a
#define SI4313_GPIO0           0x0b
#define SI4313_GPIO1           0x0c
#define SI4313_GPIO2           0x0d
#define SI4313_IOPORT          0x0e
#define SI4313_ADCCFG          0x0f
#define SI4313_ADCOFFS         0x10
#define SI4313_ADCVAL          0x11
#define SI4313_TEMPCTRL        0x12
#define SI4313_TEMPOFFS        0x13
#define SI4313_WUTPER1         0x14
#define SI4313_WUTPER2         0x15
#define SI4313_WUTPER3         0x16
#define SI4313_WUTVAL1         0x17
#define SI4313_WUTVAL2         0x18
#define SI4313_LOWBATT         0x1a
#define SI4313_BATTLVL         0x1b
#define SI4313_IFBW            0x1c
#define SI4313_AFCOVRD         0x1d
#define SI4313_AFCCTRL         0x1e
#define SI4313_CLKOVERD        0x1f
#define SI4313_CLKRATIO        0x20
#define SI4313_CLKOFFS2        0x21
#define SI4313_CLKOFFS1        0x22
#define SI4313_CLKOFFS0        0x23
#define SI4313_CLKLPGAIN1      0x24
#define SI4313_CLKLPGAIN0      0x25
#define SI4313_RSSI            0x26
#define SI4313_RSSITHRESH      0x27
#define SI4313_AFCLIMITER      0x2a
#define SI4313_AFCCORR         0x2b
#define SI4313_OOKCTR1         0x2c
#define SI4313_OOKCTR2         0x2d
#define SI4313_SLICER          0x2e
#define SI4313_FIFOCFG         0x30
#define SI4313_PRECTRL         0x35
#define SI4313_SYNC3           0x36
#define SI4313_SYNC2           0x37
#define SI4313_SYNC1           0x38
#define SI4313_SYNC0           0x39
#define SI4313_CHFILTADDR      0x60
#define SI4313_XTTEST          0x62
#define SI4313_AGCOVERD1       0x69
#define SI4313_MODCTRL1        0x70
#define SI4313_MODCTRL2        0x71
#define SI4313_FREQOFFS1       0x73
#define SI4313_FREQOFFS2       0x74
#define SI4313_FREQSEL         0x75
#define SI4313_FREQCARR1       0x76
#define SI4313_FREQCARR0       0x77
#define SI4313_FREQHOPSEL      0x79
#define SI4313_FREQHOPSZ       0x7a
#define SI4313_RXFIFOCTRL      0x7e
#define SI4313_FIFOACCESS      0x7f

#define SI4313_TYPE 0x08
#define SI4313_B1VER 0x06

#define BIT_SWRES 7
#define BIT_IPOR 0
#define BIT_ICHIPRDY 1
