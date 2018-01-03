/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIE0zCCA7ugAwIBAgIQGNrRniZ96LtKIVjNzGs7SjANBgkqhkiG9w0BAQUFADCB\n\
yjELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQL\n\
ExZWZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJp\n\
U2lnbiwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxW\n\
ZXJpU2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0\n\
aG9yaXR5IC0gRzUwHhcNMDYxMTA4MDAwMDAwWhcNMzYwNzE2MjM1OTU5WjCByjEL\n\
MAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQLExZW\n\
ZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJpU2ln\n\
biwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxWZXJp\n\
U2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0aG9y\n\
aXR5IC0gRzUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCvJAgIKXo1\n\
nmAMqudLO07cfLw8RRy7K+D+KQL5VwijZIUVJ/XxrcgxiV0i6CqqpkKzj/i5Vbex\n\
t0uz/o9+B1fs70PbZmIVYc9gDaTY3vjgw2IIPVQT60nKWVSFJuUrjxuf6/WhkcIz\n\
SdhDY2pSS9KP6HBRTdGJaXvHcPaz3BJ023tdS1bTlr8Vd6Gw9KIl8q8ckmcY5fQG\n\
BO+QueQA5N06tRn/Arr0PO7gi+s3i+z016zy9vA9r911kTMZHRxAy3QkGSGT2RT+\n\
rCpSx4/VBEnkjWNHiDxpg8v+R70rfk/Fla4OndTRQ8Bnc+MUCH7lP59zuDMKz10/\n\
NIeWiu5T6CUVAgMBAAGjgbIwga8wDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8E\n\
BAMCAQYwbQYIKwYBBQUHAQwEYTBfoV2gWzBZMFcwVRYJaW1hZ2UvZ2lmMCEwHzAH\n\
BgUrDgMCGgQUj+XTGoasjY5rw8+AatRIGCx7GS4wJRYjaHR0cDovL2xvZ28udmVy\n\
aXNpZ24uY29tL3ZzbG9nby5naWYwHQYDVR0OBBYEFH/TZafC3ey78DAJ80M5+gKv\n\
MzEzMA0GCSqGSIb3DQEBBQUAA4IBAQCTJEowX2LP2BqYLz3q3JktvXf2pXkiOOzE\n\
p6B4Eq1iDkVwZMXnl2YtmAl+X6/WzChl8gGqCBpH3vn5fJJaCGkgDdk+bW48DW7Y\n\
5gaRQBi5+MHt39tBquCWIMnNZBU4gcmU7qKEKQsTb47bDN0lAtukixlE0kF6BWlK\n\
WE9gyn6CagsCqiUXObXbf+eEZSqVir2G3l6BFoMtEMze/aiCKm0oHw0LxOXnGiYZ\n\
4fQRbxC1lfznQgUy286dUV4otp6F01vvpX1FQHKOtw5rDgb7MzVIcbidJ4vEZV8N\n\
hnacRHr2lVz2XTIIM6RUthg/aFzyQkqFOFSDX9HoLPKsEdao7WNq\n\
-----END CERTIFICATE-----\n"};


const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWTCCAkGgAwIBAgIUbQnfr9zudT8bXe1QiADEnynw3vUwDQYJKoZIhvcNAQEL\n\
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n\
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTE4MDEwMjAzMDU1\n\
OVoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n\
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMrkMP/QmhprM+nt6G0c\n\
gTzFg/pKFkh7FLmtNRWK9dsUsiSxrMKqnUTddBRuUDz+TKwV0xPN2HjtMecPNihr\n\
lFeK6lnyL2b32E8BRAp3Qv4O9JA5WdGMiVGIVO7KwKKcRc6X4s+SoEzXRBxzWbkf\n\
Ex5cJgHFOpnNfeL+dnuLNjLoeFsNxQjG84c7I8ivGQnEltQ51YjlZGSnCV7yDG2k\n\
nJctzQmaFWPyEn++PChNdlTtEregu9OprSkwMfD3eBbZLHqfX7OM9/FGNBdSEWmT\n\
VqXjb7c1VER88bxYD77eo1Wkdw+QqH3wlHcSRzpgmpVeaZ6C5+cv7rL8xCBFdt8V\n\
MtkCAwEAAaNgMF4wHwYDVR0jBBgwFoAUqW6Zg6Vy5K6Q+VerurTvux5auSEwHQYD\n\
VR0OBBYEFBnoJoil/uXOyM38MXl+/Jy7vCUaMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n\
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQBLbyyZi5P556/oTGL1HnrZLSTC\n\
LhNcZiCxoi4tJw5OMsTuOX+4rk1/VKPcmND02vdUkn5SaaMzG/s4s2HiMZh9IVvo\n\
JM6TDEOX3K6f4LtDDrqx6GN0YI7LvSdojPTOjCtw3Z13sp97xJbsE3KmjwfRsb6c\n\
jVM/b48MI7UBr3MPIQ4QMu6Izq8ooVZSPQsr+dtu9Uhn9knv84AszgxEKL0dbZMn\n\
8g3NGytfV5LUuvFkYD4eQgWEKnhKh4jf71ZzO4qxadyFb9QI8tY+tiNof8wfTDBw\n\
4wyP7o5fu6XVaQYOu4ipadSbVOiaQNNpPSCIvRt1docIn0TfPljrjUwtWRXx\n\
-----END CERTIFICATE-----\n"};


const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEowIBAAKCAQEAyuQw/9CaGmsz6e3obRyBPMWD+koWSHsUua01FYr12xSyJLGs\n\
wqqdRN10FG5QPP5MrBXTE83YeO0x5w82KGuUV4rqWfIvZvfYTwFECndC/g70kDlZ\n\
0YyJUYhU7srAopxFzpfiz5KgTNdEHHNZuR8THlwmAcU6mc194v52e4s2Muh4Ww3F\n\
CMbzhzsjyK8ZCcSW1DnViOVkZKcJXvIMbaScly3NCZoVY/ISf748KE12VO0St6C7\n\
06mtKTAx8Pd4Ftksep9fs4z38UY0F1IRaZNWpeNvtzVURHzxvFgPvt6jVaR3D5Co\n\
ffCUdxJHOmCalV5pnoLn5y/usvzEIEV23xUy2QIDAQABAoIBAAa4lnLy+xfi8z5N\n\
lkR/DDzyIhQZfjF6ek5IUZjcGJbgUaJrjFiKhFkyqNTAbsIGfo24z1w5lnEzElMg\n\
KuAd6DUaMfc20aEslqrPVOyv1LVL04gvji0l5aqgxIeAie8ZFCrq1yWfKtZAz03N\n\
+Gvsfpqj3NJ0MSPFLeVmHpCrJOl8wNiSPx+G892AZFFf/BB3LrHTK1gNLwcH0J3J\n\
B3VreJNMpv/E9CkIeMurYl1sJAyl/ttN94YNADL/TK2WRinEPabrsWYE7Wexnfim\n\
3TqFdbXdRJ+m232CfH7nyBvOQXouel64UzpjA3OFjofBSqQE+IUd5HtMAZo22lei\n\
oblYKf0CgYEA8NSbfoEuP0drZ/JPsJs3yQPidqGIjbTNLz/qgJS3rYV+pBcgEIbL\n\
Yh4PgMk4VBygJN/RqpCCmWn5338mcokgawvkufmowelN3eQqVPUDgwOErBoOMfY0\n\
5EEW7kiB2T4h6wUl1xKKx03JPnwBq4s17yI0nHaf5c88jCIqYZXKI/cCgYEA16vQ\n\
w4yodXac7rADf32dSyjp7ELsN7VLNn+HOQQXgLmSlq3amiZNvXQsqg9tomvxe6m5\n\
RdoGnsXBvUqsYO9tl6um6twqyz35Uc4eb0qeqDPD/4aS5PH0VIoygdmbQKpw6Ya9\n\
IYUTRySvf6+m71tU3rSfO9oo3kuVOx5rG2u9C68CgYBnH7MhvXEvOYbdcN380spV\n\
citj/xF5FIWUCPuCaawpSnOLEjfxu7aVYifjTsanBcbxY0HllpHF3aJYuJqfCubt\n\
z572n9hKiHuGW3BhBrWlQTlrdJDFhhbp8pE+IaAwhTGC8KZebRst8roM3o7chPTo\n\
XC5JHWakwlO78dlSBhETywKBgAu2Se0Eq3VNjrIrntUCllMpkqKA8+EGmGIKROak\n\
wT39VeeW42Mxp1EdiPtnQRXr9L45dlVDxM5EgQPtlTTia7or2TGx6SUGZY66uc5j\n\
aABMZ11uCnYiaZlZs+p3TcYSO3WDGqxCVMytQlaVzGP9OrupZWhTrZp80krWmQxx\n\
KmADAoGBAOdpvLozW15pg74/wFcCFNaUzRFP+sYi54ZNxW/eVkhQqzwEzryroGyQ\n\
0BNhGs9Kwk4YtIHL5UlfsHNx3Fj6qKkVsYzov6PV0QmqqF9rVWk2GgEZzu6MlNfM\n\
fu4oIU2s1auo0uIzhhRBy64H6XXfyRvGr6dfVDYRZEmfIt1SsMww\n\
-----END RSA PRIVATE KEY-----\n"};

#ifdef __cplusplus
}
#endif
