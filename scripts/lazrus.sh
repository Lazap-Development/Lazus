#!/bin/sh

clear 

# Create the folder where Lazus will be installed
mkdir -p ~/.lazap/runners

# Go into the directory
cd ~/.lazap/runners

# Grab the ALPHA version.
wget https://github.com/Lazap-Development/Lazus/releases/download/lazus-alpha/Lazus-0.0.1-ALPHA.tar.gz

# Extract the tarball
tar -xvf Lazus-0.0.1-ALPHA.tar.gz

# Create the correct steam directory.
mkdir -p ~/.steam/root/compatibilitytools.d

# Extract the tarball there 
tar -xvf Lazus-0.0.1-ALPHA.tar.gz -C ~/.steam/root/compatibilitytools.d

clear

echo "Make sure to read the README to setup Lazus in Steam. Enjoy!"
exit