/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKGameCenterViewController : UINavigationController <GKExtensionParentViewControllerProtocol> {
    UIAlertController * _alertController;
    <GKGameCenterControllerDelegate> * _gameCenterDelegateWeak;
    NSString * _leaderboardIdentifier;
    long long  _leaderboardTimeScope;
    GKDashboardHostViewController * _remoteViewController;
    long long  _viewState;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <GKGameCenterControllerDelegate> *gameCenterDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *leaderboardCategory;
@property (nonatomic, retain) NSString *leaderboardIdentifier;
@property (nonatomic) long long leaderboardTimeScope;
@property (nonatomic, retain) GKDashboardHostViewController *remoteViewController;
@property (readonly) Class superclass;
@property (nonatomic) long long viewState;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (bool)_preventsAppearanceProxyCustomization;
+ (bool)accessInstanceVariablesDirectly;

- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (id)alertController;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dealloc;
- (void)extensionDidFinishWithError:(id)arg1;
- (id)gameCenterDelegate;
- (id)init;
- (id)leaderboardCategory;
- (id)leaderboardIdentifier;
- (long long)leaderboardTimeScope;
- (void)loadView;
- (void)notifyDelegateOnWillFinish;
- (id)remoteViewController;
- (void)setAlertController:(id)arg1;
- (void)setGameCenterDelegate:(id)arg1;
- (void)setLeaderboardCategory:(id)arg1;
- (void)setLeaderboardIdentifier:(id)arg1;
- (void)setLeaderboardIdentifierFromExtension:(id)arg1;
- (void)setLeaderboardTimeScope:(long long)arg1;
- (void)setLeaderboardTimeScopeFromExtension:(long long)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setViewState:(long long)arg1;
- (void)setViewStateFromExtension:(long long)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldShowPlayForChallenge;
- (bool)shouldShowPlayForTurnBasedMatch;
- (bool)shouldShowQuitForTurnBasedMatch;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (long long)viewState;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/GameCenterUIFramework.axbundle/GameCenterUIFramework

+ (Class)safeCategoryBaseClass;

- (id)__axValueForKey:(id)arg1;

@end
