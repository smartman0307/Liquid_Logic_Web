Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=102", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("CONSENT=YES+srp.gws-20220309-0-RC1.en+FX+789; DOMAIN=accounts.google.com");

	web_add_cookie("SMSV=ADHTe-B4G-EUhOfBjhjdOeXkcOFYt75ltHy49Xfij7dPqc-VnyKV_zxKzrcPLhRclH1_KPS-Oj0enZZqMivCZQnWUqmGgQJYJqp_TjfWpU0dU2gmufV1jnI; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI5G0f8zjQ4kd9MOXlvLhCKr5y0crYddefAPzYPk78Q8YxMqc-neTmn1fEn8WFaNwdmi2cVPnK4WqIoJGOYs1UIUACGIn1sXfBPKMw3SuKPKIsRAOGIO_T4bD5YDXhzudcXqQpY5bQLmsqEwAPNPxzEIZTBE2w; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIgJUB; DOMAIN=accounts.google.com");

	web_add_cookie("SID=KAiVm3UzVuOJuf2NKRVgfoxFS-u2vQCkN-JsGkS1YWeAxW80gefm6564FEidtQlePZ6aWw.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSID=KAiVm3UzVuOJuf2NKRVgfoxFS-u2vQCkN-JsGkS1YWeAxW80qhdDrfl7eUfZvzSh0fDPuQ.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=KAiVm3UzVuOJuf2NKRVgfoxFS-u2vQCkN-JsGkS1YWeAxW801UHRnxMOvW39NBL7FMIp5g.; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=A4i43MtkFsn-5rDjq; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AryQjyxC0uDaQB_Ys; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=rcus5smFFJAimV4z/AWmKWjrHATnrU0OK4; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=84vCLABwt5BDAF6-/ALsBluzVn7x21eM7d; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PAPISID=84vCLABwt5BDAF6-/ALsBluzVn7x21eM7d; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=84vCLABwt5BDAF6-/ALsBluzVn7x21eM7d; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=o.chat.google.com|o.mail.google.com|o.meet.google.com|s.GB|s.youtube:KAiVm6s_Yt0p7N_1Hy1fbBklZfqGu2veGp23jwKAOSnYn9ygHRz6UUM--bllhn1SYrIjFQ.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-1PLSID=o.chat.google.com|o.mail.google.com|o.meet.google.com|s.GB|s.youtube:KAiVm6s_Yt0p7N_1Hy1fbBklZfqGu2veGp23jwKAOSnYn9ygsHlCiNHLTQoTfLOnsoIPPQ.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=o.chat.google.com|o.mail.google.com|o.meet.google.com|s.GB|s.youtube:KAiVm6s_Yt0p7N_1Hy1fbBklZfqGu2veGp23jwKAOSnYn9yglhSSNmxQgXn5PWk9s66LLQ.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:xxgua_tA4bE1BzHZw01SDLojSSOgiJIC_8h_kEE0i-_gxiYr1cGAOxifCgyrdgeAvQYvbnEYF0XtcwuxA8bITBIMP0UDsg:87VnFMmFIDHQr3Gg; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AakniGNKqPat69vzfxbDnUdyO-IXQaTmHLsPYfhpmj4c4DCSfAC9xTYIdA; DOMAIN=accounts.google.com");

	web_add_cookie("PREF=ID=2302c7bc12d2a0ce:FF=0:TM=1654892314:LM=1654892314:V=1:S=ui-LbW7d9QWz6idH; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=FvToV6m71J3lg3F9JD9DyKdWIRzS5Y9Psr0Hf1DQ7OYxws6ZjiIC_724Qy0JUU9N1nrrZKHhH1r-52f5DJRY3-wT8aC7o6hNmCsp3iQYKofZ__zy0kAsWLUPIQw7wz84z0qbl1uY1o6o3TEixEi7eWCAkXJbDu4gXwDEN1SQvVS2Vo-gM5PYEQMqua8LN8IeNDEuP9cz1D_Rj3a7hz3BSDPmn0uFNZsvmQU8tttHEVYIfmtkRSLJYSEAXqwjvFaL9Y6XjjZRRyTIE55kAfHm9gg91gznNfRYEQUb8-kIPXtHBzpUrpwh; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2022-06-11-09; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AJi4QfGLPQS73O9swUkHhYUh6PSOf7ntErDF5PdYOxiq99_0hNpC0tswJkZ2S1YG7PcFcKTcfg; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=AJi4QfFHrmKd38XR7jsyv31baCM-t5S3NliRfAldb4ycvkv-scVIFMTBGxtk2Pjf4k0a2CgmnQ; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"Body= ", 
		EXTRARES, 
		"Url=http://192.168.1.121:8008/ssdp/device-desc.xml", "Referer=", ENDITEM, 
		"Url=http://192.168.1.73:60000/upnp/dev/00e91b8d-743c-3912-a302-2d1eb6bf14a6/desc", "Referer=", ENDITEM, 
		LAST);

	web_url("www.liquidlogic.co.uk", 
		"URL=http://www.liquidlogic.co.uk/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fast.fonts.net/t/1.css?apiType=css&projectid=5e886207-8b7b-4a3d-be80-9ae331ce15bb", "Referer=https://www.liquidlogic.co.uk/", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/fonts/efbaf613-e78b-4aed-bef6-b79bd8bedcdb.woff2", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/fonts/34fe82a2-19d9-4b63-8c8a-7860040b01fd.woff2", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTAyLjAuNTAwNS42MxopCAUQARobCg0IBRAGGAEiAzAwMTABEOH0DRoCGAOi044DIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCs5AoaAhgDk3jgciIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQn6wLGgIYAwP7hFAiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgDWbx0fSIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ0igaAhgDxwPXpSIEIAEgAigEGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ7nEaAhgD0I4oMCIEIAEgAigBGicIChAIGhkKDQgKEAgYASIDMDAxMAEQBxoCGAN3Vzc4IgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAgGgIYA0QGrjMiBCABIAIoARooCAgQARoaCg"
		"0ICBAGGAEiAzAwMTABEOMPGgIYAxEz0OIiBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABEJm-ARoCGAM2fMtGIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARD4uAoaAhgDy0nuTyIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQtrsGGgIYAwrAzLUiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEKoSGgIYAyI9cYQiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/fonts/0f51d8b8-bda2-4557-9b56-0a4e94ab63d9.woff", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/fonts/332136cf-33d0-43fb-97ee-49c7742489ff.woff", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", "Referer=https://www.liquidlogic.co.uk/", ENDITEM, 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:y-eMOe5vkFSqXZpiK4ypzsw3E_WB3ubXRdPpm4tfFTo&cup2hreq=b32e63191961b3e46425f4ee21af4f1a94b586e8a6d3cea86f4f3a5ef6d07ed7", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"RXQR\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{44a09353-b56f-4ab7-abc5-19c34e32c4ec}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"4.10.2449.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"RXQR\",\"cohort\":\"1:bm1/15rx:\",\"cohorthint\":\"HundredPercent\",\"cohortname\":\""
		"HundredPercent\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.34ff2e9d7a7ce81c5d760d4b0f4b59a0237dd5db0d1e84ccd5103a30687eac17\"}]},\"ping\":{\"ping_freshness\":\"{24fc1e28-393d-4b44-8b68-6d973ff9c114}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"9.36.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"RXQR\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{e5d0b650-92e1-4800-bd87-7d71afee39de}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"RXQR\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.507a0cb2f5761679e4946ca5aa8d95e771acdba04976e3b8195f793e889b8ef4\"}]},\"ping\":{\""
		"ping_freshness\":\"{2b733e3e-3047-4a99-b2e0-e743013859f4}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"335\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"RXQR\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{54492481-ec2b-4660-ad47-ad1fd8b81f95}\",\"rd\":5639},\"updatecheck\":{},\""
		"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"RXQR\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2c15227a2823f31c7f3728e85a39bd87040d30562f3fa8d1c6faeb20f93e3cc8\"}]},\"ping\":{\"ping_freshness\":\"{ce0f2e98-a819-4098-b388-d8b05d234b46}\",\"rd\":5639},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"50\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":"
		"\"RXQR\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ed928d4c7dcdc8ecdd14d8e11ce3835839ece97573462115b89a16db13f19730\"}]},\"ping\":{\"ping_freshness\":\"{2bbf1321-141f-498c-ab25-b21819a5c4c6}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"7391\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"RXQR\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.05a6948fc1b6ee4aecf35458654807fd308498d6ba14beeea26164e1fb3734c6\"}]},\"ping\":{\"ping_freshness\":\"{43d0664e-d652-4736-ac36-a7c8702c7035}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"20220518.450219702\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"RXQR\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{4c971b0a-0b69-4ea5-8c4d-5b23784bb50b}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"RXQR\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8d72c1be146d9732d4e14426908065214a0c673fd14d166d9eb1dc8780920158\"}]},\"ping\":{\""
		"ping_freshness\":\"{d56ee3c1-299d-4d17-8c2b-ce0abb6d4729}\",\"rd\":5639},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"100.282.200\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"RXQR\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.29661be65c8fb50d3d4df2fe040a1cc6dd525f50a95850aae6a191301c3de744\"}]},\"ping\":{\"ping_freshness\":\"{0bb11203-c828-44b8-a98e-3f25644d4aea}\",\""
		"rd\":5639},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"RXQR\",\"cohort\":\"1:zkl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.54d066535adfc15a685397a70a1a240f5f57e29087d08efc31722c014aea7489\"}]},\"ping\":{\"ping_freshness\":\"{2e66c111-4402-49f1-ac50-62bd69728e93}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"268\"},{\"appid\":\""
		"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"RXQR\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0c7c5ff66b7bdc2957625d84915275a5ad6bc8395781e81baf6e1f2f7c18da6f\"}]},\"ping\":{\"ping_freshness\":\"{795a3b02-7ab3-4365-91b5-7bbf3bff98ec}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"2827\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"RXQR\",\"cohort\":\"1:z9x:\",\"cohorthint\":\""
		"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0c24e9bd976adffa987e08fc54dc0950c84cf18f9cdb4c5caabc6acf24887c4f\"}]},\"ping\":{\"ping_freshness\":\"{13ed3298-7d72-4371-a297-7e2724f7a104}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"20220505\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"RXQR\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80AndAbove\",\"cohortname\":\"M80AndAbove\",\"enabled\":true,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.c79aca47ef6e04cddcce03abc84ac4049d3cb6d405fd0db67cd7bb101557f427\"}]},\"ping\":{\"ping_freshness\":\"{20782cf0-f889-461b-956e-804e9e3019a8}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"2022.6.6.1142\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"RXQR\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.97e3d001c5dcc387a366a1b459667ea8afee2512783f6b4ca4659124f91944c1\"}]},\"ping\":{\"ping_freshness\":\"{e6496176-8502-47fc-8b19-7e108ddf1073}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"104.0.5112.4\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"RXQR\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\""
		"ping_freshness\":\"{daa893bc-b7da-44e7-8a9e-e421256fa370}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"RXQR\",\"cohort\":\"1:148r:\",\"cohorthint\":\"desktop_1\",\"cohortname\":\"desktop_1\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ee6f8b3406cbb58430c74d59b4408d8dfdaed9902082bbfe55b0cd2cdd1a18fd\"}]},\"ping\":{\"ping_freshness\":\"{e4742a73-535d-464c-b192-5f4d015a4f2f}\",\"rd\":5639},\"tag\":\""
		"desktop_1\",\"updatecheck\":{},\"version\":\"29.4\"},{\"appid\":\"dnhnnofocefcglhjeigmkhcgfoaipbaa\",\"brand\":\"RXQR\",\"cohort\":\"1:14w3:\",\"cohorthint\":\"Default list \",\"cohortname\":\"Default list \",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.99b9135efef548415566845e4045e9e6ff35201620230887ab684638970f5285\"}]},\"ping\":{\"ping_freshness\":\"{946b8219-4cea-4f2e-b6e3-844fe020bac3}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"2022.4.13.0\"},{\"appid\":\""
		"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"RXQR\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{531feb41-1570-4241-86ad-ccf07a53323c}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"RXQR\",\"cohort\":\"1:w59:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{2c74659a-03d8-433c-922c-89642cb3753d}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"RXQR\",\"cohort\":\"1:15j3:\",\"cohorthint\":\"Win (Including up-to-date)\",\"cohortname\":\"Win (Including "
		"up-to-date)\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{73f674a7-4738-424b-89f0-a6b1dbc631f7}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"_internal_experimental_sets\":\"false\",\"_v2_format_plz\":\"true\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"RXQR\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\""
		"General release\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{4da83054-06a3-4b45-8d07-cad2fc39ab8f}\",\"rd\":5639},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\""
		"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.675\"},\"prodversion\":\"102.0.5005.63\",\"protocol\":\"3.1\",\"requestid\":\"{1361f63d-6755-4262-a6cc-bf2bf16b932e}\",\"sessionid\":\"{49aa025e-29ba-4d4c-84de-8c9cce16e8b4}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.132\"},\"updaterversion\":\"102.0.5005.63\"}}", 
		EXTRARES, 
		"Url=https://www.liquidlogic.co.uk/fonts/52ed7b2d-8a31-4b18-a1d5-8685608b0889.woff", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/fonts/fa-brands-400.woff", "Referer=https://www.liquidlogic.co.uk/css/fontawesome.min.css?v=4", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/fonts/fa-solid-900.woff", "Referer=https://www.liquidlogic.co.uk/css/fontawesome.min.css?v=4", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/images/search-icon.png", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/images/header-logo.png", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/images/banner-overlay.png", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/images/intro-wrap.png", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAyLjAuNTAwNS42MxIQCfQVFmhC_EsjEgUNZ2ez_hirqcoB?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j96&a=1508945015&t=pageview&_s=1&dl=https%3A%2F%2Fwww.liquidlogic.co.uk%2F&ul=en-us&de=UTF-8&dt=Social%20Care%20Software%20%26%20IT%20System%20Suppliers%20%7C%20Liquidlogic%20UK&sd=24-bit&sr=1536x864&vp=1519x746&je=0&_u=IEBAAEABAAAAAC~&jid=922127454&gjid=435580398&cid=585599421.1654945001&tid=UA-105150164-1&_gid=1088951302.1654945001&_r=1&_slc=1&z=1724588182", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.liquidlogic.co.uk/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	lr_think_time(5);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"RXQR\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":16418,\"downloaded\":3130,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"7392\",\"previousversion\":\"7391\",\"total\":3130,\"url\":\"http://edgedl.me.gvt1.com/edgedl/delta-update/"
		"hfnkpimlhhgieaddgfemjhofmfblmnib/1.636323b8d33b72591551a4c30b8b79148ab0f0c2b6f8fbe4fd2bf9c1b3669f1a/1.ed928d4c7dcdc8ecdd14d8e11ce3835839ece97573462115b89a16db13f19730/388138d6a25ba0d1254fd07339d9fae3d861378dcee3cca5a623a1028275e999.crxd\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.636323b8d33b72591551a4c30b8b79148ab0f0c2b6f8fbe4fd2bf9c1b3669f1a\",\"nextversion\":\"7392\",\"previousfp\":\"1.ed928d4c7dcdc8ecdd14d8e11ce3835839ece97573462115b89a16db13f19730\",\""
		"previousversion\":\"7391\"}],\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.636323b8d33b72591551a4c30b8b79148ab0f0c2b6f8fbe4fd2bf9c1b3669f1a\"}]},\"version\":\"7392\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.675\"},\""
		"prodversion\":\"102.0.5005.63\",\"protocol\":\"3.1\",\"requestid\":\"{6b54bbd5-c60a-48bb-b3df-3a23b8e6ffc0}\",\"sessionid\":\"{49aa025e-29ba-4d4c-84de-8c9cce16e8b4}\",\"updaterversion\":\"102.0.5005.63\"}}", 
		LAST);

	return 0;
}