Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");	
	
	web_reg_find("Text=Liquid Logic","SaveCount=HomePage_count","Search=Body",LAST);
	
	lr_start_transaction("LL_Browse_100_WebHomePage");		

	web_url("www.liquidlogic.co.uk", 
		"URL={p_url}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		/*"Url=https://fast.fonts.net/t/1.css?apiType=css&projectid=5e886207-8b7b-4a3d-be80-9ae331ce15bb", "Referer=https://www.liquidlogic.co.uk/", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/fonts/efbaf613-e78b-4aed-bef6-b79bd8bedcdb.woff2", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/fonts/34fe82a2-19d9-4b63-8c8a-7860040b01fd.woff2", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTAyLjAuNTAwNS42MxopCAUQARobCg0IBRAGGAEiAzAwMTABEOH0DRoCGAOi044DIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCs5AoaAhgDk3jgciIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQn6wLGgIYAwP7hFAiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgDWbx0fSIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ0igaAhgDxwPXpSIEIAEgAigEGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ7nEaAhgD0I4oMCIEIAEgAigBGicIChAIGhkKDQgKEAgYASIDMDAxMAEQBxoCGAN3Vzc4IgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAgGgIYA0QGrjMiBCABIAIoARooCAgQARoaCg"
		"0ICBAGGAEiAzAwMTABEOMPGgIYAxEz0OIiBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABEJm-ARoCGAM2fMtGIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARD4uAoaAhgDy0nuTyIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQtrsGGgIYAwrAzLUiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEKoSGgIYAyI9cYQiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/fonts/0f51d8b8-bda2-4557-9b56-0a4e94ab63d9.woff", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://www.liquidlogic.co.uk/fonts/332136cf-33d0-43fb-97ee-49c7742489ff.woff", "Referer=https://www.liquidlogic.co.uk/css/default.css?v=1220", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", "Referer=https://www.liquidlogic.co.uk/", ENDITEM, */
		LAST);

	endTransaction(lr_eval_string("{HomePage_count}"),"LL_Browse_100_WebHomePage");
	
	lr_think_time(1);
	
	return 0;
}