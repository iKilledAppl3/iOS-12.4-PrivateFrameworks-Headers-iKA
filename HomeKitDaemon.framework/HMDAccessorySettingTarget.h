/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingTarget : HMFObject {
    NSArray * _others;
    HMDAccessory * _settingOwnerAccessory;
    HMDAccessory * _systemOwnerAccessory;
}

@property (nonatomic, readonly) NSArray *others;
@property (nonatomic, readonly) HMDAccessory *settingOwnerAccessory;
@property (nonatomic, readonly) HMDAccessory *systemOwnerAccessory;

- (void).cxx_destruct;
- (id)initWithMediaSystem:(id)arg1;
- (id)initWithMediaSystem:(id)arg1 accessory:(id)arg2;
- (id)others;
- (id)settingOwnerAccessory;
- (id)systemOwnerAccessory;

@end
