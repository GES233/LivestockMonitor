# Monitor

## Overview

### Structure

```
+-docs/             Document.
|   |
|   o-...
--include/
--lib/
+-src/              source code.
|   |
|   +-connect/          connect with host or other device.
|   |   |
|   |   o-Connect.h
|   --eda/
|   +-emg/
|   |   |
|   |   o-FetchEMGSingal.h
|   |   o-RawDataGet.cpp
|   |   o-SingalPre.cpp
|   --model/            storage the model.
|   +-setting/          configuration the Chip.
|   |   |
|   |   o-Configure.h       storage Settings.
|   |   o-Configure.cpp     storage some methods to register.
|   o-Sensor.cpp        main program.
--test/             some code to test.
o-README.md
```

## Quike start
