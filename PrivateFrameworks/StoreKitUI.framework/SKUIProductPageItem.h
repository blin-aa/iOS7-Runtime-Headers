/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, SKUIStoreNotes, NSURL;

@interface SKUIProductPageItem : SKUIItem  {
    NSURL *_artistPageURL;
    NSArray *_contentRatingAdvisories;
    NSString *_contentRatingName;
    NSString *_copyrightString;
    BOOL _hasInAppPurchases;
    NSArray *_inAppPurchases;
    NSString *_installationRequirementsDescription;
    NSString *_itemDescription;
    NSString *_lastUpdateDateString;
    NSString *_licenseAgreementURLString;
    NSString *_privacyPolicyURLString;
    NSArray *_releaseNotes;
    NSString *_reviewsURLString;
    NSArray *_screenshots;
    NSString *_shortenedProductPageURLString;
    SKUIStoreNotes *_storeNotes;
    int _supportedFeatures;
    NSString *_supportURLString;
    NSArray *_trailers;
    NSString *_updateDescription;
}

@property(readonly) NSURL * artistPageURL;
@property(readonly) NSArray * contentRatingAdvisories;
@property(readonly) NSString * contentRatingName;
@property(readonly) NSString * copyrightString;
@property(readonly) BOOL hasInAppPurchases;
@property(readonly) NSArray * inAppPurchases;
@property(readonly) NSString * installationRequirementsDescription;
@property(readonly) NSString * itemDescription;
@property(readonly) NSString * lastUpdateDateString;
@property(readonly) NSString * licenseAgreementURLString;
@property(readonly) NSString * privacyPolicyURLString;
@property(readonly) NSArray * releaseNotes;
@property(readonly) NSString * reviewsURLString;
@property(readonly) NSArray * screenshots;
@property(readonly) NSString * shortenedProductPageURLString;
@property(readonly) SKUIStoreNotes * storeNotes;
@property(readonly) int supportedFeatures;
@property(readonly) NSString * supportURLString;
@property(readonly) NSArray * trailers;
@property(readonly) NSString * updateDescription;


- (id)supportURLString;
- (id)shortenedProductPageURLString;
- (id)reviewsURLString;
- (id)privacyPolicyURLString;
- (id)licenseAgreementURLString;
- (void)_setInAppPurchases:(id)arg1;
- (void)_setVersionHistory:(id)arg1;
- (id)installationRequirementsDescription;
- (id)contentRatingAdvisories;
- (id)artistPageURL;
- (BOOL)hasInAppPurchases;
- (id)contentRatingName;
- (id)lastUpdateDateString;
- (id)trailers;
- (int)supportedFeatures;
- (id)copyrightString;
- (id)releaseNotes;
- (id)inAppPurchases;
- (id)updateDescription;
- (id)itemDescription;
- (id)storeNotes;
- (id)screenshots;
- (id)initWithLookupDictionary:(id)arg1;
- (void).cxx_destruct;

@end
