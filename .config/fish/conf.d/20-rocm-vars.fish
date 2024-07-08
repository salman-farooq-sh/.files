set device 0 # 0 = 6500m, 1 = 680m
set arch gfx1030 # gfx1034 = 6500m, gfx1035 = 680m

set -x HSA_OVERRIDE_GFX_VERSION "10.3.0"
set -x HIP_PATH /opt/rocm
set -x HIP_VISIBLE_DEVICES $device
set -x AMDGPU_TARGETS $arch
set -x PYTORCH_ROCM_ARCH $arch
set -x HCC_AMDGPU_TARGET $arch

# set -x LD_PRELOAD /home/salman/Unsorted/hf/libforcegttalloc.so
# set -x ROCR_VISIBLE_DEVICES $device
