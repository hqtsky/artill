#set size ratio -1

c(x)=1
plot [] [] "trajs.dat" using (-$3):12 w l lw 2 t "Mach vs Z"
replot "trajs.dat" using (-$3):(-$6/340) w l lw 2 t "-V/340 vs Z"
replot c(x) w l lw 1 lt 3 t ""
#replot "trajs.dat" using 1:($3/10) w l lw 1 lt 2 t "Y/10"
#replot "trajs.dat" using 1:(10000*$12) smooth bezier w l lw 2
#replot "earth.dat" w l lw 2 title "Earth"
#replot "art.dat" using 2:3

pause 1000
