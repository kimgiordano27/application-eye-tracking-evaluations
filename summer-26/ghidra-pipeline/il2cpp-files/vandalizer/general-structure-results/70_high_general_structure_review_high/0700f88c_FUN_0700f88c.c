/*
FUNCTION_NAME: FUN_0700f88c
ENTRY_POINT: 0700f88c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_18
*/


void FUN_0700f88c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  
  puVar2 = Fusion_Photon_Realtime_WebFlags_TypeInfo;
  puVar1 = System_Net_WebExceptionStatus_TypeInfo;
  if ((bRam0000000007a5a1ad & 1) == 0) {
    FUN_031f20f4(System_Net_WebExceptionStatus_TypeInfo);
    FUN_031f20f4(Photon_Realtime_WebFlags_TypeInfo);
    FUN_031f20f4(System_Net_WebHeaderCollection_TypeInfo);
    FUN_031f20f4(System_Net_WebOperation_TypeInfo);
    FUN_031f20f4(System_Net_WebProxy_TypeInfo);
    FUN_031f20f4(Photon_Voice_WebRTCAudioProcessor_TypeInfo);
    FUN_031f20f4(System_Net_WebReadStream_TypeInfo);
    FUN_031f20f4(System_Net_WebRequest_TypeInfo);
    FUN_031f20f4(Unity_Services_Authentication_PlayerAccounts_WebRequest_TypeInfo);
    FUN_031f20f4(Unity_Services_Authentication_PlayerAccounts_WebRequestException_TypeInfo);
    FUN_031f20f4(System_Net_WebRequestPrefixElement_TypeInfo);
    FUN_031f20f4(UnityEngine_ResourceManagement_WebRequestQueue_TypeInfo);
    FUN_031f20f4(UnityEngine_ResourceManagement_WebRequestQueueOperation_TypeInfo);
    FUN_031f20f4(System_Net_WebRequestStream_TypeInfo);
    FUN_031f20f4(UnityEngineInternal_WebRequestUtils_TypeInfo);
    FUN_031f20f4(Unity_Services_Authentication_PlayerAccounts_WebRequestVerb_TypeInfo);
    FUN_031f20f4(System_Net_WebResponse_TypeInfo);
    FUN_031f20f4(System_Net_WebResponseStream_TypeInfo);
    FUN_031f20f4(Fusion_Photon_Realtime_WebRpcCallbacksContainer_TypeInfo);
    FUN_031f20f4(Photon_Realtime_WebRpcCallbacksContainer_TypeInfo);
    FUN_031f20f4(Photon_Voice_Unity_WebRtcAudioDsp_TypeInfo);
    FUN_031f20f4(System_Net_WebSockets_WebSocketCloseStatus_TypeInfo);
    FUN_031f20f4(System_Net_WebSockets_WebSocketError_TypeInfo);
    FUN_031f20f4(System_Net_WebSockets_WebSocketException_TypeInfo);
    FUN_031f20f4(System_Net_WebSockets_WebSocketHandle_TypeInfo);
    FUN_031f20f4(Best_HTTP_Hosts_Connections_HTTP2_WebSocketOverHTTP2Settings_TypeInfo);
    FUN_031f20f4(System_Net_WebSockets_WebSocketReceiveResult_TypeInfo);
    FUN_031f20f4(System_Net_WebSockets_WebSocketState_TypeInfo);
    FUN_031f20f4(System_Net_WebUtility_TypeInfo);
    FUN_031f20f4(System_Runtime_Remoting_WellKnownClientTypeEntry_TypeInfo);
    FUN_031f20f4(System_Runtime_Remoting_WellKnownServiceTypeEntry_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_WheelEvent_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Digests_WhirlpoolDigest_TypeInfo);
    FUN_031f20f4(UnityEngine_TextCore_WhiteSpace_TypeInfo);
    FUN_031f20f4(System_ComponentModel_Win32Exception_TypeInfo);
    FUN_031f20f4(System_Security_Principal_WindowsAccountType_TypeInfo);
    FUN_031f20f4(System_WindowsConsoleDriver_TypeInfo);
    FUN_031f20f4(System_Security_Principal_WindowsIdentity_TypeInfo);
    FUN_031f20f4(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
    FUN_031f20f4(Oculus_Platform_WindowsPlatform_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_WorldSpaceData_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_WorldSpaceDataStore_TypeInfo);
    FUN_031f20f4(ExitGames_Client_Photon_StructWrapping_WrappedType_TypeInfo);
    FUN_031f20f4(Best_HTTP_JSON_LitJson_WrapperFactory_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_WrapperProvider_TypeInfo
                );
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Security_WrapperUtilities_TypeInfo);
    FUN_031f20f4(System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_TypeInfo);
    FUN_031f20f4(Best_HTTP_Shared_Streams_WriteOnlyBufferedStream_TypeInfo);
    FUN_031f20f4(Best_HTTP_Shared_PlatformSupport_Network_Tcp_WriteState_TypeInfo);
    FUN_031f20f4(System_Xml_WriteState_TypeInfo);
    FUN_031f20f4(Best_HTTP_JSON_LitJson_WriterContext_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Agreement_X25519Agreement_TypeInfo
                );
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Rfc7748_X25519Field_TypeInfo);
    FUN_031f20f4(Fusion_Photon_Realtime_WebFlags_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Generators_X25519KeyPairGenerator_TypeInfo
                );
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_X25519PrivateKeyParameters_TypeInfo
                );
    bRam0000000007a5a1ad = 1;
  }
  plVar3 = (long *)FUN_031f21dc(*(undefined8 *)puVar1,0x37);
  lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_07009ac4();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_07010cd4:
    uVar6 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar6,0);
  }
  puVar1 = 
  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_X25519PrivateKeyParameters_TypeInfo;
  puVar9 = (uint *)(plVar3 + 3);
  if (*puVar9 != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_0329bf60(plVar3 + 4,lVar4);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_07009f04();
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_07010cd4;
    puVar1 = 
    Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Generators_X25519KeyPairGenerator_TypeInfo;
    if (1 < *puVar9) {
      plVar3[5] = lVar4;
      thunk_FUN_0329bf60(plVar3 + 5,lVar4);
      lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
      FUN_07009cd0();
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_07010cd4;
      puVar1 = Photon_Realtime_WebFlags_TypeInfo;
      if (2 < *puVar9) {
        plVar3[6] = lVar4;
        thunk_FUN_0329bf60(plVar3 + 6,lVar4);
        lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
        FUN_0700a140();
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_07010cd4;
        puVar1 = System_Net_WebRequestPrefixElement_TypeInfo;
        if (3 < *puVar9) {
          plVar3[7] = lVar4;
          thunk_FUN_0329bf60(plVar3 + 7,lVar4);
          lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
          FUN_07086fa0(lVar4,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_07010cd4;
          puVar1 = ExitGames_Client_Photon_StructWrapping_WrappedType_TypeInfo;
          if (4 < *puVar9) {
            plVar3[8] = lVar4;
            thunk_FUN_0329bf60(plVar3 + 8,lVar4);
            lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
            FUN_070c7afc(lVar4,0);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_07010cd4;
            puVar1 = Oculus_Platform_WindowsPlatform_TypeInfo;
            if (5 < *puVar9) {
              plVar3[9] = lVar4;
              thunk_FUN_0329bf60(plVar3 + 9,lVar4);
              lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
              FUN_06fd0528(lVar4,0);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_07010cd4;
              puVar1 = 
              Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Rfc7748_X25519Field_TypeInfo;
              if (6 < *puVar9) {
                plVar3[10] = lVar4;
                thunk_FUN_0329bf60(plVar3 + 10,lVar4);
                lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                FUN_071030a8(lVar4,0);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_07010cd4;
                puVar1 = UnityEngine_UIElements_WheelEvent_TypeInfo;
                if (7 < *puVar9) {
                  plVar3[0xb] = lVar4;
                  thunk_FUN_0329bf60(plVar3 + 0xb,lVar4);
                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                  FUN_070982e0(lVar4,0);
                  if ((lVar4 != 0) &&
                     (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)
                     ) goto LAB_07010cd4;
                  puVar1 = System_Net_WebResponse_TypeInfo;
                  if (8 < *puVar9) {
                    plVar3[0xc] = lVar4;
                    thunk_FUN_0329bf60(plVar3 + 0xc,lVar4);
                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                    FUN_0709d654(lVar4,0);
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar5 == 0)) goto LAB_07010cd4;
                    puVar1 = System_Xml_WriteState_TypeInfo;
                    if (9 < *puVar9) {
                      plVar3[0xd] = lVar4;
                      thunk_FUN_0329bf60(plVar3 + 0xd,lVar4);
                      lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                      FUN_070b4544(lVar4,0);
                      if ((lVar4 != 0) &&
                         (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar5 == 0)) goto LAB_07010cd4;
                      puVar1 = System_Runtime_Remoting_WellKnownServiceTypeEntry_TypeInfo;
                      if (10 < *puVar9) {
                        plVar3[0xe] = lVar4;
                        thunk_FUN_0329bf60(plVar3 + 0xe,lVar4);
                        lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                        FUN_070bb8e4(lVar4,0);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar5 == 0)) goto LAB_07010cd4;
                        puVar1 = System_Net_WebSockets_WebSocketState_TypeInfo;
                        if (0xb < *puVar9) {
                          plVar3[0xf] = lVar4;
                          thunk_FUN_0329bf60(plVar3 + 0xf,lVar4);
                          lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                          FUN_070bcfbc(lVar4,0);
                          if ((lVar4 != 0) &&
                             (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                             lVar5 == 0)) goto LAB_07010cd4;
                          puVar1 = System_Security_Principal_WindowsAccountType_TypeInfo;
                          if (0xc < *puVar9) {
                            plVar3[0x10] = lVar4;
                            thunk_FUN_0329bf60(plVar3 + 0x10,lVar4);
                            lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                            FUN_070bde60(lVar4,0);
                            if ((lVar4 != 0) &&
                               (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                               lVar5 == 0)) goto LAB_07010cd4;
                            puVar1 = System_Net_WebSockets_WebSocketException_TypeInfo;
                            if (0xd < *puVar9) {
                              plVar3[0x11] = lVar4;
                              thunk_FUN_0329bf60(plVar3 + 0x11,lVar4);
                              lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                              FUN_070bf2f4(lVar4,0);
                              if ((lVar4 != 0) &&
                                 (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                                 lVar5 == 0)) goto LAB_07010cd4;
                              puVar1 = 
                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Security_WrapperUtilities_TypeInfo
                              ;
                              if (0xe < *puVar9) {
                                plVar3[0x12] = lVar4;
                                thunk_FUN_0329bf60(plVar3 + 0x12,lVar4);
                                lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                                FUN_070a1c68(lVar4,0);
                                if ((lVar4 != 0) &&
                                   (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)(*plVar3 + 0x40)
                                                              ), lVar5 == 0)) goto LAB_07010cd4;
                                puVar1 = Photon_Voice_WebRTCAudioProcessor_TypeInfo;
                                if (0xf < *puVar9) {
                                  plVar3[0x13] = lVar4;
                                  thunk_FUN_0329bf60(plVar3 + 0x13,lVar4);
                                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                                  FUN_07094b7c(lVar4,0);
                                  if ((lVar4 != 0) &&
                                     (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)
                                                                        (*plVar3 + 0x40)),
                                     lVar5 == 0)) goto LAB_07010cd4;
                                  puVar1 = UnityEngine_ResourceManagement_WebRequestQueue_TypeInfo;
                                  if (0x10 < *puVar9) {
                                    plVar3[0x14] = lVar4;
                                    thunk_FUN_0329bf60(plVar3 + 0x14,lVar4);
                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                                    FUN_070b2930(lVar4,0);
                                    if ((lVar4 != 0) &&
                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)
                                                                          (*plVar3 + 0x40)),
                                       lVar5 == 0)) goto LAB_07010cd4;
                                    puVar1 = UnityEngine_TextCore_WhiteSpace_TypeInfo;
                                    if (0x11 < *puVar9) {
                                      plVar3[0x15] = lVar4;
                                      thunk_FUN_0329bf60(plVar3 + 0x15,lVar4);
                                      lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                                      FUN_070b3d9c(lVar4,0);
                                      if ((lVar4 != 0) &&
                                         (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)
                                                                            (*plVar3 + 0x40)),
                                         lVar5 == 0)) goto LAB_07010cd4;
                                      puVar1 = UnityEngineInternal_WebRequestUtils_TypeInfo;
                                      if (0x12 < *puVar9) {
                                        plVar3[0x16] = lVar4;
                                        thunk_FUN_0329bf60(plVar3 + 0x16,lVar4);
                                        lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                                        FUN_070c58ec(lVar4,0);
                                        if ((lVar4 != 0) &&
                                           (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)
                                                                              (*plVar3 + 0x40)),
                                           lVar5 == 0)) goto LAB_07010cd4;
                                        puVar1 = System_Net_WebRequest_TypeInfo;
                                        if (0x13 < *puVar9) {
                                          plVar3[0x17] = lVar4;
                                          thunk_FUN_0329bf60(plVar3 + 0x17,lVar4);
                                          lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                                          FUN_0709a844(lVar4,0);
                                          if ((lVar4 != 0) &&
                                             (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)
                                                                                (*plVar3 + 0x40)),
                                             lVar5 == 0)) goto LAB_07010cd4;
                                          puVar1 = System_Net_WebSockets_WebSocketHandle_TypeInfo;
                                          if (0x14 < *puVar9) {
                                            plVar3[0x18] = lVar4;
                                            thunk_FUN_0329bf60(plVar3 + 0x18,lVar4);
                                            lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                                            FUN_06fedab8(lVar4,0);
                                            if ((lVar4 != 0) &&
                                               (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)
                                                                                  (*plVar3 + 0x40)),
                                               lVar5 == 0)) goto LAB_07010cd4;
                                            puVar1 = 
                                            System_Security_Principal_WindowsImpersonationContext_TypeInfo
                                            ;
                                            if (0x15 < *puVar9) {
                                              plVar3[0x19] = lVar4;
                                              thunk_FUN_0329bf60(plVar3 + 0x19,lVar4);
                                              lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                                              FUN_0708625c(lVar4,0);
                                              if ((lVar4 != 0) &&
                                                 (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)
                                                                                    (*plVar3 + 0x40)
                                                                            ), lVar5 == 0))
                                              goto LAB_07010cd4;
                                              puVar1 = System_Net_WebOperation_TypeInfo;
                                              if (0x16 < *puVar9) {
                                                plVar3[0x1a] = lVar4;
                                                thunk_FUN_0329bf60(plVar3 + 0x1a,lVar4);
                                                lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                                                FUN_0708ee34(lVar4,0);
                                                if ((lVar4 != 0) &&
                                                   (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8 *)
                                                                                      (*plVar3 +
                                                                                      0x40)),
                                                   lVar5 == 0)) goto LAB_07010cd4;
                                                puVar1 = 
                                                Unity_Services_Authentication_PlayerAccounts_WebRequestVerb_TypeInfo
                                                ;
                                                if (0x17 < *puVar9) {
                                                  plVar3[0x1b] = lVar4;
                                                  thunk_FUN_0329bf60(plVar3 + 0x1b,lVar4);
                                                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                                                  FUN_0708d0cc(lVar4,0);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_0322f04c(lVar4,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40)), lVar5 == 0)) goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_WrapperProvider_TypeInfo
                                                  ;
                                                  if (0x18 < *puVar9) {
                                                    plVar3[0x1c] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x1c,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_07095fe0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  System_Net_WebSockets_WebSocketError_TypeInfo;
                                                  if (0x19 < *puVar9) {
                                                    plVar3[0x1d] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x1d,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070b0cf4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Best_HTTP_Shared_PlatformSupport_Network_Tcp_WriteState_TypeInfo
                                                  ;
                                                  if (0x1a < *puVar9) {
                                                    plVar3[0x1e] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x1e,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070b1fc8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Best_HTTP_Hosts_Connections_HTTP2_WebSocketOverHTTP2Settings_TypeInfo
                                                  ;
                                                  if (0x1b < *puVar9) {
                                                    plVar3[0x1f] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x1f,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0709dee4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = System_Net_WebHeaderCollection_TypeInfo;
                                                  if (0x1c < *puVar9) {
                                                    plVar3[0x20] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x20,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070cc2ec(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = System_Net_WebReadStream_TypeInfo;
                                                  if (0x1d < *puVar9) {
                                                    plVar3[0x21] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x21,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070c88b4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  System_Net_WebSockets_WebSocketReceiveResult_TypeInfo
                                                  ;
                                                  if (0x1e < *puVar9) {
                                                    plVar3[0x22] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x22,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_07090dc0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Best_HTTP_Shared_Streams_WriteOnlyBufferedStream_TypeInfo
                                                  ;
                                                  if (0x1f < *puVar9) {
                                                    plVar3[0x23] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x23,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070ae738(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Fusion_Photon_Realtime_WebRpcCallbacksContainer_TypeInfo
                                                  ;
                                                  if (0x20 < *puVar9) {
                                                    plVar3[0x24] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x24,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070af5c0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Unity_Services_Authentication_PlayerAccounts_WebRequestException_TypeInfo
                                                  ;
                                                  if (0x21 < *puVar9) {
                                                    plVar3[0x25] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x25,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_06f80110(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  UnityEngine_UIElements_WorldSpaceDataStore_TypeInfo
                                                  ;
                                                  if (0x22 < *puVar9) {
                                                    plVar3[0x26] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x26,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_07000a68();
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Unity_Services_Authentication_PlayerAccounts_WebRequest_TypeInfo
                                                  ;
                                                  if (0x23 < *puVar9) {
                                                    plVar3[0x27] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x27,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070873fc(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  System_Security_Principal_WindowsIdentity_TypeInfo
                                                  ;
                                                  if (0x24 < *puVar9) {
                                                    plVar3[0x28] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x28,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0708f808(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = System_Net_WebProxy_TypeInfo;
                                                  if (0x25 < *puVar9) {
                                                    plVar3[0x29] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x29,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0708cc58(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  System_Runtime_Remoting_WellKnownClientTypeEntry_TypeInfo
                                                  ;
                                                  if (0x26 < *puVar9) {
                                                    plVar3[0x2a] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x2a,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070956f4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  UnityEngine_ResourceManagement_WebRequestQueueOperation_TypeInfo
                                                  ;
                                                  if (0x27 < *puVar9) {
                                                    plVar3[0x2b] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x2b,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0709d124(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = System_Net_WebResponseStream_TypeInfo;
                                                  if (0x28 < *puVar9) {
                                                    plVar3[0x2c] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x2c,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0709e6d0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  UnityEngine_UIElements_WorldSpaceData_TypeInfo;
                                                  if (0x29 < *puVar9) {
                                                    plVar3[0x2d] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x2d,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070ce6e0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = System_Net_WebUtility_TypeInfo;
                                                  if (0x2a < *puVar9) {
                                                    plVar3[0x2e] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x2e,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070cf140(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  System_Net_WebSockets_WebSocketCloseStatus_TypeInfo
                                                  ;
                                                  if (0x2b < *puVar9) {
                                                    plVar3[0x2f] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x2f,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_07087da0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_TypeInfo
                                                  ;
                                                  if (0x2c < *puVar9) {
                                                    plVar3[0x30] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x30,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_07089694(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Photon_Realtime_WebRpcCallbacksContainer_TypeInfo;
                                                  if (0x2d < *puVar9) {
                                                    plVar3[0x31] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x31,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_07088bac(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Agreement_X25519Agreement_TypeInfo
                                                  ;
                                                  if (0x2e < *puVar9) {
                                                    plVar3[0x32] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x32,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0708a074(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Digests_WhirlpoolDigest_TypeInfo
                                                  ;
                                                  if (0x2f < *puVar9) {
                                                    plVar3[0x33] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x33,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0708adac(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  System_ComponentModel_Win32Exception_TypeInfo;
                                                  if (0x30 < *puVar9) {
                                                    plVar3[0x34] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x34,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0708b898(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Best_HTTP_JSON_LitJson_WrapperFactory_TypeInfo;
                                                  if (0x31 < *puVar9) {
                                                    plVar3[0x35] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x35,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0708c274(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Photon_Voice_Unity_WebRtcAudioDsp_TypeInfo;
                                                  if (0x32 < *puVar9) {
                                                    plVar3[0x36] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x36,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_07084cd4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = System_Net_WebRequestStream_TypeInfo;
                                                  if (0x33 < *puVar9) {
                                                    plVar3[0x37] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x37,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_07085bb8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = System_WindowsConsoleDriver_TypeInfo;
                                                  if (0x34 < *puVar9) {
                                                    plVar3[0x38] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x38,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070c14fc(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  puVar1 = 
                                                  Best_HTTP_JSON_LitJson_WriterContext_TypeInfo;
                                                  if (0x35 < *puVar9) {
                                                    plVar3[0x39] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x39,lVar4);
                                                    lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_070c50a0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_0322f04c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_07010cd4;
                                                  if (0x36 < *puVar9) {
                                                    plVar3[0x3a] = lVar4;
                                                    thunk_FUN_0329bf60(plVar3 + 0x3a,lVar4);
                                                    if (0 < (int)plVar3[3]) {
                                                      uVar8 = 0;
                                                      uVar7 = plVar3[3] & 0xffffffff;
                                                      do {
                                                        if (uVar7 <= uVar8) goto LAB_07010cd0;
                                                        FUN_07010fa8(plVar3[uVar8 + 4]);
                                                        uVar7 = (ulong)*puVar9;
                                                        uVar8 = uVar8 + 1;
                                                      } while ((long)uVar8 < (long)(int)*puVar9);
                                                    }
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_07010cd0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


