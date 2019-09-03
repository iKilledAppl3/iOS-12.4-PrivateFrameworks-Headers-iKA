/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageMetalSDOFRenderer : NSObject <BWFilterRenderer> {
    NSDictionary * _cameraInfoByPortType;
    struct { 
        int width; 
        int height; 
    }  _depthDataMapDimensions;
    struct { 
        int width; 
        int height; 
    }  _imageDimensions;
    <MTLCommandQueue> * _mtlCommandQueue;
    FigSDOFEffectRendering * _sdofEffectRenderer;
    NSDictionary * _sensorIDDictionary;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;

+ (void)initialize;

- (int)_loadAndConfigureSDOFRenderer;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (id)bundleOptionsDictionary;
- (void)dealloc;
- (id)displayName;
- (id)initWithSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 imageDimensions:(struct { int x1; int x2; })arg3 depthDataMapDimensions:(struct { int x1; int x2; })arg4 metalCommandQueue:(id)arg5;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (bool)supportsAnimation;
- (short)type;

@end