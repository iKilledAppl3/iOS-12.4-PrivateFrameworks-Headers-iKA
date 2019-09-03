/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, NSSecureCoding> {
    NSString * _DSID;
    struct __CFUserNotification { } * _activeSecondFactoryEntryPrompt;
    NSString * _altDSID;
    <AKAnisetteServiceProtocol> * _anisetteDataProvider;
    bool  _anticipateEscrowAttempt;
    unsigned long long  _attemptIndex;
    unsigned long long  _authenticationType;
    unsigned long long  _capabilityForUIDisplay;
    id  _clientInfo;
    AKDevice * _companionDevice;
    AKAnisetteData * _companionDeviceAnisetteData;
    NSString * _defaultButtonString;
    NSSet * _desiredInternalTokens;
    NSString * _deviceClass;
    NSString * _deviceColor;
    NSString * _deviceEnclosureColor;
    NSString * _displayString;
    NSString * _displayTitle;
    NSString * _generatedCode;
    NSNumber * _hasEmptyPassword;
    NSString * _helpAnchor;
    NSString * _helpBook;
    NSDictionary * _httpHeadersForRemoteUI;
    NSUUID * _identifier;
    NSString * _identityToken;
    NSString * _interpolatedReason;
    NSNumber * _isAppleIDLoginEnabled;
    bool  _isEphemeral;
    bool  _isFirstTimeLogin;
    bool  _isPasswordEditable;
    bool  _isProxyingForApp;
    bool  _isTriggeredByNotification;
    bool  _isUsernameEditable;
    NSNumber * _latitude;
    NSNumber * _longitude;
    long long  _maximumLoginAttempts;
    NSString * _message;
    bool  _needsCredentialRecovery;
    bool  _needsNewAppleID;
    bool  _needsPasswordChange;
    bool  _needsRepair;
    NSString * _password;
    NSString * _passwordPromptTitle;
    NSString * _proxiedAppBundleID;
    NSString * _proxiedAppName;
    AKDevice * _proxiedDevice;
    AKAnisetteData * _proxiedDeviceAnisetteData;
    NSString * _reason;
    NSObject<OS_dispatch_queue> * _secondFactorQueue;
    id /* block */  _secondFactoryEntryCompletion;
    NSString * _securityUpgradeContext;
    NSArray * _serviceIdentifiers;
    long long  _serviceType;
    NSString * _shortLivedToken;
    bool  _shouldAllowAppleIDCreation;
    bool  _shouldForceInteractiveAuth;
    bool  _shouldOfferSecurityUpgrade;
    bool  _shouldPreventInteractiveAuth;
    bool  _shouldPromptForPasswordOnly;
    bool  _shouldRequestConfigurationInfo;
    bool  _shouldRequestRecoveryPET;
    bool  _shouldRequestShortLivedToken;
    bool  _shouldSendGrandSlamTokensForRemoteUI;
    bool  _shouldSendIdentityTokenForRemoteUI;
    bool  _shouldSkipInitialReachabilityCheck;
    bool  _shouldSkipSettingsLaunchAlert;
    bool  _shouldUpdatePersistentServiceTokens;
    bool  _supportsPiggybacking;
    NSString * _title;
    NSString * _username;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic) unsigned long long _attemptIndex;
@property (nonatomic, readonly) unsigned long long _capabilityForUIDisplay;
@property (nonatomic, readonly) NSUUID *_identifier;
@property (setter=_setIdentityToken:, nonatomic, copy) NSString *_identityToken;
@property (nonatomic, readonly) NSString *_interpolatedReason;
@property (nonatomic, readonly) NSString *_interpolatedReasonWithBlame;
@property (nonatomic) bool _isPasswordEditable;
@property (setter=_setProxyingForApp:, nonatomic) bool _isProxyingForApp;
@property (setter=_setMessage:, nonatomic, copy) NSString *_message;
@property (setter=_setPassword:, nonatomic, copy) NSString *_password;
@property (nonatomic, copy) NSString *_passwordPromptTitle;
@property (setter=_setProxiedAppBundleID:, nonatomic, copy) NSString *_proxiedAppBundleID;
@property (setter=_setProxiedAppName:, nonatomic, copy) NSString *_proxiedAppName;
@property (nonatomic, readonly) bool _requiresPasswordInput;
@property (setter=_setShortLivedToken:, nonatomic, copy) NSString *_shortLivedToken;
@property (nonatomic) bool _shouldSendGrandSlamTokensForRemoteUI;
@property (nonatomic) bool _shouldSendIdentityTokenForRemoteUI;
@property (nonatomic, readonly) bool _shouldSkipInitialReachabilityCheck;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, retain) <AKAnisetteServiceProtocol> *anisetteDataProvider;
@property (nonatomic) bool anticipateEscrowAttempt;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic, retain) id clientInfo;
@property (nonatomic, copy) AKDevice *companionDevice;
@property (nonatomic, retain) AKAnisetteData *companionDeviceAnisetteData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultButtonString;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *desiredInternalTokens;
@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic, copy) NSString *deviceColor;
@property (nonatomic, copy) NSString *deviceEnclosureColor;
@property (nonatomic, copy) NSString *displayString;
@property (nonatomic, copy) NSString *displayTitle;
@property (nonatomic, copy) NSString *generatedCode;
@property (setter=setHasEmptyPassword:, nonatomic, copy) NSNumber *hasEmptyPassword;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *helpAnchor;
@property (nonatomic, copy) NSString *helpBook;
@property (nonatomic, copy) NSDictionary *httpHeadersForRemoteUI;
@property (setter=setAppleIDLoginEnabled:, nonatomic, copy) NSNumber *isAppleIDLoginEnabled;
@property (nonatomic) bool isEphemeral;
@property (setter=setFirstTimeLogin:, nonatomic) bool isFirstTimeLogin;
@property (setter=setTriggeredByNotification:, nonatomic) bool isTriggeredByNotification;
@property (nonatomic) bool isUsernameEditable;
@property (nonatomic, copy) NSNumber *latitude;
@property (nonatomic, copy) NSNumber *longitude;
@property (nonatomic) long long maximumLoginAttempts;
@property (nonatomic) bool needsCredentialRecovery;
@property (nonatomic) bool needsNewAppleID;
@property (nonatomic) bool needsPasswordChange;
@property (nonatomic) bool needsRepair;
@property (nonatomic, copy) AKDevice *proxiedDevice;
@property (nonatomic, retain) AKAnisetteData *proxiedDeviceAnisetteData;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *securityUpgradeContext;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) NSArray *serviceIdentifiers;
@property (nonatomic) long long serviceType;
@property (nonatomic) bool shouldAllowAppleIDCreation;
@property (nonatomic) bool shouldForceInteractiveAuth;
@property (nonatomic) bool shouldOfferSecurityUpgrade;
@property (nonatomic) bool shouldPreventInteractiveAuth;
@property (nonatomic) bool shouldPromptForPasswordOnly;
@property (nonatomic) bool shouldRequestConfigurationInfo;
@property (nonatomic) bool shouldRequestRecoveryPET;
@property (nonatomic) bool shouldRequestShortLivedToken;
@property (nonatomic) bool shouldSkipSettingsLaunchAlert;
@property (nonatomic) bool shouldUpdatePersistentServiceTokens;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsPiggybacking;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, copy) NSString *username;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DSID;
- (unsigned long long)_attemptIndex;
- (unsigned long long)_capabilityForUIDisplay;
- (void)_handleSecondFactorCodeEntry;
- (id)_identifier;
- (id)_identityToken;
- (id)_initWithIdentifier:(id)arg1;
- (id)_interpolatedReason;
- (id)_interpolatedReasonWithBlame;
- (bool)_isPasswordEditable;
- (bool)_isProxyingForApp;
- (bool)_localUserHasEmptyPassword;
- (id)_message;
- (id)_password;
- (id)_passwordPromptTitle;
- (id)_proxiedAppBundleID;
- (id)_proxiedAppName;
- (bool)_requiresPasswordInput;
- (id)_sanitizedCopy;
- (id)_secondFactorQueue;
- (void)_setIdentityToken:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setPassword:(id)arg1;
- (void)_setProxiedAppBundleID:(id)arg1;
- (void)_setProxiedAppName:(id)arg1;
- (void)_setProxyingForApp:(bool)arg1;
- (void)_setShortLivedToken:(id)arg1;
- (id)_shortLivedToken;
- (bool)_shouldSendGrandSlamTokensForRemoteUI;
- (bool)_shouldSendIdentityTokenForRemoteUI;
- (bool)_shouldSkipInitialReachabilityCheck;
- (void)_startListeningForSecondFactorCodeEntryNotification;
- (void)_stopListeningForSecondFactorCodeEntryNotification;
- (void)_updateWithValuesFromContext:(id)arg1;
- (id)altDSID;
- (id)anisetteDataProvider;
- (bool)anticipateEscrowAttempt;
- (id)authKitAccount:(id*)arg1;
- (id)authKitAccountForSilentServiceToken:(id*)arg1;
- (unsigned long long)authenticationType;
- (id)clientInfo;
- (id)companionDevice;
- (id)companionDeviceAnisetteData;
- (id)debugDescription;
- (id)defaultButtonString;
- (id)description;
- (id)desiredInternalTokens;
- (id)deviceClass;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)arg1;
- (id)displayString;
- (id)displayTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)generatedCode;
- (id)hasEmptyPassword;
- (id)helpAnchor;
- (id)helpBook;
- (id)httpHeadersForRemoteUI;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)isAppleIDLoginEnabled;
- (bool)isEphemeral;
- (bool)isFirstTimeLogin;
- (bool)isTriggeredByNotification;
- (bool)isUsernameEditable;
- (id)latitude;
- (id)longitude;
- (long long)maximumLoginAttempts;
- (bool)needsCredentialRecovery;
- (bool)needsNewAppleID;
- (bool)needsPasswordChange;
- (bool)needsRepair;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)arg1;
- (id)proxiedDevice;
- (id)proxiedDeviceAnisetteData;
- (id)reason;
- (id)securityUpgradeContext;
- (id)serviceIdentifier;
- (id)serviceIdentifiers;
- (long long)serviceType;
- (void)setAltDSID:(id)arg1;
- (void)setAnisetteDataProvider:(id)arg1;
- (void)setAnticipateEscrowAttempt:(bool)arg1;
- (void)setAppleIDLoginEnabled:(id)arg1;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setCompanionDevice:(id)arg1;
- (void)setCompanionDeviceAnisetteData:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setDefaultButtonString:(id)arg1;
- (void)setDesiredInternalTokens:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setDeviceEnclosureColor:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayTitle:(id)arg1;
- (void)setFirstTimeLogin:(bool)arg1;
- (void)setGeneratedCode:(id)arg1;
- (void)setHasEmptyPassword:(id)arg1;
- (void)setHelpAnchor:(id)arg1;
- (void)setHelpBook:(id)arg1;
- (void)setHttpHeadersForRemoteUI:(id)arg1;
- (void)setIsEphemeral:(bool)arg1;
- (void)setIsUsernameEditable:(bool)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMaximumLoginAttempts:(long long)arg1;
- (void)setNeedsCredentialRecovery:(bool)arg1;
- (void)setNeedsNewAppleID:(bool)arg1;
- (void)setNeedsPasswordChange:(bool)arg1;
- (void)setNeedsRepair:(bool)arg1;
- (void)setProxiedDevice:(id)arg1;
- (void)setProxiedDeviceAnisetteData:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSecurityUpgradeContext:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setServiceIdentifiers:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setShouldAllowAppleIDCreation:(bool)arg1;
- (void)setShouldForceInteractiveAuth:(bool)arg1;
- (void)setShouldOfferSecurityUpgrade:(bool)arg1;
- (void)setShouldPreventInteractiveAuth:(bool)arg1;
- (void)setShouldPromptForPasswordOnly:(bool)arg1;
- (void)setShouldRequestConfigurationInfo:(bool)arg1;
- (void)setShouldRequestRecoveryPET:(bool)arg1;
- (void)setShouldRequestShortLivedToken:(bool)arg1;
- (void)setShouldSkipSettingsLaunchAlert:(bool)arg1;
- (void)setShouldUpdatePersistentServiceTokens:(bool)arg1;
- (void)setSupportsPiggybacking:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTriggeredByNotification:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)set_attemptIndex:(unsigned long long)arg1;
- (void)set_isPasswordEditable:(bool)arg1;
- (void)set_passwordPromptTitle:(id)arg1;
- (void)set_shouldSendGrandSlamTokensForRemoteUI:(bool)arg1;
- (void)set_shouldSendIdentityTokenForRemoteUI:(bool)arg1;
- (bool)shouldAllowAppleIDCreation;
- (bool)shouldForceInteractiveAuth;
- (bool)shouldOfferSecurityUpgrade;
- (bool)shouldPreventInteractiveAuth;
- (bool)shouldPromptForPasswordOnly;
- (bool)shouldRequestConfigurationInfo;
- (bool)shouldRequestRecoveryPET;
- (bool)shouldRequestShortLivedToken;
- (bool)shouldSkipSettingsLaunchAlert;
- (bool)shouldUpdatePersistentServiceTokens;
- (bool)supportsPiggybacking;
- (id)title;
- (id)username;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)pk_AKAppleIDAuthenticationInAppContext;

@end