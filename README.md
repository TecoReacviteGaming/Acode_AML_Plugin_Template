# Acode Mod Template
A repository used for compiling AML Plugin in Acode!

Download Acode [from here](<https://f-droid.org/packages/com.foxdebug.acode/>) and grant storage permission and make sure **manage all files** are allowed.

## 📁 Importing NDK
Download one of NDK depending on your phone.
- [NDK for 32-bit/ARMv7 phones](<https://mega.nz/folder/2c1TWIJD#UCzO7kIo1e4WpFwZHIMYVw/file/XRlRTIjJ>)
- [NDK for 64-bit/ARM64 phones](<https://mega.nz/folder/2c1TWIJD#UCzO7kIo1e4WpFwZHIMYVw/file/7RdTzYxQ>)

After downloaded the NDK, open terminal by ctrl + shift + p then search for terminal and run the following commands:

Add package
```bash
apk update && apk upgrade
apk add tar
```

For extracting tar.gz
```bash
mv /sdcard/Download/ndk_arm.tar.gz $HOME
tar -xzf ndk_arm.tar.gz
rm -rf ndk_arm.tar.gz
```
if 64-bit
```bash
mv /sdcard/Download/ndk_arm64.tar.gz $HOME
tar -xzf ndk_arm64.tar.gz
rm -rf ndk_arm64.tar.gz
```
And wait until finished.

Now, click on 3 vertical dots at the top and look for folder named "android-ndk-aide" after that rename it to "android-ndk", now move on to next step.

## 👨🏻‍💻 Compiling shared library (.so)
After NDK is imported, move your shared library folder into Acode, first download this repository and extract AcodeTemplate folder.

then enter the following commands:
```bash
mkdir -p User/SharedLibrary/
mv /sdcard/Download/AcodeTemplate/ $HOME/User/SharedLibrary/
```
After that click on 3 horizontal lines at the top and open files then look for AcodeTemplate folder.

now compilation time, long click on AcodeTemplate folder then open in terminal and then run the following commands:
```bash
./build.sh
```

Run this once if it throws an error saying that permission denied.
```bash
chmod +x build.sh
```