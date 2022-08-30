// Gift2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

class Cand;

class Candy{
private:

    string name;
    int ves;
    double price;
public:
    void Glav(string name, int ves, int price)
    {
        this->name = name;
        this->ves = ves;
        this->price = price;
    }
    string GetName()
    {
        return name;
    }
    
    void SetName(string name)
    {
        this->name = name;
    }
    int GetVes()
    {
        return ves;
    }

    void SetVes(int ves)
    {
        this->ves = ves;
    }
    double GetPrice()
    {
        return price;
    }

    void SetName(double price)
    {
        this->price = price;
    }
};
class Cand :public Candy {
public:
    string name = "Candy";
    int ves = 15;
    double price = 4;
    string barashik = "Sweet";

};
class Chocolate {
private:

    string name;
    int ves;
    double price;
public:
    void Glav(string name, int ves, int price)
    {
        this->name = name;
        this->ves = ves;
        this->price = price;
    }
    string GetName()
    {
        return name;
    }

    void SetName(string name)
    {
        this->name = name;
    }
    int GetVes()
    {
        return ves;
    }

    void SetVes(int ves)
    {
        this->ves = ves;
    }
    double GetPrice()
    {
        return price;
    }

    void SetName(double price)
    {
        this->price = price;
    }
};
class Choc :public Chocolate {
public:
    string name = "Chocolate";
    int ves = 150;
    double price = 22;
    string barashik = "Country";

};
class Jellybean {
private:

    string name;
    int ves;
    double price;
public:
    void Glav(string name, int ves, int price)
    {
        this->name = name;
        this->ves = ves;
        this->price = price;
    }
    string GetName()
    {
        return name;
    }

    void SetName(string name)
    {
        this->name = name;
    }
    int GetVes()
    {
        return ves;
    }

    void SetVes(int ves)
    {
        this->ves = ves;
    }
    double GetPrice()
    {
        return price;
    }

    void SetName(double price)
    {
        this->price = price;
    }
};
class jelbn :public Jellybean {
public:
    string name = "JellyBean";
    int ves = 50;
    double price = 10;
    string barashik = "Stringy";

};


int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Подарок собран " << "\n" << "\n";
    int s, pricing=0, weight=0;
    Candy cab;
    Cand ap;
    Chocolate chocolat;
    Choc Choca;
    Jellybean Jelly;
    jelbn jelb;
    for (int i = 0; i < 3; i++)
    {
        
        s = 1 + rand() % 3;
        switch (s)
        {
        case 1:
            cab.Glav(ap.name, ap.ves, ap.price);
            cout << cab.GetName() << "\n" << cab.GetVes() << " гр" << "\n" << cab.GetPrice() << " руб" << "\n" << ap.barashik;
            weight += ap.ves;
            pricing += ap.price;
            break;
        case 2:
            chocolat.Glav(Choca.name, Choca.ves, Choca.price);
            cout << chocolat.GetName() << "\n" << chocolat.GetVes() << " гр" << "\n" << chocolat.GetPrice() << " руб" << "\n" << Choca.barashik;
            weight += Choca.ves;
            pricing += Choca.price;
            break;
        case 3:
            Jelly.Glav(jelb.name, jelb.ves, jelb.price);
            cout << Jelly.GetName() << "\n" << Jelly.GetVes() << " гр" << "\n" << Jelly.GetPrice() << " руб" << "\n" << jelb.barashik;
            weight += jelb.ves;
            pricing += jelb.price;
            break;
        }
        cout << "\n" << "\n";
        srand(time(NULL));
    }
    cout << "Общий вес равен " << weight << " гр" << "\n";
    cout << "Общая цена равна " << pricing << " руб";
    

    
}