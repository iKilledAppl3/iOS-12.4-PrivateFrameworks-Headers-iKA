/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouCatchUpOperation : FCOperation {
    NSHashTable * _conditionWaiters;
    NFMutexLock * _conditionWaitersLock;
    long long  _contentTypes;
    FCCoverArticlesOperation * _coverArticlesOperation;
    FCDemoAdditionsOperation * _demoAdditionsOperation;
    FCEditorialOperation * _editorialOperation;
    FCMyArticlesOperation * _myArticlesOperation;
    NSOperationQueue * _operationQueue;
    FCSpecialEventsOperation * _specialEventsOperation;
    FCSpotlightOperation * _spotlightOperation;
    FCTopStoriesOperation * _topStoriesOperation;
    FCTrendingOperation * _trendingOperation;
    FCVideoArticlesOperation * _videoArticlesOperation;
}

@property (nonatomic, readonly, copy) NSArray *additionalDemoHeadlines;
@property (nonatomic, readonly, copy) NSArray *breakingNewsHeadlines;
@property (nonatomic, readonly, copy) NSError *catchUpError;
@property (nonatomic, retain) NSHashTable *conditionWaiters;
@property (nonatomic, retain) NFMutexLock *conditionWaitersLock;
@property (nonatomic) long long contentTypes;
@property (nonatomic, readonly, copy) NSArray *coverArticleHeadlines;
@property (nonatomic, retain) FCCoverArticlesOperation *coverArticlesOperation;
@property (nonatomic, retain) FCDemoAdditionsOperation *demoAdditionsOperation;
@property (nonatomic, retain) FCEditorialOperation *editorialOperation;
@property (readonly, copy) NSDictionary *feedContextByFeedID;
@property (nonatomic, readonly, copy) FCVideoArticlesOperationResult *moreVideosResult;
@property (nonatomic, retain) FCMyArticlesOperation *myArticlesOperation;
@property (nonatomic, readonly, copy) NSArray *nonEditorialFeedItems;
@property (nonatomic, readonly, copy) FCFeedPersonalizedItems *nonEditorialPersonalizedArticles;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly, copy) NSArray *specialEventHeadlines;
@property (nonatomic, retain) FCSpecialEventsOperation *specialEventsOperation;
@property (nonatomic, retain) FCSpotlightOperation *spotlightOperation;
@property (nonatomic, readonly, copy) FCSpotlightOperationResult *spotlightResult;
@property (nonatomic, readonly, copy) NSArray *supplementalCoverArticleHeadlines;
@property (nonatomic, readonly, copy) <FCChannelProviding> *topStoriesChannel;
@property (nonatomic, retain) FCTopStoriesOperation *topStoriesOperation;
@property (nonatomic, readonly, copy) FCTopStoriesOperationResult *topStoriesResult;
@property (nonatomic, readonly, copy) FCVideoArticlesOperationResult *topVideosResult;
@property (nonatomic, readonly, copy) NSArray *trendingHeadlines;
@property (nonatomic, retain) FCTrendingOperation *trendingOperation;
@property (nonatomic, retain) FCVideoArticlesOperation *videoArticlesOperation;

+ (id)sharedCatchUpOperationForEdition:(id)arg1 contentTypes:(long long)arg2 configuration:(id)arg3 context:(id)arg4;

- (void).cxx_destruct;
- (void)_addConditionWaiter:(id)arg1;
- (void)_serviceConditionWaiters;
- (id)additionalDemoHeadlines;
- (id)allFeedItemsAfterTransformation:(id)arg1;
- (id)allNonEditorialFeedItemsAfterTransformation:(id)arg1;
- (id)breakingNewsHeadlines;
- (id)catchUpError;
- (id)catchUpErrorForContentTypes:(long long)arg1;
- (id)conditionWaiters;
- (id)conditionWaitersLock;
- (long long)contentTypes;
- (id)coverArticleHeadlines;
- (id)coverArticlesOperation;
- (id)demoAdditionsOperation;
- (id)editorialOperation;
- (void)enumerateEditorialSectionsByRecencyAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 block:(id /* block */)arg3;
- (id)feedContextByFeedID;
- (id)initWithContext:(id)arg1 configuration:(id)arg2 dateRange:(id)arg3 contentTypes:(long long)arg4 background:(bool)arg5;
- (id)moreVideosResult;
- (id)myArticlesOperation;
- (id)nonEditorialFeedItems;
- (id)nonEditorialPersonalizedArticles;
- (void)operationDidFinishWithError:(id)arg1;
- (id)operationQueue;
- (id)orphanedEditorialHeadlinesAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2;
- (void)performOperation;
- (void)setConditionWaiters:(id)arg1;
- (void)setConditionWaitersLock:(id)arg1;
- (void)setContentTypes:(long long)arg1;
- (void)setCoverArticlesOperation:(id)arg1;
- (void)setDemoAdditionsOperation:(id)arg1;
- (void)setEditorialOperation:(id)arg1;
- (void)setMyArticlesOperation:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setSpecialEventsOperation:(id)arg1;
- (void)setSpotlightOperation:(id)arg1;
- (void)setTopStoriesOperation:(id)arg1;
- (void)setTrendingOperation:(id)arg1;
- (void)setVideoArticlesOperation:(id)arg1;
- (id)sortedNonEditorialFeedItemsAfterTransformation:(id)arg1;
- (id)specialEventHeadlines;
- (id)specialEventsOperation;
- (id)spotlightOperation;
- (id)spotlightResult;
- (id)supplementalCoverArticleHeadlines;
- (id)topStoriesChannel;
- (id)topStoriesOperation;
- (id)topStoriesResult;
- (id)topVideosResult;
- (id)trendingHeadlines;
- (id)trendingOperation;
- (id)videoArticlesOperation;
- (id)waiterForCondition:(id)arg1;

@end