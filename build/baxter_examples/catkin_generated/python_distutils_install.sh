#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/louis/ros_ws/src/baxter_examples"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/louis/ros_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/louis/ros_ws/install/lib/python2.7/dist-packages:/home/louis/ros_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/louis/ros_ws/build" \
    "/usr/bin/python" \
    "/home/louis/ros_ws/src/baxter_examples/setup.py" \
    build --build-base "/home/louis/ros_ws/build/baxter_examples" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/louis/ros_ws/install" --install-scripts="/home/louis/ros_ws/install/bin"
