#!/bin/sh

clear

echo "Installing the latest version of GUM!"

mkdir -p ~/.local/src/gum

# CD to the install directory
cd ~/.local/src/gum

# Download the tarball & extract it
wget https://github.com/charmbracelet/gum/releases/download/v0.8.0/gum_0.8.0_linux_x86_64.tar.gz && tar -xvf gum_0.8.0_linux_x86_64.tar.gz

# Remove the tarball
rm -rf gum_0.8.0_linux_x86_64.tar.gz

# Head back to the previous directory and finish the script.
cd -