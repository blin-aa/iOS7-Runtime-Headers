/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSDate, NSString, NSArray;

@interface MSASSharingRelationship : NSObject <NSCopying> {
    BOOL _isMine;
    NSString *_GUID;
    NSString *_albumGUID;
    NSString *_email;
    NSArray *_emails;
    NSArray *_phones;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_personID;
    NSDate *_subscriptionDate;
    int _state;
}

@property(retain) NSString * GUID;
@property(retain) NSString * albumGUID;
@property(retain) NSString * email;
@property(retain) NSArray * emails;
@property(retain) NSArray * phones;
@property(retain) NSString * fullName;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property(retain) NSString * personID;
@property(retain) NSDate * subscriptionDate;
@property int state;
@property BOOL isMine;

+ (id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToSharingRelationship:(id)arg1;
- (void)setPhones:(id)arg1;
- (void)setIsMine:(BOOL)arg1;
- (BOOL)isMine;
- (void)setAlbumGUID:(id)arg1;
- (id)albumGUID;
- (void)setSubscriptionDate:(id)arg1;
- (id)subscriptionDate;
- (void)setFullName:(id)arg1;
- (void)setGUID:(id)arg1;
- (id)phones;
- (void)setEmails:(id)arg1;
- (id)emails;
- (void)setEmail:(id)arg1;
- (id)personID;
- (void)setPersonID:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)fullName;
- (id)_fullName;
- (id)GUID;
- (id)email;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
