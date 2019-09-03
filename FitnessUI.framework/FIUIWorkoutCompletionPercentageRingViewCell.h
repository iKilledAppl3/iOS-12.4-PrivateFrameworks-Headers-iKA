/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutCompletionPercentageRingViewCell : UITableViewCell {
    double  _currentCompletionFactor;
    UIImageView * _gradientBackgroundImageView;
    UIImageView * _iconImageView;
    HKRingsView * _ringsView;
    UILabel * _secondaryLabel;
    FIUIDividerView * _separatorView;
    bool  _showDivider;
    UILabel * _typeLabel;
    HKWorkout * _workout;
}

@property (nonatomic) double currentCompletionFactor;
@property (nonatomic, retain) UIImageView *gradientBackgroundImageView;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) HKRingsView *ringsView;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) FIUIDividerView *separatorView;
@property (nonatomic) bool showDivider;
@property (nonatomic, retain) UILabel *typeLabel;
@property (nonatomic, retain) HKWorkout *workout;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (double)_ringDiameter;
+ (double)_ringToTypeSpacing;
+ (double)_ringTopPadding;
+ (double)_secondaryLabelToSeparatorSpacing;
+ (double)_typeToSecondaryLabelSpacing;
+ (double)rowHeightForWorkout:(id)arg1 width:(double)arg2;

- (void).cxx_destruct;
- (void)animateRingWithCompletion:(id /* block */)arg1;
- (double)currentCompletionFactor;
- (id)gradientBackgroundImageView;
- (id)iconImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)ringsView;
- (id)secondaryLabel;
- (id)separatorView;
- (void)setCurrentCompletionFactor:(double)arg1;
- (void)setGradientBackgroundImageView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setRingsView:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setShowDivider:(bool)arg1;
- (void)setTypeLabel:(id)arg1;
- (void)setWorkout:(id)arg1;
- (void)setWorkout:(id)arg1 fillRing:(bool)arg2;
- (void)setWorkoutWithoutFillingRing:(id)arg1;
- (bool)showDivider;
- (id)typeLabel;
- (id)workout;

// Image: /System/Library/AccessibilityBundles/FitnessUI.axbundle/FitnessUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end