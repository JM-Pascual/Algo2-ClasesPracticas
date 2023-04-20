# AyP2: Clases Prácticas

Práctica polimorfismo y templates:

1. Tenemos una reserva de animales, cada animal debe saber moverse. Al hacerlo se presentará y dirá como se mueve (
   nadando, volando, etc).<br>
   En principio existen 2 secciones una para aves y una para peces. En la sección de aves tendremos pelicanos y
   gaviotas, en la de peces tiburones y peces payaso.<br>
   <ol>
   <li>Armar una lista de la manada que permita cualquier tipo de animal utilizando templates y STL. Armar una manada de 
   cada pez payaso y otra de gaviotas y pedir que se muevan.</li>
   <li>Agregar un pingüino a la sección de las aves, los mismos no vuelan, en cambio caminan o nadan.</li>
   <li>¿Qué es necesario modificar para agregar reptiles?</li>
   </ol>
   Resolver utilizando lo visto de objetos, templates, polimorfismo y herencia.<br>

2. Crear un sistema de peaje, los vehículos se identifican según la cantidad de ruedas y sus propiedades:
   <ol>
   <li>Moto: 2 ruedas, $20 por ser moto</li>
   <li>Auto: 4 ruedas, $50 por ser auto, 5% descuento si tiene telepase</li>
   <li>Camión: +4, $100 por ser camión, 10% descuento si tiene telepase</li>
   </ol>
   El calculo del peaje se realiza multiplicando la cantidad de ruedas por el costo por rueda ($10) + el costo según el 
   tipo de vehículo y si cuenta con telepase se realiza el descuento pertinente.
   Los vehículos se pueden agregar por consola o a través de un archivo de texto (elegir 1 de las opciones). Si se hace 
   por consola consultar si termino de agregar vehículos y luego calcular el total ganado con los peajes y cuanto se 
   ganó con cada categoría. En caso de usar archivos calcularlo al terminar de leer.<br>
   Resolver utilizando lo visto de objetos, polimorfismo y herencia.<br>

   Extra:
3. Armar una clase Pez y crear tres clases de peces que hereden de la misma:
    1. Payaso realizar la herencia con public Pez
    2. Globo realizar la herencia con protected Pez
    3. Koi realizar la herencia con private Pez

   La clase Pez debe tener como atributos: nombre (publico), edad (protegido) y estaAlimentado (privado) que se
   inicializar con el constructor de Pez.<br>
   Instancie un objeto de las siguientes clases e intente acceder a cada uno de los atributos de forma directa,
   indicando que pasa en cada caso:
    1. Pez
    2. Payaso
    3. Globo
    4. Koi

4. Agregar a la clase Pez un método alimentarse que sea virtual puro ¿Qué implica esto para las clases hijas?<br>
   Cada clase implementa el método imprimiedo por la pantalla “Hola soy {nombre} el pez {tipo} y me alimente con
   {tipo_alimento}:
    1. Payaso se alimenta de algas
    2. Globo se alimenta de invertebrados
    3. Koi se alimenta de plantas

   Pruebe lo implementado llamando el método desde los objetos creados en el punto anterior ¿Qué ocurre?

5. Arme un vector estanque con todos los peces y alimente a cada uno de ellos. Realice los ajustes necesarios a la hora
   de crear los objetos para poder incluirlos en el mismo vector.