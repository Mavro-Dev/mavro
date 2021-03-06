// Copyright (c) 2015 Mr.Anonymous

#ifndef MAVRO_TX_BLACKLIST_H
#define MAVRO_TX_BLACKLIST_H

#include "bignum.h"
#include "base58.h"

extern std::set<CBitcoinAddress> setBlackInAddresses;
extern std::set<CBitcoinAddress> setBlackOutAddresses;

void InitBlackList();

/*
 * next list allow to ban known sergey gripinich and scam service addresses
 *
 * more info about scammer :
 *    scammer blogspot        : http://gripinich.blogspot.com
 *    scammer google+ profile : http://plus.google.com/+%D0%A1%D0%B5%D1%80%D0%B3%D0%B5%D0%B9%D0%93%D1%80%D0%B8%D0%BF%D0%B8%D0%BD%D0%B8%D1%87
 *    scammer google+ profile : http://plus.google.com/+СергейГрипинич
 *    scammer google+ profile : http://plus.google.com/117903267518184100373
 *    scammer youtube account : http://youtube.com/user/t0675700395
 *    scammer youtube channel : http://youtube.com/channel/UC0nnheLmfJGXkmzLYsgoJCA
 *    scammer github  account : http://github.com/sppl
 *    scam service            : http://super-ppl.com
 *
 */

static const char *blacklisted_addrs[] = {
    "MJaxCYfVGFjFcnniQJQT5geXxxywzLUf1y",
    "MNxd3k7Mu7tjHp7L1HUS2P9CA3bysv61ib",
    "MK3tT9uJqihgy7MfFKJo2QVLz8oh1jRVVr",
    "MGYddJ25JB9g5CNB2UonBAxTsv6ptE48kA",
    "M86Q8tFN5XretwEYde6Rjxoc4uEVv6gNUn",
    "MR9ktA83ByK5wpyp9isoafC3oy3YCgRUmv",
    "MSgT7MrHstj5zoi6NyjGVV65BM49N58zFA",
    "M8ys1xX7YgjF6kySXCbWP3itRZAjdMVASU",
    "M8YL8LkcMr7jiyKMY86XksKKNrVXS2Swrk",
    "MB7BaETzwXpX7ECxQbkxKjD2ySmGT86bzQ",
    "MWxM2CBFsQMRZjmYBFct77fLjUTM9SNmZi",
    "MRCAbCa8KqKEyPfqrpHFdGjN1eScJLcBNv",
    "MRoDFX5GSff8QPydtQz8rr5z7Bn8d5a3S8",
    "MCv6fz1Ma6rNb9dt2NQpqzdL6w5jQmUyad",
    "MP1Qmsgdm1yUKV7of5UFXgdyVhiqft88kF",
    "MHfULSS7B4UEXWJ6qzy7kgbUMB7SKBWSo4",
    "MFKkjp1CrcdY6seZS3QMUZrnPwi5G8bzEM",
    "MQoTZBzvuB6bXypVvBtPwVfjZLEFHidQz8",
    "MCnsRw8BLMyq6koN4rJ73j1oNhpobnjWNZ",
    "MMtBDqKrAxkQMBpSsjmRL1iizSpgwxywKV",
    "M8FbQoZRwsmtJzcDUfLhM3UAKfFyvhsj8b",
    "MEBw41ovxk7C87vxFm3nihp25uyfA1MicS",
    "MQHPtk9GoTku7E6syMp4oNNid3BMvXrGuf",
    "MQ8hjS1HZhuFhxyFUPocAsEn77j2QN6tu1",
    "MJxTMhqUkKb3ogV9JcvDyASrerpepnH84j",
    "M9mQmJJm3RMxhG3E6M3FSmdiAT1LNNtsi2",
    "MAf7SpL5BJR3nEHSmjvGzqN5ZVVzSfw5PG",
    "MEXrMRrSTbYgqhEsK4y23Ky4N9vwrHE42x",
    "MEY5jJCx2rnkdVo6gpFgqfaYPH5QQ5vcgs",
    "MMVeNLnEmr6nVS2A4AYkQ7fGkwwpDw9z36",
    "MEyTsSFBGDzWhrP7Tiwg96pdkKziL97u4K",
    "M9kXaYXdSC6LDA1vj5iJakqUkYJPsikUJC",
    "MRnKVpkr39fAwieMNWKKxKskrpFNCjUpsS",
    "MB8zHHQaTYcTkuikjN5j4BdvuZg8ddndM4",
    "MSqcN7NajthwLbKzagt68FjVAEVUhwzUnb",
    "MGQuECFdWimVwNSsVqggbiKsDbFw6HDXcH",
    "MJwZLwQrxwMizSZmUaESpHjZHed4z9v9Qs",
    "MSyWcG3UWhtfiwSv647Jm63Goo2QiLLJC1",
    "MQ9xVMkjDpED2xzchmCPm5wPion13JaMZV",
    "MD2NJdYP7NG6ZvRSnNs1QNzvjudJ6xWKyW",
    "MEFNXKtnV6hEJ9RBTM74jaxwevMnfF686j",
    "MVFuv7gycdBzEYf1WrJKrQfAhXpkE4Ga4x",
    "MC9LrDHxsBBpqhFBdj3kykp7dhry34qyq1",
    "MJ5dKvhXoP15dnWDitNxHKULGY78HVfHxU",
    "MPu8Cxydjt5zr3p625kfQaNQ84jztnqXWb",
    "MRMMJ8FDCTvHsZyzseC5516pnJh3GbxDwz",
    "MPV5ygnDq8tHWVWc4mha3rWTtEDrw8nbHY",
    "MKL89zu8m4SnDfRG7p6dL4L11XPVShhGiB",
    "MVhdsnpEEt31CrRXY5C59EFf3SgR2nnREv",
    "MPDVZG2AjNEPCxR8BQARCvPH8U2oKWopma",
    "MD8U88rsStqVW1gfXMDMV8TPx2xVCW1ti3",
    "MBbV4byKjZ8WayWfrB4yLMdbXj3dU95VRZ",
    "MDFufoApEX94AHGuWGqpAHYWDQoeEtgprz",
    "MK4Ra7hvDPbKWo96rMZTSHn3C9Nq9qaUfB",
    "MJv7ZafakqvgMYwgtj6TbCU9zT7fZyZ25E",
    "MJqDMdDpHkuroMEkrjQbdru3hw9fwVv5Nc",
    "MVRLPmo8xnD59tygRxKYiFyBXiCTFh7rgB",
    "MGmPmqrM159y8MRFVWhq1xL3buBecEfPmR",
    "MRyPuWfrzGuo9SiZaSctVsMpUhJ4nijrxU",
    "MJAWaNFrXjoYucskuXaYsmvTy1n98iH1V8",
    "MAPyLWHJShoLRwdk1ECyksoLof5yxHn3tJ",
    "MRpMpgxfgpbnrQ3BdQRxo23McEniU5Bdmo",
    "MBsYHoSr3ghusJnsQXScL9o2dbRAU9eAeM",
    "MF49pAWDwaLY3neYQsxRCyJPttq13SHA8f",
    "MWLeFspRLaoeijnSqKj9RsQvTqXhWNK8dK",
    "MT4k7JLvnJrSzkd6uWNvZMkwPd32oVWnkD",
    "MJMgDyS4qafdYhz75BtM1jVj4oiTVzBcdi",
    "MHvdARGDA98WWdj121s3N7WGvuSUD3fUTW",
    "MEHrmqdttZNF2WZDJ9EmSfJF5uGZ2AyuCd",
    "MJstrfqqj4fNhzQNebsUnsyG9DEGK1WJn5",
    "MPeJneq3P9Zd9UqPRS66MwPFx2ZLuK3Cur",
    "MGcpEh3AjbXTZQ9SpaT6gp9nwPectfJ18j",
    "MXEexTn9kiALk2HZN6vTYrpbRru1Us9MGc",
    "M9enYz7THTcWmaELHbjD3EFANHMED38uuF",
    "ML5tD7f7mEs4YU1vXv9mojXPx6c8Wfha8s",
    0
};

// "mavrojail" accept mavro but never release
static const char *mavrojail = "M8d1Rbijo8mWfqugo321MXc4BcriNtpBHT";

inline const void *getPBlackList() { return blacklisted_addrs; }
inline const void *getPMavroJail() { return mavrojail; }

#endif // MAVRO_TX_BLACKLST_H
