/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardFooterTextView : PKDashboardCollectionViewCell {
    UILabel * _footerLabel;
    NSString * _footerText;
    bool  _isTemplateLayout;
}

@property (nonatomic, copy) NSString *footerText;
@property (nonatomic) double horizontalInset;

+ (double)defaultHorizontalInset;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)createSubviews;
- (id)footerText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resetFonts;
- (void)setFooterText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
