<?php

class Memory extends Hardware
{
    private $frequency = "";
    private $memorySize = "";
    private $supportsCuda = "";

    public function __construct($f="", $ms="", $sc="")
    {
        $this->frequency = $f;
        $this->memorySize = $ms;
        $this->supportsCuda = $sc;
    }

    public function setFrequency($f = "")
    {
        $this->frequency = $f;
    }

    public function getFrequency()
    {
        return $this->frequency;
    }

    public function setMemorySize($ms = "")
    {
        $this->memorySize = $ms;
    }

    public function getMemorySize()
    {
        return $this->memorySize;
    }

    public function setSupportsCuda($sc = "")
    {
        $this->supportsCuda = $sc;
    }

    public function getSupportsCuda()
    {
        return $this->supportsCuda;
    }
}


?>