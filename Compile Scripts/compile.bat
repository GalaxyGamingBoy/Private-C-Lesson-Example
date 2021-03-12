@echo off
for /f "tokens=*" %%s in (compile.txt) do (
  gcc %%s
)
a.exe
pause