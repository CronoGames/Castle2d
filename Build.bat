@echo off

set CommonCompilerFlags=-diagnostics:column -WL -O2 -nologo -fp:fast -fp:except- -Gm- -GR- -EHa- -Zo -Oi -WX -W4 -wd4201 -wd4100 -wd4189 -wd4505 -wd4127 -FC -Z7 -GS- -Gs9999999
set CommonCompilerFlags=-DCASTLE_INTERNAL=1 -DCASTLE_SLOW=1 -DCASTLE_WIN32=1 %CommonCompilerFlags%
set CommonLinkerFlags=-STACK:0x100000,0x100000 -incremental:no -opt:ref user32.lib gdi32.lib winmm.lib bcrypt.lib kernel32.lib

IF NOT EXIST .\Data mkdir .\Data
IF NOT EXIST .\Build mkdir .\Build
pushd .\build

del *.pdb > NUL 2> NUL

REM 64-bit build
REM Optimization switches /wO2
echo WAITING FOR PDB > lock.tmp

REM Game
REM cl %CommonCompilerFlags% -MTd -I..\iaca-win64\ ..\handmade\code\handmade.cpp ..\handmade\code\handmade_msvc.c -Fmhandmade.map -LD /link -incremental:no -opt:ref -PDB:handmade_%random%.pdb -EXPORT:GameGetSoundSamples -EXPORT:GameUpdateAndRender -EXPORT:DEBUGGameFrameEnd
set LastError=%ERRORLEVEL%
del lock.tmp
cl %CommonCompilerFlags% ..\Source\win32_castle2d.cpp ..\Source\castle_msvc.c -Fmwin32_castle.map /link /SUBSYSTEM:windows %CommonLinkerFlags%
REM cl %CommonCompilerFlags% ..\Source\win32_castle2d.cpp ..\Source\castle_msvc.c -Fmwin32_castle.map /link /NODEFAULTLIB /SUBSYSTEM:windows %CommonLinkerFlags%
popd