/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionConfigurationItem : NSObject {
    NSArray * _additionalBridgeSectionIDs;
    bool  _alwaysAlert;
    bool  _alwaysSyncSettings;
    bool  _applyWhitelistToChildSections;
    NSArray * _blacklistedCategories;
    bool  _hasLegacyMapInContext;
    bool  _hasLegacyMapInUserInfo;
    bool  _optOutOfAttachmentTransmission;
    bool  _optOutOfCoordination;
    bool  _optOutOfNotificationTuning;
    bool  _optOutOfSubtitleRemovalForOlderWatches;
    bool  _optOutOfWaitForUserIdle;
    NSNumber * _watchVersionThatUsesUserInfoForContext;
    NSArray * _whitelistedSubtypes;
}

@property (nonatomic, retain) NSArray *additionalBridgeSectionIDs;
@property (nonatomic) bool alwaysAlert;
@property (nonatomic) bool alwaysSyncSettings;
@property (nonatomic) bool applyWhitelistToChildSections;
@property (nonatomic, retain) NSArray *blacklistedCategories;
@property (nonatomic) bool hasLegacyMapInContext;
@property (nonatomic) bool hasLegacyMapInUserInfo;
@property (nonatomic) bool optOutOfAttachmentTransmission;
@property (nonatomic) bool optOutOfCoordination;
@property (nonatomic) bool optOutOfNotificationTuning;
@property (nonatomic) bool optOutOfSubtitleRemovalForOlderWatches;
@property (nonatomic) bool optOutOfWaitForUserIdle;
@property (nonatomic, retain) NSNumber *watchVersionThatUsesUserInfoForContext;
@property (nonatomic, retain) NSArray *whitelistedSubtypes;

- (void).cxx_destruct;
- (id)additionalBridgeSectionIDs;
- (bool)alwaysAlert;
- (bool)alwaysSyncSettings;
- (bool)applyWhitelistToChildSections;
- (id)blacklistedCategories;
- (id)description;
- (bool)hasLegacyMapInContext;
- (bool)hasLegacyMapInUserInfo;
- (id)initWithDictionary:(id)arg1;
- (bool)optOutOfAttachmentTransmission;
- (bool)optOutOfCoordination;
- (bool)optOutOfCoordinationWithSubtype:(long long)arg1;
- (bool)optOutOfNotificationTuning;
- (bool)optOutOfSubtitleRemovalForOlderWatches;
- (bool)optOutOfWaitForUserIdle;
- (void)setAdditionalBridgeSectionIDs:(id)arg1;
- (void)setAlwaysAlert:(bool)arg1;
- (void)setAlwaysSyncSettings:(bool)arg1;
- (void)setApplyWhitelistToChildSections:(bool)arg1;
- (void)setBlacklistedCategories:(id)arg1;
- (void)setHasLegacyMapInContext:(bool)arg1;
- (void)setHasLegacyMapInUserInfo:(bool)arg1;
- (void)setOptOutOfAttachmentTransmission:(bool)arg1;
- (void)setOptOutOfCoordination:(bool)arg1;
- (void)setOptOutOfNotificationTuning:(bool)arg1;
- (void)setOptOutOfSubtitleRemovalForOlderWatches:(bool)arg1;
- (void)setOptOutOfWaitForUserIdle:(bool)arg1;
- (void)setWatchVersionThatUsesUserInfoForContext:(id)arg1;
- (void)setWhitelistedSubtypes:(id)arg1;
- (id)watchVersionThatUsesUserInfoForContext;
- (id)whitelistedSubtypes;

@end