/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabasePruningManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;

- (void).cxx_destruct;
- (id)_calendar;
- (id)_lastAttemptDateWithCompleted:(bool*)arg1;
- (id)_operationForPruningSampleTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_operationForPruningSamplesExcludingTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_operationForPruningSeriesMoreThanDaysOld:(unsigned long long)arg1 calendar:(id)arg2 nowDate:(id)arg3;
- (id)_operationForPruningThirdPartySampleTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_operationsForPruningActivitySharingDataWithCalendar:(id)arg1 nowDate:(id)arg2;
- (id)_operationsForPruningWithCalendar:(id)arg1 nowDate:(id)arg2;
- (void)_performPruneDatabaseActivity:(id)arg1;
- (void)_queue_pruneDatabaseWithOptions:(unsigned long long)arg1 nowDate:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_pruneExpiredDeletedObjectsWithNowDate:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_pruneExpiredSamplesWithOptions:(unsigned long long)arg1 fromNowDate:(id)arg2 completion:(id /* block */)arg3;
- (void)_registerActivity;
- (void)_setLastAttemptDate:(id)arg1 completed:(bool)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (id)profile;
- (void)pruneDatabaseWithAccessibilityAssertion:(id)arg1 completion:(id /* block */)arg2;
- (void)pruneDatabaseWithOptions:(unsigned long long)arg1 nowDate:(id)arg2 accessibilityAssertion:(id)arg3 completion:(id /* block */)arg4;
- (id)queue;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimerSource:(id)arg1;
- (id)timerSource;

@end