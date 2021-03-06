/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKApplyWebServiceRequest : PKPaymentWebServiceRequest {
    NSString * _referrerIdentifier;
}

@property (nonatomic, copy) NSString *referrerIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)referrerIdentifier;
- (void)setReferrerIdentifier:(id)arg1;

@end
