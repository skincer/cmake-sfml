
Set SFML_ROOT environment variable to your SFML location

In /build run cmake .. (see OS specific commands below)

In the IDE set APP as the startup project instead of ALL_BUILD

Update the COPYING document as needed


Windows Specific:

Run cmake -D SFML_STATIC_LIBRARIES=TRUE ..

Copy openal32.dll to /build

Mac Specific:

Run cmake .. -GXcode
