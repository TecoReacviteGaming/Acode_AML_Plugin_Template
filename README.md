# Acode Mod Template
A repository used for compiling AML Plugin in Android using Acode besides AIDE!

Download Acode [from here](<https://f-droid.org/packages/com.foxdebug.acode/>) and grant storage permission and make sure **manage all files** are allowed.

This repository guide you on how to compile shared library (.so) on Android without AIDE, the setups might take a while.

The terminal is Alpine Linux which is built-in Acode, doesn't need Termux.

## Importing NDK 📁
Download one of NDK depending on your phone architecture. Download [this app](<https://play.google.com/store/apps/details?id=com.danielpolish.a64bitchecker>) to know what architecture your phone is using.
- [NDK for 32-bit/ARMv7 phones](<https://mega.nz/folder/2c1TWIJD#UCzO7kIo1e4WpFwZHIMYVw/file/XRlRTIjJ>)
- [NDK for 64-bit/ARM64 phones](<https://mega.nz/folder/2c1TWIJD#UCzO7kIo1e4WpFwZHIMYVw/file/7RdTzYxQ>)

After downloaded the NDK, open Acode then open terminal by clicking on 3 vertical dots at the top then look for terminal and run the following commands:

Add the package:
```bash
apk update && apk upgrade
apk add tar
```

Extract the **tar.gz** you downloaded:
```bash
mv /sdcard/Download/ndk_arm.tar.gz $HOME
tar -xzf ndk_arm.tar.gz && rm -rf ndk_arm.tar.gz
```
if 64-bit:
```bash
mv /sdcard/Download/ndk_arm64.tar.gz $HOME
tar -xzf ndk_arm64.tar.gz && rm -rf ndk_arm64.tar.gz
```
And wait until finished.

Now, click on 3 vertical dots at the top and then files then look for folder named "android-ndk-aide" after that rename it to "android-ndk", now move on to next step.

## Compile Shared Library ⚙️
After NDK is imported, move your shared library folder into Acode, first download this repository and extract **AcodeTemplate** folder then run the following commands:
```bash
mkdir -p User/SharedLibrary/
mv /sdcard/Download/AcodeTemplate/ $HOME/User/SharedLibrary/
```
After that click on 3 horizontal lines at the top and open files then look for AcodeTemplate folder located in **User/SharedLibrary** directory.

now compilation time, long click on AcodeTemplate folder then open in terminal and then run the following commands:
```bash
./build.sh
```

Run this once if it throws an error that says permission denied.
```bash
chmod +x build.sh
```
