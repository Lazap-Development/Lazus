#!/bin/sh

clear

echo "Installing the latest version of GUM!"

mkdir -p ~/.local/src/gum

# CD to the install directory
cd ~/.local/src/gum

# Download the tarball & extract it
wget https://github.com/charmbracelet/gum/releases/download/v0.8.0/gum-0.8.0.tar.gz && tar -xvf gum-0.8.0.tar.gz

# Remove the tarball
rm -rf gum-0.8.0.tar.gz

# Head back to the previous directory and finish the script.
cd -