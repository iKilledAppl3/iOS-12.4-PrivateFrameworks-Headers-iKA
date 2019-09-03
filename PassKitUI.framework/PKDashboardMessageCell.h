/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardMessageCell : UITableViewCell {
    id /* block */  _actionOnDismiss;
    UIButton * _dismissButton;
    UIImage * _dismissImage;
    UIImage * _iconImage;
    UIImageView * _iconImageView;
    bool  _isTemplateLayout;
    UILabel * _labelMessage;
    UILabel * _labelTitle;
    NSString * _message;
    bool  _smallDevice;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ actionOnDismiss;
@property (nonatomic, retain) UIImage *dismissImage;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, readonly) UILabel *labelMessage;
@property (nonatomic, readonly) UILabel *labelTitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) bool smallDevice;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)actionOnDismiss;
- (void)dismissButtonPressed:(id)arg1;
- (id)dismissImage;
- (id)iconImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelMessage;
- (id)labelTitle;
- (void)layoutSubviews;
- (id)message;
- (void)prepareForReuse;
- (void)setActionOnDismiss:(id /* block */)arg1;
- (void)setDismissImage:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSmallDevice:(bool)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)smallDevice;
- (id)title;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityRoleDescription;
- (bool)_axDismiss:(id)arg1;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end