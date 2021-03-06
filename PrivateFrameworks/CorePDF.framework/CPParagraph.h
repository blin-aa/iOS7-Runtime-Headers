/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPListItem;

@interface CPParagraph : CPRegion  {
    BOOL noIndentation;
    BOOL below;
    unsigned int alignment;
    BOOL hasDropCap;
    id flowProperties;
    CPListItem *listItem;
    float preformatWidth;
}

@property(retain) CPListItem * listItem;


- (BOOL)isPreformattedWithUnitWidth:(float*)arg1;
- (BOOL)below;
- (void)setBelow:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reducedBounds;
- (void)explode;
- (void)setHasDropCap:(BOOL)arg1;
- (BOOL)hasDropCap;
- (BOOL)noIndentation;
- (void)setNoIndentation:(BOOL)arg1;
- (void)setIsTextRegion:(BOOL)arg1;
- (BOOL)isTextRegion;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (void)setFlowProperties:(id)arg1;
- (id)flowProperties;
- (BOOL)isShapeRegion;
- (BOOL)isImageRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isRowRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isBoxRegion;
- (float)selectionBottom;
- (void)setListItem:(id)arg1;
- (id)listItem;
- (void)accept:(id)arg1;
- (unsigned int)index;
- (void)setAlignment:(unsigned int)arg1;
- (unsigned int)alignment;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
