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
    kkk ,sec = sw.seconds(); // == Ta + Tb
    sec = sw.seconds(); // == Ta + Tb
