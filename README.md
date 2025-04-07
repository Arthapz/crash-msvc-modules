```
> xmake -v
checking for C:\Program Files (x86)\Microsoft Visual Studio\2022\Preview\VC\Tools\MSVC\14.44.34918\bin\HostX64\x64\cl.exe ... ok
checking for flags (cl_scan_dependencies) ... ok
checking for flags (cl_ifc_output) ... ok
[  0%]: <crash-msvc> generating.module.deps src\main.cpp
C:\Program Files (x86)\Microsoft Visual Studio\2022\Preview\VC\Tools\MSVC\14.44.34918\bin\HostX64\x64\cl.exe -nologo -std:c++latest /EHsc -TP -scanDependencies build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\f85317cd\main.cpp.module.json src\main.cpp -ifcOutput build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\f85317cd -Fobuild\.objs\crash-msvc\windows\x64\release\src\main.cpp.obj
[  0%]: <crash-msvc> generating.module.deps src\module.ixx
C:\Program Files (x86)\Microsoft Visual Studio\2022\Preview\VC\Tools\MSVC\14.44.34918\bin\HostX64\x64\cl.exe -nologo -std:c++latest /EHsc -TP -scanDependencies build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\f85317cd\module.ixx.module.json src\module.ixx -ifcOutput build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\f85317cd -Fobuild\.objs\crash-msvc\windows\x64\release\src\module.ixx.obj
[  0%]: <crash-msvc> generating.module.deps C:\Program Files (x86)\Microsoft Visual Studio\2022\Preview\VC\Tools\MSVC\14.44.34918\modules\std.compat.ixx
C:\Program Files (x86)\Microsoft Visual Studio\2022\Preview\VC\Tools\MSVC\14.44.34918\bin\HostX64\x64\cl.exe -nologo -std:c++latest /EHsc -TP -scanDependencies build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\a83cdc1e\std.compat.ixx.module.json "C:\\Program Files (x86)\\Microsoft Visual Studio\\2022\\Preview\\VC\\Tools\\MSVC\\14.44.34918\\modules\\std.compat.ixx" -ifcOutput build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\a83cdc1e -Fobuild\.objs\crash-msvc\windows\x64\release\4db68334b60e4f25a887058256d7b847\std.compat.ixx.obj
[  0%]: <crash-msvc> generating.module.deps C:\Program Files (x86)\Microsoft Visual Studio\2022\Preview\VC\Tools\MSVC\14.44.34918\modules\std.ixx
C:\Program Files (x86)\Microsoft Visual Studio\2022\Preview\VC\Tools\MSVC\14.44.34918\bin\HostX64\x64\cl.exe -nologo -std:c++latest /EHsc -TP -scanDependencies build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\a83cdc1e\std.ixx.module.json "C:\\Program Files (x86)\\Microsoft Visual Studio\\2022\\Preview\\VC\\Tools\\MSVC\\14.44.34918\\modules\\std.ixx" -ifcOutput build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\a83cdc1e -Fobuild\.objs\crash-msvc\windows\x64\release\4db68334b60e4f25a887058256d7b847\std.ixx.obj
[ 37%]: <crash-msvc> compiling.module.release std
checking for flags (cl_interface) ... ok
checking for flags (cl_internal_partition) ... ok
"C:\\Program Files (x86)\\Microsoft Visual Studio\\2022\\Preview\\VC\\Tools\\MSVC\\14.44.34918\\bin\\HostX64\\x64\\cl.exe" -c -nologo -std:c++latest /EHsc -TP -ifcOutput build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\a83cdc1e\std.ifc -interface -Fobuild\.objs\crash-msvc\windows\x64\release\4db68334b60e4f25a887058256d7b847\std.ixx.obj "C:\\Program Files (x86)\\Microsoft Visual Studio\\2022\\Preview\\VC\\Tools\\MSVC\\14.44.34918\\modules\\std.ixx"
checking for flags (cl_reference) ... ok
checking for flags (cl_header_unit_quote) ... ok
checking for flags (cl_header_unit_angle) ... ok
[ 50%]: <crash-msvc> compiling.module.release mod
"C:\\Program Files (x86)\\Microsoft Visual Studio\\2022\\Preview\\VC\\Tools\\MSVC\\14.44.34918\\bin\\HostX64\\x64\\cl.exe" -c -nologo -std:c++latest /EHsc -reference std=build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\a83cdc1e\std.ifc -TP -ifcOutput build\.gens\crash-msvc\windows\x64\release\rules\bmi\cache\modules\f85317cd\mod.ifc -interface -Fobuild\.objs\crash-msvc\windows\x64\release\src\module.ixx.obj src\module.ixx
error: module.ixx
src\module.ixx(181): fatal error C1001: Internal compiler error.
(compiler file 'msc1.cpp', line 1586)
 To work around this problem, try simplifying or changing the program near the locations listed above.
If possible please provide a repro here: https://developercommunity.visualstudio.com
Please choose the Technical Support command on the Visual C++
 Help menu, or open the Technical Support help file for more information
INTERNAL COMPILER ERROR in 'C:\Program Files (x86)\Microsoft Visual Studio\2022\Preview\VC\Tools\MSVC\14.44.34918\bin\HostX64\x64\cl.exe'
    Please choose the Technical Support command on the Visual C++
    Help menu, or open the Technical Support help file for more information
```
