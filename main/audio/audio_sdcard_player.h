#ifndef AUDIO_SDCARD_PLAYER_H
#define AUDIO_SDCARD_PLAYER_H

// Function to initialize the SD card audio player
void initSdCardPlayer();

// Function to play audio from the SD card
void playAudioFromSdCard(const char* fileName);

// Function to stop audio playback
void stopAudioPlayback();

// Function to set volume level
void setVolume(int volumeLevel);

#endif // AUDIO_SDCARD_PLAYER_H