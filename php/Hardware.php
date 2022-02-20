<?php

class Hardware extends Product
{
    private $brand = "";
    private $model = "";

    public function __construct($b="", $m="")
    {
        $this->brand = $b;
        $this->model = $m;
    }

    public function setBrand($b = "")
    {
        $this->brand = $b;
    }

    public function getBrand()
    {
        return $this->brand;
    }

    public function setModel($m = "")
    {
        $this->model = $m;
    }

    public function getModel()
    {
        return $this->model;
    }

}

?>