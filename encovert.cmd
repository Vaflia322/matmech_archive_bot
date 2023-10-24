@echo off

set qwerty=65001

set poiu=1251

chcp %qwerty%


if "%1" == "/?" (

echo                  --- СПРАВКА ---
echo     У enconvert.cmd есть две команды:
echo     1. /? - вывести справку о командах скрипта.
echo     2. directory - заменить кодировку файла,
echo        создавая копию файла с новой кодировкой.
echo     * также пользователю сообщается об ошибке, в случае *
echo              ее возникновения с помощью errorlevel.
)

if "%1" == "directory" (
chcp %poiu%

for %%f in (1, 2, 3) do (

cmd /U /C type %%f.txt >> %%f_total.txt


del /F /Q %%f.txt
ren %%f_total.txt %%f.txt
))

echo.
echo.

chcp %qwerty%

if errorlevel 2 (

echo There are some errors in the program
echo errorlevel: %errorlevel%

) else (

echo Errors are missing!
echo errorlevel: %errorlevel%)