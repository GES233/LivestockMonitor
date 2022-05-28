# LicestockMonitor
A model for monitoring livestock(pig) with electrophysiological status based on esp32.

No English version because my bad English level.

## 概述

科创大赛作品（没写完，如果没过就删库）。

大项目是**实时监测**猪的生理数据并且判断是否处于应激状态（性能与准确度允许就在本地测），并上传电生理数据至数据库以持久化保存。

因此该*子*项目的负责范围包括：

- 与主机通信并传输数据
- 监测并处理采集的数据
- 保存部分作为标识的数据，可以随时读取

### 代码结构

```
+-docs/             文档
|   |
|   o-Interfaces.md     通信接口定义 bla bla..
--include/
--lib/
+-src/              源代码
|   |
|   +-connect/          和主机/其他设备的通信
|   |   |
|   |   o-Connect.h
|   --eda/              采集皮肤电信息
|   |   |
|   |   o-FetchEDASingal.h  获取皮电信号
|   +-emg/              采集肌电信息
|   |   |
|   |   o-FetchEMGSingal.h  获取肌电信号
|   |   o-RawDataGet.cpp    存取数据以及设置传感器参数
|   |   o-SingalPre.cpp     信号预处理
|   --model/            保存模型
|   +-setting/          配置设备
|   |   |
|   |   o-Configure.h       保存设置
|   |   o-Configure.cpp     注册/删除配置的方法
|   |   o-setting.json      配置文件（烧录前请修改）
|   o-Sensor.cpp        主程序
--test/             测试代码
o-README.md         本文件
```

### 依赖项

- `<ArduinoJson>`

## 上手
