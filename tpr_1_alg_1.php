<?php
/**
 * @fveral
 * Date: 16/08/2016
 * Time: 01:01 PM
 * Calcular las horas trabajas por un empleado. Para ello se dispone de sus horas trabajadas en el mes y el monto
 * que percibe por hora, además, se debe descontar el aporte para su jubilación (11% del sueldo total).
 * El resultado debe mostrar el total neto y todos los descuentos.
 */

// Definir una constante
define("JUBILACION", 11);

echo "Bienvenido a TPR-1! \n";
echo "Ejecutando el Primer Algoritmo\n";
echo "Calcular las horas trabajas por un empleado. Para ello se dispone de sus horas trabajadas en el mes y el monto que percibe por hora, además, se debe descontar el aporte para su jubilación (11% del sueldo total).\nEl resultado debe mostrar el total neto y todos los descuentos.\n";

echo "Ingrese el nombre del empleado: ";
$empleado = fgets(STDIN);

echo "Ingrese las horas trabajadas: ";
$horasTrabajadas = (integer)fgets(STDIN);

echo "Ingrese el monto que percibe por hora: ";
$horasMes = (integer)fgets(STDIN);

$totalMes = $horasTrabajadas * $horasMes;
$jubilacion = $totalMes * 11 / 100;

$neto = $totalMes - $jubilacion;

echo "El empleado: " . $empleado . " percibe la suma de: " . $neto . " por " . $horasTrabajadas . " horas de trabajo en el mes y de descuento: ".$jubilacion." por la jubilación.";

exit;

?>