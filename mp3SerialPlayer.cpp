/*
 * mp3SerialPlayer.cpp
 *
 *  Created on: 17 Jul 2015
 *      Author: v
 */

#include "mp3SerialPlayer.h"

mp3SerialPlayer::mp3SerialPlayer(HardwareSerial* inSerial, HardwareSerial* inDebugSerial) {
	serial = inSerial;
	//serial->begin(9600);
	debugSerial = inDebugSerial;

}

bool mp3SerialPlayer::setMusicPlay(uint8_t hbyte,uint8_t lbyte)
{
  serial->write(0x7E);
  serial->write(0x04);
  serial->write(0xA0);
  serial->write(hbyte);
  serial->write(lbyte);
  serial->write(0x7E);
  //delay(10);

	return checkAnswer(0xA0);


}
// Pause on/off  the current music
bool mp3SerialPlayer::pauseOnOffCurrentMusic(void)
{
	serial->write(0x7E);
	serial->write(0x02);
	serial->write(0xA3);
	serial->write(0x7E);
 //delay(10);
	return checkAnswer(0xA3);

}

//Set the volume, the range is 0x00 to 0x1F
bool mp3SerialPlayer::setVolume(uint8_t volume)
{
	serial->write(0x7E);
	serial->write(0x03);
	serial->write(0xA7);
	serial->write(volume);
	serial->write(0x7E);
 //delay(10);
	return checkAnswer(0xA7);
}

bool mp3SerialPlayer::setPlayMode(uint8_t playmode)
{
  if (((playmode==0x00)|(playmode==0x01)|(playmode==0x02)|(playmode==0x03))==false)
  {
	  debugSerial->println("PlayMode Parameter Error! ");
	  return false;
  }
  serial->write(0x7E);
  serial->write(0x03);
  serial->write(0xA9);
  serial->write(playmode);
  serial->write(0x7E);
 //delay(10);
return checkAnswer(0xA9);
}

bool mp3SerialPlayer::checkAnswer(uint8_t command){
	serial->setTimeout(MP3_ANSWER_TIMOUT);
	char byte[]={0x00};
	serial->readBytes(byte,1);
	if (byte[0] == command)
		return true;
	else
		return false;

}


mp3SerialPlayer::~mp3SerialPlayer() {
	// TODO Auto-generated destructor stub
}

