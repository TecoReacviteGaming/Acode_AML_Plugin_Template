# Acode Mod Template
A repository used for compiling AML Plugin in Android using Acode besides AIDE!

Download Acode [from here](<https://f-droid.org/packages/com.foxdebug.acode/>) and grant storage permission and make sure **manage all files** are allowed.

This repository guide you on how to compile shared library (.so) on Android without AIDE, the setups might take a while.

The terminal Acode using is Alpine Linux, doesn't need Termux.

## Importing NDK 📁
Download the NDK below.
- [android-ndk-r29-aarch64 (Termux NDK-BUILD)](<https://github.com/lzhiyong/termux-ndk>)

After downloaded the NDK, open Acode then open terminal by clicking on 3 vertical dots at the top then look for terminal and run the following commands:

Add the package:
```bash
apk update && apk upgrade
apk add 7zip
```

Extract the **7z** you downloaded:
```bash
mv /sdcard/Download/android-ndk-r29-aarch64.7z $HOME
7z x android-ndk-r29-aarch64.7z
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
