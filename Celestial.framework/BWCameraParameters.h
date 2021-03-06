/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWCameraParameters : NSObject {
    NSDictionary * _cameraTuningParameters;
}

@property (nonatomic, readonly) NSDictionary *cameraTuningParameters;

+ (void)initialize;
+ (id)sharedInstance;

- (id)_initWithModelSpecificName:(id)arg1;
- (id)cameraTuningParameters;
- (void)dealloc;
- (bool)disparityRefinementEnabledForStream:(struct OpaqueFigCaptureStream { }*)arg1;
- (id)focalLengthCharacterizationForStream:(struct OpaqueFigCaptureStream { }*)arg1;
- (id)init;
- (bool)panoramaRequiresLTMLockingForStream:(struct OpaqueFigCaptureStream { }*)arg1;
- (id)sensorIDDictionaryForStream:(struct OpaqueFigCaptureStream { }*)arg1;
- (bool)useFPCParametersForCameraInfoByPortType:(id)arg1 sensorIDDict:(id)arg2;

@end
