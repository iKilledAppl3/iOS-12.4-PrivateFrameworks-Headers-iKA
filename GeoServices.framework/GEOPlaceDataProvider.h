/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataProvider : NSObject {
    id /* block */  _errorHandler;
    id /* block */  _finishedHandler;
    bool  _isLoading;
}

@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ finishedHandler;
@property (nonatomic) bool isLoading;

- (void).cxx_destruct;
- (void)cancelProviderRequest;
- (void)cancelRequest;
- (void)dealloc;
- (id /* block */)errorHandler;
- (id /* block */)finishedHandler;
- (bool)isLoading;
- (void)providerDidCancel;
- (void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2;
- (void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2;
- (void)requestCompleted;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFinishedHandler:(id /* block */)arg1;
- (void)setIsLoading:(bool)arg1;
- (void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2;
- (void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(id /* block */)arg3 error:(id /* block */)arg4;

@end