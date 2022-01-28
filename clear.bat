::删除编译生成的文件
rd /s /q .\simpleBlePeripheral\Objects
rd /s /q ..\OTA\slboot\Objects
del /s /q .\simpleBlePeripheral\simpleBlePeripheral.uvguix.*
del /s /q ..\OTA\slboot\slboot.uvguix.*
del /s /q .\simpleBlePeripheral\simpleBlePeripheral.asm

::pause
