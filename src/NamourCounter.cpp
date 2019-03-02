/**
 * Un petit compteur pour mon amour chrie adorée! <3
 */

// 20 Août 2018 00:18:00
// August 20th 2018 00:18:00 AM
#define START_TIME 1535170680

#include <ctime>
#include <emscripten/emscripten.h>
#include <stdio.h>
#include <iostream>
#include <chrono>

int getSeconds (time_t UTC_time);
int getMinutes (time_t UTC_time);
int getHours   (time_t UTC_time);
int getDays    (time_t UTC_time);

extern "C" {
void EMSCRIPTEN_KEEPALIVE print()
{
	time_t diff = time(0) - START_TIME;
	printf("Ça fait maintenant %d jours, %d heures, %d minutes, %d secondes que tu m'endures mon coeur! <3\n",
			getDays(diff),
			getHours(diff),
			getMinutes(diff),
			getSeconds(diff));
}
}

int main()
{
	time_t start      = START_TIME;
	time_t current    = time(0);
	time_t difference = current - start;
	int jours    = getDays     (difference);
	int heures   = getHours    (difference);
	int minutes  = getMinutes  (difference);
	int secondes = getSeconds  (difference);
	std::cout << "Ça fait maintenant "
			<< jours << " jours, "
			<< heures << " heures, "
			<< minutes << " minutes et "
			<< secondes << " secondes que tu m'endures!! <3"
			<< std::endl << std::endl;
	std::cout << "Code source: "
			<< std::endl << "\t" << "Version colorée: "
			<< "https://github.com/jonathan-richer/namour-counter/blob/master/src/NamourCounter.cpp"
			<< std::endl << "\t" << "Version non-colorée: "
			<< "https://raw.githubusercontent.com/jonathan-richer/namour-counter/master/src/NamourCounter.cpp"
			<< std::endl;
	return 0;
}

int getSeconds (time_t UTC_time) { return (UTC_time % 60);              }
int getMinutes (time_t UTC_time) { return ((UTC_time/60) % 60);         }
int getHours   (time_t UTC_time) { return (((UTC_time/3600) - 5) % 24); }
int getDays    (time_t UTC_time) { return ((int) (UTC_time/86400));     }
