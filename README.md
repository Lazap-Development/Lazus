# Lazus

## Overview

This build of Steam's Proton is meant to be used with Lazap.

It is being built with [GloriousEggroll's](https://github.com/GloriousEggroll) patches and proton's bleeding edge of Wine.

## Installation

PLEASE NOTE: There are prerequisites for using this version of proton:

1. You must have the proper Vulkan drivers/packages installed on your system. VKD3D on AMD requires Mesa 22.0.0 or higher for the VK_KHR_dynamic_rendering extension. Check [here ](https://github.com/lutris/docs/blob/master/InstallingDrivers.md) for general driver installation guidance.

### Manual

#### Native

This section is for those that use the native version of Steam.

1. Download a release from the [Releases](https://github.com/Lazap-Development/Lazus/releases) page.
2. Create a `~/.steam/root/compatibilitytools.d` directory if it does not exist.
3. Extract the release tarball into `~/.steam/root/compatabilitytools.d/`.
    * `tar -xf Lazus-VERSION.tar.gz -C ~/.steam/root/compatabilitytools.d/`.
4. Restart Steam.
5. [Enable Lazus](#enabling)

## Building

### NOTE: BUILDING IS MAINLY MEANT FOR DEVELOPERS OR PEOPLE WHO WANT TO CONFIGURE THIS BUILD FURTHER!

1. Make sure you have [Gum](https://github.com/charmbracelet/gum).
2. Paste this script into a Terminal Prompt:
```sh
   curl  https://raw.githubusercontent.com/Lazap-Development/Lazus/master/scripts/lazus-build.sh | sh
```
We used gum mainly just for aesthtic pleases, plus it offers an easy to use TUI.

## Enabling

## **DEVELOPERS ONLY** - Building

We now introduce an install script to build Lazrus for you!

NOTE: YOU NEED TO HAVE GUM INSTALLED.

Grab a [Binary](https://github.com/charmbracelet/gum/releases/tag/v0.8.0) from here and run install it.

now onto the fun stuff, run this command in a terminal:
```sh
curl https://raw.githubusercontent.com/Lazap-Development/Lazus/master/scripts/lazus-build.sh | sh
```

Then follow the prompts for using it

## Enabling (Still testing)

This is the main wine launcher for Lazap, but it will require it to be enabled in steam by default. 
=======
### Lazap
When first launched, it should notify you of install, it is a WIP though.
>>>>>>> 105e2d19 (clean up README and clear up any confusion)

### Steam
1. Right click any game in Steam and click `Properties`.
2. At the bottom of the `Compatibility` tab, Check `Force the use of a specific Steam Play compatibility tool`, then select the desired Proton version.
3. Launch the game.

## Modification

<<<<<<< HEAD
If you need help with anything, please join [Dashcruft Nation](discord.gg/dashcruft) to get help!
=======
Environment variable options:

| Compat config string  | Environment Variable           | Description  |
| :-------------------- | :----------------------------- | :----------- |
|                       | <tt>PROTON_LOG</tt>            | Convenience method for dumping a useful debug log to `$HOME/steam-$APPID.log`. For more thorough logging, use `user_settings.py`. |
|                       | <tt>PROTON_DUMP_DEBUG_COMMANDS</tt> | When running a game, Proton will write some useful debug scripts for that game into `$PROTON_DEBUG_DIR/proton_$USER/`. |
|                       | <tt>PROTON_DEBUG_DIR</tt>      | Root directory for the Proton debug scripts, `/tmp` by default. |
| <tt>wined3d</tt>      | <tt>PROTON_USE_WINED3D</tt>    | Use OpenGL-based wined3d instead of Vulkan-based DXVK for d3d11 and d3d10. This used to be called `PROTON_USE_WINED3D11`, which is now an alias for this same option. |
| <tt>nod3d12</tt>      | <tt>PROTON_NO_D3D12</tt>       | Disables DX12. |
| <tt>nod3d11</tt>      | <tt>PROTON_NO_D3D11</tt>       | Disables DX11. |
| <tt>nod3d10</tt>      | <tt>PROTON_NO_D3D10</tt>       | Disables DX10. |
| <tt>nod3d19</tt>      | <tt>PROTON_NO_D3D9</tt>        | Disables DX9.  |
| <tt>noesync</tt>      | <tt>PROTON_NO_ESYNC</tt>       | Do not use eventfd-based in-process synchronization primitives. |
| <tt>nofsync</tt>      | <tt>PROTON_NO_FSYNC</tt>       | Do not use futex-based in-process synchronization primitives. (Automatically disabled on systems with no `FUTEX_WAIT_MULTIPLE` support.) |
| <tt>forcelgadd</tt>   | <tt>PROTON_FORCE_LARGE_ADDRESS_AWARE</tt> | Force Wine to enable the LARGE_ADDRESS_AWARE flag for all executables. |
| <tt>heapdelayfree</tt>| <tt>PROTON_HEAP_DELAY_FREE</tt>| Delay freeing some memory, to work around application use-after-free bugs. |
| <tt>noxim</tt>        | <tt>PROTON_NO_XIM</tt>         | Enabled by default. Do not attempt to use XIM (X Input Methods) support. XIM support is known to cause crashes with libx11 older than version 1.7. |
| <tt>enablenvapi</tt>  | <tt>PROTON_ENABLE_NVAPI</tt>   | Enable NVIDIA's NVAPI GPU support library. |
| <tt>noforcelgadd</tt> |                                | Disable forcelgadd. If both this and `forcelgadd` are set, enabled wins. |
| <tt>oldglstr</tt>     | <tt>PROTON_OLD_GL_STRING</tt>  | Set some driver overrides to limit the length of the GL extension string, for old games that crash on very long extension strings. |
| <tt>cmdlineappend:</tt>|                               | Append the string after the colon as an argument to the game command. May be specified more than once. Escape commas and backslashes with a backslash. |
| <tt>seccomp</tt>      | <tt>PROTON_USE_SECCOMP</tt>    | Enable seccomp-bpf filter to emulate native syscalls, required for some DRM protections to work. |
| <tt>async</tt>      | <tt>DXVK_ASYNC</tt>    | Allows Async to be used with DXVK. This can help with stutter in some games, however it is recommended not to be used with games that have sensitive anti-cheats. Use at your own risk. |
| <tt>nowritewatch</tt> | <tt>PROTON_NO_WRITE_WATCH</tt> | Disable support for memory write watches in ntdll. This is a very dangerous hack and should only be applied if you have verified that the game can operate without write watches. This improves performance for some very specific games (e.g. CoreRT-based games). |
|                       | <tt>WINE_FULLSCREEN_FSR</tt>   | Enable AMD FidelityFX Super Resolution (FSR) 1, use in conjunction with `WINE_FULLSCREEN_FSR_STRENGTH`. Only works in Vulkan games (DXVK and VKD3D-Proton included). Enabled by default since GE-Proton7-29|
|                       | <tt>WINE_FULLSCREEN_FSR_STRENGTH</tt> | AMD FidelityFX Super Resolution (FSR) strength, the default sharpening of 5 is enough without needing modification, but can be changed with 0-5 if wanted. 0 is the maximum sharpness, higher values mean less sharpening. 2 is the AMD recommended default and is set by GE-Proton by default. |
|                       | <tt>WINE_FULLSCREEN_FAKE_CURRENT_RES</tt> | Set fake resolution of the screen. This can be useful in games that render in native resolution regardless of the selected resolution. Parameter `WIDTHxHEIGHT` |
|                       | <tt>WINE_DO_NOT_CREATE_DXGI_DEVICE_MANAGER</tt> | Set to 1 to enable. Required for video playback in some games to not be miscolored (usually tinted pink) |
>>>>>>> 105e2d19 (clean up README and clear up any confusion)
