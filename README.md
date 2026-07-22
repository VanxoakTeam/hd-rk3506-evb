# HD-RK3506-EVB 补丁包
本仓库为 RK3506 Linux 6.1 SDK 的补丁包，用于适配 万象奥科HD-RK3506-EVB 开发板（支持 NAND 和 SD卡 两种启动介质）。

该补丁包主要包含针对 Buildroot 根文件系统、设备树、内核配置等定制化修改，以便快速构建适配该开发板的固件。


## 📦 前置条件
- Ubuntu 20.04 / 22.04 开发主机（推荐 64 位）
- 已安装必要编译环境
- 主机需具备 RK3506 SDK 基础源码包（百度网盘下载），建议预留 100 GB 以上磁盘空间

## 📥 1. 下载基础 SDK 源码包

## 🔧 2. 获取本补丁包
```bash
cd ~/

git clone https://github.com/vanxoakTeam/hd-rk3506-evb.git
cd hd-rk3506-evb
```

## 📂 3. 应用补丁
将补丁包所有文件复制到 SDK 根目录（请确认 SDK 解压路径，以下以 ~/rk3506_linux6.1_sdk_v1.2.0/ 为例）：

```bash
cp -rfvd ./* ~/rk3506_linux6.1_sdk_v1.2.0/
```

说明：

补丁包内的文件会覆盖 SDK 中的同名文件（包括 buildroot/ 下的配置、device/rockchip/ 下的板级文件、kernel/ 下的设备树等）。

建议在应用补丁前，备份原始 SDK（如 cp -r ~/rk3506_linux6.1_sdk_v1.2.0 ~/rk3506_sdk_backup），以便后续追溯。

## 🚀 4. 编译固件
进入 SDK 根目录，选择对应的板级配置并执行编译：

```bash
cd ~/rk3506_linux6.1_sdk_v1.2.0/
./build.sh lunch
```
此时会列出所有可用配置项：

```bash
1. rockchip_rk3502_robot_defconfig
2. rockchip_rk3506_b_evb1_defconfig
3. rockchip_rk3506_g_demo_defconfig
4. rockchip_rk3506_g_evb1_amp_defconfig
5. rockchip_rk3506_g_evb1_defconfig
6. rockchip_rk3506_g_evb1_mcu_defconfig
7. rockchip_rk3506_g_evb1_smp_defconfig
8. rockchip_rk3506_g_evb2_defconfig
9. rockchip_rk3506_g_evb_nand_defconfig   ← 【HD-RK3506-EVB NAND 版】
10. rockchip_rk3506_g_evb_sd_defconfig    ← 【HD-RK3506-EVB SD卡 版】
```

## ⚠️ 5. 注意事项
1️⃣ 路径差异
若 SDK 解压目录名与示例不同，请修改 cp 命令中的目标路径。

2️⃣ 依赖完整性
首次编译时会自动下载 Buildroot 所需源码包。若网络不佳，可参考 Buildroot 离线编译指南预先准备 dl/ 目录。

3️⃣ 补丁版本对应
本补丁包基于百度网盘 v1.2 版本的 SDK 制作。若后续 SDK 版本更新，可能出现冲突，建议以本仓库 README 为准。

4️⃣ 反馈与支持
如遇编译问题或补丁不适用，请提 Issue 或联系万象奥科技术支持。

