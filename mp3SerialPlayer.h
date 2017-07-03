/*
 * mp3SerialPlayer.h
 *
 *  Created on: 17 Jul 2015
 *      Author: v
 */
#include <HardwareSerial.h>

#ifndef MP3SERIALPLAYER_H_
#define MP3SERIALPLAYER_H_

#define MP3_ANSWER_TIMOUT 1000

class HardwareSerial;

class mp3SerialPlayer {
	HardwareSerial* serial;
	HardwareSerial* debugSerial;
public:
	bool setMusicPlay(uint8_t hbyte,uint8_t lbyte);
	bool pauseOnOffCurrentMusic(void);
	bool setVolume(uint8_t volume);
	bool setPlayMode(uint8_t playmode);
	bool checkAnswer(uint8_t command);
	mp3SerialPlayer(HardwareSerial* ,HardwareSerial* );
	virtual ~mp3SerialPlayer();
};

#endif /* MP3SERIALPLAYER_H_ */
