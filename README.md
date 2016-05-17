# StopWatch

使用方法:
    StopWatch sw;
    sw.start();
    ... // Ta
    double sec = sw.seconds(); // == Ta


    sw.re_start();
    ... // Ta
    sw.stop();
    ... 
    sw.start();
    ...  // Tb
    sec = sw.seconds(); // == Ta + Tb
<<<<<<< HEAD
    kkk ,sec = sw.seconds(); // == Ta + Tb
=======
    sec = sw.seconds(); // == Ta + Tb
>>>>>>> 01bec7cc1dddc2580b1053093c6ab77f130b65ad
