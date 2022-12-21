#!/bin/sh

GIT_COLOR="#f14e32"

git_color_text() {
  text=$1
  gum style --foreground "$GIT_COLOR" "$text"
}

options() {
    gum choose "Clone" "Configure" "Install" "Redist" 
}

selected_options=$(command)

gum style \
  --border double \
  --margin "1" \
  --padding "1" \
  --border-foreground "$GIT_COLOR" \
  "$(git_color_text "") Lazus Install Script"

echo "$(git_color_text "Choose what to do with Lazus.")"
command=$(gum choose Clone Configure Install Release)

echo $selected_options | tr " " "\n" | while read options
do

  case $command in

    Clone)
    echo "Cloning the Root Respository"
    git clone --recurse-submodules https://github.com/Lazap-Development/Lazus.git lazus
    ;;

    Configure)
    mkdir ../build && cd ../build && ../configure.sh --enable-ccache --build-name=Lazus --container-engine=podman
    ;;
    Install)
      echo "Installing Lazus to Steam's root directory"
      cd ../build && make install
      ;;
    Release)
      echo "Creating the release tarball for Lazrus"
      cd ../build && make redist
      ;;
  esac
done