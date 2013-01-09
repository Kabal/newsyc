//
//  HNAPIRequest.h
//  newsyc
//
//  Created by Grant Paul on 3/4/11.
//  Copyright 2011 Xuzz Productions, LLC. All rights reserved.
//

@interface HNAPIRequest : NSObject {
    HNSession *session;

    id target;
    SEL action;
    NSMutableData *received;
    NSURLConnection *connection;
    NSString *path;
}

- (HNAPIRequest *)initWithSession:(HNSession *)session_ target:(id)target_ action:(SEL)action_;
- (void)performRequestWithPath:(NSString *)path parameters:(NSDictionary *)parameters;
- (void)cancelRequest;
- (BOOL)isLoading;

@end
