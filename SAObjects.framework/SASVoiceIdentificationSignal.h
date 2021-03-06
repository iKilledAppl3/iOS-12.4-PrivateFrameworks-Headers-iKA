/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASVoiceIdentificationSignal : SABaseClientBoundCommand

@property (nonatomic) bool recordUserAudio;
@property (nonatomic, copy) NSString *resultCandidateId;

+ (id)voiceIdentificationSignal;
+ (id)voiceIdentificationSignalWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)recordUserAudio;
- (bool)requiresResponse;
- (id)resultCandidateId;
- (void)setRecordUserAudio:(bool)arg1;
- (void)setResultCandidateId:(id)arg1;

@end
