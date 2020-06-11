#include <WiFi.h>
 configuración nula ()
{
    De serie. comenzar ( 115200 );

    // Establezca WiFi en modo estación y desconéctese de un AP si anteriormente estaba conectado 
    WiFi. modo (WIFI_STA);
    Wifi. desconectar ();
    retraso ( 100 );

    De serie. println ( " Configuración realizada " );
}

 bucle vacío ()
{
    De serie. println ( " inicio de escaneo " );

    // WiFi.scanNetworks devolverá el número de redes encontradas 
    int n = WiFi. scanNetworks ();
    De serie. println ( " escaneo hecho " );
    si (n == 0 ) {
        De serie. println ( " no se encontraron redes " );
    } 
 

    }
    De serie. println ( " " );

    // Espere un poco antes de escanear nuevamente 
    delay ( 5000 );
}
