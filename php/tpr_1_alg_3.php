<?php
/**
 * @fveral
 * Date: 16/08/2016
 * Time: 16:59 PM
 *
 * Dada una secuencia de números leídos por teclado, que acabe con un –1, por ejemplo: 5,3,0,2,4,4,0,0,2,3,6,0,……,-1;
 * Realizar el algoritmo que calcule la media aritmética.
 *
 */

echo "Bienvenido a TPR-3! \n";
echo "Ejecutando el Tercer Algoritmo\n";
echo "Dada una secuencia de números leídos por teclado, que acabe con un –1, por ejemplo: 5,3,0,2,4,4,0,0,2,3,6,0,……,-1; Realizar el algoritmo que calcule la media aritmética.\n";

$numero = 0;
$total = 0;
$i = 0;

while ($numero != -1) {

    echo "Ingrese un número: ";
    $numero = (integer)fgets(STDIN);

    if ($numero >= 0) {
        $total += $numero;
        $i++;
    }
}

echo "De " . $i . " números la suma es: " . number_format($total, 2, '.', ',') . " y la media aritmetica es " . number_format($total / $i, 2, '.', ',') . ".";

exit;

?>