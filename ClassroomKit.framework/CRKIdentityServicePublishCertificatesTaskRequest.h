/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityServicePublishCertificatesTaskRequest : CATTaskRequest {
    CRKIdentityMarkedCertificate * _activeMarkedCertificate;
    CRKIdentityMarkedCertificate * _stagedMarkedCertificate;
}

@property (nonatomic, retain) CRKIdentityMarkedCertificate *activeMarkedCertificate;
@property (nonatomic, retain) CRKIdentityMarkedCertificate *stagedMarkedCertificate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeMarkedCertificate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActiveMarkedCertificate:(id)arg1;
- (void)setStagedMarkedCertificate:(id)arg1;
- (id)stagedMarkedCertificate;

@end
