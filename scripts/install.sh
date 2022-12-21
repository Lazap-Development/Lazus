#!/bin/sh

GIT_COLOR="#f14e32"

git_color_text() {
  text=$1
  gum style --foreground "$GIT_COLOR" "$text"
}

options() {
    gum choose "configure" "install" "redist" 
}

selected_options=$(command)

gum style \
  --border double \
  --margin "1" \
  --padding "1" \
  --border-foreground "$GIT_COLOR" \
  "$(git_color_text "") Lazus Install Script"

echo "$(git_color_text "Choose what to do with Lazus.")"
command=$(gum choose configure install release)

echo $selected_options | tr " " "\n" | while read options
do

  case $command in

    configure)
    mkdir ../build && cd ../build && ../configure.sh --enable-ccache --build-name=Lazus --container-engine=podman
    ;;
    install)
      echo "Installing Lazus to Steam's root directory"
      cd ../build && make install
      ;;
    release)
      echo "Creating the release tarball for Lazrus"
      cd ../build && make redist
      ;;
  esac
done