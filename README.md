ACDCryptsyAPI
=============

Objective-C implementation of Cryptsy API for iOS.

## Overview

ACDCryptsyAPI provides a very simple interface into the [Cryptsy API](https://www.cryptsy.com/pages/api) for use in iOS applications. 

Only a single method is exposed:

```
- (void)apiQuery:(NSString *)method params:(NSDictionary *)params success:(CryptsyAPISuccessBlock)success error:(CryptsyAPIErrorBlock)error;
```

ACDCryptsyAPI takes provides the private methods required to properly sign the authenticated methods provided by Cryptsy.

## Examples
### Get recent market trades
```
ACDCryptsyAPI *api = [[ACDCryptsyAPI alloc] initWithApiKey:@"API_KEY" andSecret:@"SECRET_KEY"];
[api apiQuery:@"markettrades" params:@{@"marketid": @123} success:^(id response) {
        // success
        NSLog(@"%@", response);
    } error:^(NSError *error) {
        // error
        NSLog(@"%@", [error localizedDescription]);
    }];
```

### Get general info
```
ACDCryptsyAPI *api = [[ACDCryptsyAPI alloc] initWithApiKey:@"API_KEY" andSecret:@"SECRET_KEY"];
    [api apiQuery:@"getinfo" params:nil success:^(id response) {
        // success
        NSLog(@"%@", response);
    } error:^(NSError *error) {
        // error
        NSLog(@"%@", [error localizedDescription]);
    }];
```

## Feedback
This is a very early version of ACDCryptsyAPI. It works fine, but could be tuned to provide direct access methods (eg. getInfo, getMarketTrades). Additionally support for caching, network detection, etc. will eventually be added. Please feel free to contact us if you have a specific request for the API.

## Donations
ACDCryptsyAPI is free to use, but if you find this library to be valuable, please make a donation to continue its development.

- BTC: 14pKLUPrLwnLiVrxXQy1pXh8JKMMHvnscm
- Cryptsy Trade Key: f9c7e4fab3ea55e0c78eb11b27f4b249dfee0868
