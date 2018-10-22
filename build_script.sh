#!/bin/sh

export CROSS_COMPILE=$PWD/prebuilts/gcc/linux-x86/aarch64/gcc-linaro-5.5.0-2017.10-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-
export PATH=$PATH:$PWD/prebuilts/gcc/linux-x86/aarch64/gcc-linaro-5.5.0-2017.10-x86_64_aarch64-linux-gnu/bin
cd kernel
if [ -d out ]; then
  echo "---------------------------------------------------"
  echo "Erasing old out build directory"
  echo "---------------------------------------------------"
  rm -rf out
fi
mkdir out
echo "---------------------------------------------------"
echo "Creating default config"
echo "---------------------------------------------------"
make O=out ARCH=arm64 merge_msm8953_64_defconfig
echo "---------------------------------------------------"
echo "Starting building kernel"
echo "---------------------------------------------------"
make -j6 O=out ARCH=arm64
