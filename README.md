#Manual De Uso

Archivo CSV:
  
  
  Covid19Casos.csv
  
  
  Debe ir al final del argumento.
  

Argumentos:/n
  -estad: Trae estadisticas pedidas.
  
  
  -p_casos[n]: Casos por provincias, ordenadas segun n.
  
  
  -p_muertes[n]: Fallecidos por provincias, ordenadas segun n.
  
  
  -casos_edad [n]: Todos los casos (positivos y negativos) de edad n ordenados por provincias.
  
  
  -casos_CUI[date]: Todos los casos en cuidados intensivos mas proximos a date.
  
Solicitud de Informacion a modo ejemplo:

  -estad Covid19Casos.csv
  
  -p_casos 4 Covid19Casos.csv
  
  -p_muertes 10 Covid19Casos.csv
  
  -casos_edad 54 Covid19Casos.csv
  
  -casos_CUI 2021-05-05 Covid19Casos.csv
  
  
Working directory: $ProjectFileDir$ para un mejor funcionamiento.


