# Lazus

## **THIS IS AN EARLY BUILD, PLEASE USE WITH CAUTION!**

## Installation

1. Clone this repo by executing:

```sh
git clone --recurse-submodules git@github.com:Lazap-Development/Lazus.git lazus
```

2. To apply the patches, run:

```sh
./patches/protonprep-valve-staging.sh &> patchlog.txt
```

Sending the output to a patchlog will help with identifing any errors in the patching process.

3. Run these commands to check for errors.
```sh
grep -i fail patchlog.txt
grep -i error patchlog.txt 
```

4. Navigate the the parent directory containing the root folder.

5. Type the following (note: if using docker instead of podman, change to --container-engine=docker):

```sh
mkdir build && cd build
../configure.sh --enable-ccache --build-name=SOME-BUILD-NAME-HERE --container-engine=podman
make redist &> log
```

Build will be placed within the build directory as SOME-BUILD-NAME-HERE.tar.gz.

## Enabling (Still testing)

This is the main wine launcher for Lazap, but it will require it to be enabled in steam by default. 

1. Right click any game in Steam and click `Properties`.
2. At the bottom of the `Compatibility` tab, Check `Force the use of a specific Steam Play compatibility tool`, then select the desired Lazus version.
3. Launch the game.

## Support?

If you need help with anything, please join [Dashcruft Nation](discord.gg/dashcruft) to get help!