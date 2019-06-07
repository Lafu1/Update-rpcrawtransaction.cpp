					
						CTxDestination address;
             if (ExtractDestination(pk, address))
             {
-                const CScriptID& hash = boost::get<const CScriptID&>(address);
+                const CScriptID& hash = boost::get<CScriptID>(address);
                 CScript redeemScript;
                 if (pwalletMain->GetCScript(hash, redeemScript))
entry.push_back(Pair("redeemScript", HexStr(redeemScript.begin(), redeemScript.end())));
