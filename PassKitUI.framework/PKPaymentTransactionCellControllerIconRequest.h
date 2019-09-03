/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionCellControllerIconRequest : NSObject {
    NSArray * _completionHandlers;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, retain) NSArray *completionHandlers;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)completionHandlers;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTransaction:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)transaction;

@end