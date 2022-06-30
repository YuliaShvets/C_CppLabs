#pragma once


class Stadium
{
private :
    int viewers;
    string name;
    string light;
    
public:
    int area;
    string provider;
    
protected:
    int entrances;
    int lantern;
    
public:
    Stadium (string name, int viewers, int area, string light, string provider, int entrances, int lantern)
    {
        this->name = name;
        this->viewers = viewers;
        this->area = area;
        this->light = light;
        this->provider = provider;
        this->entrances = entrances;
        this->lantern = lantern;
    }
    void print()
    {
        cout<<"Name: "<< GetName() <<" "<<"Viewers: "<<GetViewers()<<" "<<"Area: "<<area<<" "<<"Light: "<<GetLight()<<" "<<"Provider: "<<provider<<" "<<"Entrances: "<<GetEntrances()<<" "<<"Lantern: "<<GetLantern()<<endl;
    }
    Stadium(){};
    ~Stadium(){};
    
   int GetViewers(){return viewers;}
   string GetName(){return name;}
   string GetLight(){return light;}
   int GetEntrances(){return entrances;}
   int GetLantern(){return lantern;}
    
    
    
};
