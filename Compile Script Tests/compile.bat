@echo off
for /f "tokens=*" %%s in (compile.txt) do (
  gcc %%s
)
echo ------------------ SCRIPT IN ACTION ------------------
a.exe
pause