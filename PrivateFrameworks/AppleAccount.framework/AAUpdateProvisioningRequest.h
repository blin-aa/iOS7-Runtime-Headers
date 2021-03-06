/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class ACAccount, NSString;

@interface AAUpdateProvisioningRequest : AARequest  {
    ACAccount *_account;
    NSString *_authToken;
}

@property(retain) ACAccount * account;
@property(copy) NSString * authToken;

+ (Class)responseClass;

- (id)initWithAccount:(id)arg1 token:(id)arg2;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (id)urlCredential;
- (id)urlString;
- (id)urlRequest;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (void)setAccount:(id)arg1;
- (id)account;
- (void).cxx_destruct;

@end
