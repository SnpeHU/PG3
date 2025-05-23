#include <stdio.h>  
#include <list>


int main()  
{  
	std::list<const char*> jrStations;
	jrStations.push_back("Tokyo");
	jrStations.push_back("Kanda");
	jrStations.push_back("Akihabara");
	jrStations.push_back("Okachimachi");
	jrStations.push_back("Ueno");
	jrStations.push_back("Uguisudani");
	jrStations.push_back("Nippori");
	//jrStations.push_back("Nishi-Nippori");
	jrStations.push_back("Tabata");
	jrStations.push_back("Komagome");
	jrStations.push_back("Sugamo");
	jrStations.push_back("Otsuka");
	jrStations.push_back("Ikebukuro");
	jrStations.push_back("Mejiro");
	jrStations.push_back("Takadanobaba");
	jrStations.push_back("Shin-Okubo");
	jrStations.push_back("Shinjuku");
	jrStations.push_back("Yoyogi");
	jrStations.push_back("Harajuku");
	jrStations.push_back("Shibuya");
	jrStations.push_back("Ebisu");
	jrStations.push_back("Meguro");
	jrStations.push_back("Gotanda");
	jrStations.push_back("Osaki");
	jrStations.push_back("Shinagawa");
	//jrStations.push_back("Takanawa-Gateway");
	jrStations.push_back("Tamachi");
	jrStations.push_back("Hamamatsucho");
	jrStations.push_back("Shimbashi");
	jrStations.push_back("Yurakucho");

	for (std::list<const char*>::iterator it = jrStations.begin(); it != jrStations.end(); ++it) {
		if (strcmp(*it, "Tabata") == 0) {
			jrStations.insert(it, "Nishi-Nippori");
			++it;
		}
		if (strcmp(*it, "Tamachi") == 0) {
			jrStations.insert(it, "Takanawa-Gateway");
			++it;
		}
	}
	
	std::list<const char*>::iterator it;
	for (it = jrStations.begin(); it != jrStations.end(); ++it) {
		printf("%s\n", *it);
	}

return 0;  
}

