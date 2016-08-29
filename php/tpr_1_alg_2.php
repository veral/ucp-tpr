<?php
/**
 * @fveral
 * Date: 16/08/2016
 * Time: 13:59 PM
 *
 * La universidad desea saber qué porcentaje de hombres y qué porcentaje de mujeres hay en el curso actual.
 *
 */

echo "Bienvenido a TPR-2! \n";
echo "Ejecutando el Segundo Algoritmo\n";
echo "La universidad desea saber qué porcentaje de hombres y qué porcentaje de mujeres hay en el curso actual.\n";

echo "Ingrese la cantidad de hombres: ";
$hombres = (integer)fgets(STDIN);

echo "Ingrese la cantidad de mujeres: ";
$mujeres = (integer)fgets(STDIN);

$totalCurso = $hombres + $mujeres;

$porHombres = (($hombres * 100) / $totalCurso);
$porMujeres = 100 - $porHombres;

echo "El curso tiene un " . number_format($porMujeres, 2, '.', ',') . "% de Mujeres y un " . number_format($porHombres, 2, '.', ',') . "% de hombres. De un total de: " . $totalCurso . " alumnos.";

exit;

?>