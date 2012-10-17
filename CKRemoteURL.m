//
//  CKRemoteURL.m
//  Connection
//
//  Created by Mike on 11/10/2012.
//
//

#import "CKRemoteURL.h"

#import "CK2FileTransferSession.h"


@implementation CKRemoteURL

- (void)dealloc;
{
    [_temporaryResourceValues release];
    [super dealloc];
}

#pragma mark Getting and Setting File System Resource Properties

- (BOOL)getResourceValue:(out id *)value forKey:(NSString *)key error:(out NSError **)error;
{
    *value = [_temporaryResourceValues objectForKey:key];
    if (*value == nil)
    {
        // A few keys we generate on-demand pretty much by guessing since the server isn't up to providing that sort of info
        if ([key isEqualToString:NSURLHasHiddenExtensionKey])
        {
            *value = [NSNumber numberWithBool:NO];
            return YES;
        }
        else if ([key isEqualToString:NSURLLocalizedNameKey])
        {
            *value = [self lastPathComponent];
            return YES;
        }
        else if ([key isEqualToString:NSURLPathKey])
        {
            *value = [CK2FileTransferSession pathOfURLRelativeToHomeDirectory:self];
            return YES;
        }
        else
        {
            return [super getResourceValue:value forKey:key error:error];
        }
    }
    else if (*value == [NSNull null])
    {
        *value = nil;
    }
    
    return YES;
}

- (NSDictionary *)resourceValuesForKeys:(NSArray *)keys error:(NSError **)error;
{
    return [super resourceValuesForKeys:keys error:error];
}

- (void)setTemporaryResourceValue:(id)value forKey:(NSString *)key;
{
    if (!_temporaryResourceValues) _temporaryResourceValues = [[NSMutableDictionary alloc] initWithCapacity:1];
    if (!value) value = [NSNull null];
    [_temporaryResourceValues setObject:value forKey:key];
}

@end