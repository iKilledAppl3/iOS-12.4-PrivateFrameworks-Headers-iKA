/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCardEnrollmentEligibilityTask : AMSTask {
    NSString * _countryCode;
}

@property (nonatomic, readonly, copy) NSString *countryCode;

- (void).cxx_destruct;
- (unsigned long long)_cardTypeForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)_performSilentEnrollmentCheckWithRequest:(id)arg1;
- (void)canWriteBillingInfoWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(id /* block */)arg3;
- (id)countryCode;
- (id)init;
- (id)initWithCountryCode:(id)arg1;
- (id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;

@end
