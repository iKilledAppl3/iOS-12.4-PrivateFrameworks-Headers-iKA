/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayReceiverPlatform : NSObject {
    unsigned int  _audioSessionID;
    AirPlayControllerServer * _controllerServer;
    unsigned char  _isMuted;
    int  _lockDownActivationStateToken;
    int  _managedDefaultsChangedNotificationToken;
    int  _playbackAllowNotifyToken;
    int  _playbackPreventNotifyToken;
    unsigned char  _playbackPrevented;
    int  _prefChangedNotifyToken;
    struct AirPlayReceiverServerPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; void *x2; id x3; struct OpaqueAPAdvertiser {} *x4; unsigned char x5; unsigned char x6; struct HTTPServerPrivate {} *x7; id x8; struct HTTPServerPrivate {} x9; unsigned char x10[16]; float x11; unsigned char x12; int x13; unsigned char x14; unsigned char x15; id x16; unsigned long long x17; struct OpaqueAPReceiverSystemInfo {} *x18; unsigned char x19; unsigned char x20; struct __CFDictionary {} *x21; struct __CFDictionary {} *x22; struct MediaControlServerPrivate {} *x23; struct __CFDictionary {} *x24; unsigned int x25; int x26; unsigned int x27; struct APReceiverSessionManagerOpaque {} *x28; struct OpaqueFigValeria {} *x29; int (*x30)(); unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; unsigned char x35; unsigned char x36; } * _server;
    int  _systemBufferSamples;
    int  _systemSampleRate;
    struct AirPlayReceiverUIPrivate { } * _ui;
    int  _uiErrorNotifyToken;
    unsigned char  _voiceForSiri;
    unsigned char  _voiceForTelephony;
    int  _volumeControlType;
    float  _volumeSliderValue;
    float  _volumeSliderValueBeforeMute;
}

- (void)_avSystemControllerVolumeChanged:(id)arg1;
- (void)_avSystemControllerVolumeConfigChanged:(id)arg1;
- (void)_handleAVAudioSessionInterruption:(id)arg1;
- (void)_handleAVAudioSessionServicesReset:(id)arg1;
- (void)_handleVolumeControlTypeChange;
- (void)_setupVolumeNotificationHandlers;

@end
