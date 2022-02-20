<?php

class Product
{
    private $idProduct = "";
    private $price = 0;

    public function __construct($idP="", $p=0)
    {
        $this->idProduct = $idP;
        $this->price = $p;
    }
    
    public function setIdProduct($idP = "")
    {
        $this->idProduct = $idP;
    }

    public function getIdProduct()
    {
        return $this->idProduct;
    }

    public function setPrice($p = 0)
    {
        $this->price = $p;
    }

    public function getPrice()
    {
        return $this->price;
    }
}

?>