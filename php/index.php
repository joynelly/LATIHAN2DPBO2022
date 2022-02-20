<?php

include "Product.php";
include "Hardware.php";
include "Memory.php";

echo "<h2> LATIHAN 2 DPBO - MULTILEVELS INHERITANCE </h2>";

#membuat data dengan multilevel Inheritance
#variabel dibuat dengan kelas turunan paling bawah (Memory)

$data1 = new Memory("980MHz", "6Gb", "Yes");
$data1->setBrand("NVIDIA");
$data1->setModel("GTX760");
$data1->setIdProduct("LAT2DPBO2022");
$data1->setPrice(570000);

#menampilkan data
echo "ID Product    : " . $data1->getIdProduct() . "<br>";
echo "Price         : Rp. " . $data1->getPrice() . "<br>";
echo "Brand         : " . $data1->getBrand() . "<br>";
echo "Model         : " . $data1->getModel() . "<br>";
echo "Frequency     : " . $data1->getFrequency() . "<br>";
echo "Memory Size   : " . $data1->getMemorySize() . "<br>";
echo "Supports Cuda : " . $data1->getSupportsCuda() . "<br>";

?>