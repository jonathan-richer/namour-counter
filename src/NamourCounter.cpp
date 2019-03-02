/**
 * Un petit compteur pour mon amour chrie adorée! <3
 */

// 20 Août 2018 00:18:00
// August 20th 2018 00:18:00 AM
#define START_TIME 1535170680

#include <ctime>
#include <iostream>

int getSeconds (time_t UTC_time);
int getMinutes (time_t UTC_time);
int getHours   (time_t UTC_time);
int getDays    (time_t UTC_time);

int main() {
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
			<< secondes << " secondes que tu m'endures!! <3";
	return 0;
}

int getSeconds (time_t UTC_time) { return (UTC_time % 60);              }
int getMinutes (time_t UTC_time) { return ((UTC_time/60) % 60);         }
int getHours   (time_t UTC_time) { return (((UTC_time/3600) - 5) % 24); }
int getDays    (time_t UTC_time) { return ((int) (UTC_time/86400));     }
