set -l device 1 # 0 = 6500m, 1 = 680m
set -l arch gfx1030

# set -Ux HIP_PATH /opt/rocm-6.2.0
# set -x HIP_PATH /opt/rocm
# set -x HSA_OVERRIDE_GFX_VERSION 10.3.0
# set -x HIP_VISIBLE_DEVICES $device
# set -x ROCR_VISIBLE_DEVICES (math $device + 1)
# set -x ROCR_VISIBLE_DEVICES $device
# set -e ROCR_VISIBLE_DEVICES
# set -x AMDGPU_TARGETS $arch
# set -x PYTORCH_ROCM_ARCH $arch
# set -x HCC_AMDGPU_TARGET $arch
# set -x PATH $PATH:$HIP_PATH/bin
# set -x HSA_ENABLE_SDMA 0

# set -x LD_PRELOAD /home/salman/Unsorted/hf/libforcegttalloc.so
# set -x LD_LIBRARY_PATH /opt/rocm/hip/lib
