#if c_DS18B20 == 1
    
    sens18b20.begin();
    sens18b20.setResolution(12);
    // sens18b20.setWaitForConversion(true);
    // sens18b20.setCheckForConversion(true);
    // sens18b20.requestTemperatures();

 long DS18B20_TaskErr =  xTaskCreate(TaskDS18B20,"TaskDS18B20",10000,NULL,0,NULL);
    syslog_ng("EC add Task:" + fFTS(DS18B20_TaskErr, 0));
#endif // c_DS18B20