

﻿

#include <iostream>

using namespace std;

//
//Single inheritance
//Əgər tək bir sinif bir əsas sinifdən yaranırsa, o, tək miras adlanır .
class Water {

};//base class;


class Sirab : public Water {

};//derived class;





//Multi level inheritance
//Əgər sinif başqa bir törəmə sinifdən yaranıbsa, ona çoxsəviyyəli miras deyilir.
class Water {};//base class;


class Naxcivan : public Water {

};//derived class;

class Badamli : public Naxcivan {

};//derived class;




//Multiple inheritance
//Əgər bir sinif iki və ya daha çox əsas sinifdən yaranırsa, ona çoxlu irsiyyət deyilir.
class Water {};//base class;

class Naxcivan {};//base class;


class Sirab : public Water, public Naxcivan {

};//derived class;




//Hierarchy
//Ümumi əsas sinifdən bir neçə sinif yarandıqda buna iyerarxik irsiyyət deyilir .
class Water {};//base class;

class Sirab : public Water {};//derived class;

class Badamli : public Water {};//derived class;

class Daridag : public Water {};//derived class;




int main() {


}