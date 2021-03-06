/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFWirelessChargingDevice : NSObject <NSSecureCoding> {
    bool  _charged;
    bool  _inBandCommsBasedPowerSources;
    long long  _matID;
    NSArray * _powerSources;
    NSDate * _startedWirelessCharging;
    int  _type;
    NSString * _uniqueIdentifier;
    bool  _wirelessCharging;
}

@property (nonatomic, readonly) bool charged;
@property (nonatomic, readonly) bool inBandCommsBasedPowerSources;
@property (nonatomic, readonly) long long matID;
@property (nonatomic, readonly) NSArray *powerSources;
@property (nonatomic, retain) NSDate *startedWirelessCharging;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) bool wirelessCharging;

- (void).cxx_destruct;
- (bool)charged;
- (bool)inBandCommsBasedPowerSources;
- (long long)matID;
- (id)powerSources;
- (void)setStartedWirelessCharging:(id)arg1;
- (id)startedWirelessCharging;
- (int)type;
- (id)uniqueIdentifier;
- (bool)wirelessCharging;

@end
