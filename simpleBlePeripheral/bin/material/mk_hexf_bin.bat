:fromelf -c -a -d -e -v -o simpleBlePeripheral.asm ./Objects/simpleBlePeripheral.axf
.\bin\material\PhyPlusKit_v2.5.2a.exe -c -p .\bin\simpleBlePeripheral.hex -b ..\..\OTA\slboot\bin\slboot.hex -m SN -v 6222
python .\bin\material\ooo_bin.py .\bin\simpleBlePeripheral_phy6222.hex16
:pause