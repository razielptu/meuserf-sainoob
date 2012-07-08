@echo off
title Iniciando Servidor
echo Pronto para Executar, Pressione alguma tecla
pause >nul
cls
title Ativando 0/3
start /b logserv.bat
title Ativando 1/3
ping localhost -w 5000 >nul
start /b charserv.bat
title Ativando 2/3
ping localhost -w 5000 >nul
start /b mapserv.bat
title Ativando 3/3
ping localhost -w 5000 >nul
title Cronus.