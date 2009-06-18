/*
 Copyright (c) 2006, Greg Hulands <ghulands@mac.com>
 All rights reserved.
 
 Redistribution and use in source and binary forms, with or without modification, 
 are permitted provided that the following conditions are met:
 
 Redistributions of source code must retain the above copyright notice, this list 
 of conditions and the following disclaimer.
 
 Redistributions in binary form must reproduce the above copyright notice, this 
 list of conditions and the following disclaimer in the documentation and/or other 
 materials provided with the distribution.
 
 Neither the name of Greg Hulands nor the names of its contributors may be used to 
 endorse or promote products derived from this software without specific prior 
 written permission.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY 
 EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES 
 OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED 
 TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR 
 BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY 
 WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


// For Mac OS X < 10.5.
#ifndef NSINTEGER_DEFINED
#define NSINTEGER_DEFINED
#ifdef __LP64__ || NS_BUILD_32_LIKE_64
typedef long           NSInteger;
typedef unsigned long  NSUInteger;
#define NSIntegerMin   LONG_MIN
#define NSIntegerMax   LONG_MAX
#define NSUIntegerMax  ULONG_MAX
#else
typedef int            NSInteger;
typedef unsigned int   NSUInteger;
#define NSIntegerMin   INT_MIN
#define NSIntegerMax   INT_MAX
#define NSUIntegerMax  UINT_MAX
#endif
#endif // NSINTEGER_DEFINED


#import <Cocoa/Cocoa.h>

#import <ConnectionKit/CKConnectionProtocol1.h>
#import <ConnectionKit/CKConnectionRegistry.h>
#import <ConnectionKit/CKAbstractConnection.h>
#import <ConnectionKit/CKAbstractQueueConnection.h>
#import <ConnectionKit/CKStreamBasedConnection.h>

#import <ConnectionKit/KTLog.h>

#import <ConnectionKit/CKConnectionOpenPanel.h>
#import <ConnectionKit/InterThreadMessaging.h>
#import <ConnectionKit/NSData+Connection.h>
#import <ConnectionKit/NSObject+Connection.h>
#import <ConnectionKit/NSString+Connection.h>
#import <ConnectionKit/NSPopUpButton+Connection.h>
#import <ConnectionKit/NSTabView+Connection.h>
#import <ConnectionKit/NSNumber+Connection.h>

#import <ConnectionKit/CKTransferRecord.h>
#import <ConnectionKit/CKTransferProgressCell.h>
#import <ConnectionKit/CKDirectoryTreeController.h>
#import <ConnectionKit/CKDirectoryNode.h>
#import <ConnectionKit/CKTableBasedBrowser.h>

#import <ConnectionKit/EMKeychainProxy.h>
#import <ConnectionKit/EMKeychainItem.h>
#import <ConnectionKit/CKLeopardSourceListTableColumn.h>
#import <ConnectionKit/CKBookmarkStorage.h>
#import <ConnectionKit/CKHostCategory.h>
#import <ConnectionKit/CKBonjourCategory.h>
#import <ConnectionKit/CKHost.h>
#import <ConnectionKit/CKHostCell.h>


// Version 2.0 API
#import <ConnectionKit/CKFileTransferConnection.h>
#import <ConnectionKit/CKFileTransferProtocol.h>

#import <ConnectionKit/CKConnectionError.h>
#import <ConnectionKit/CKConnectionAuthentication.h>
