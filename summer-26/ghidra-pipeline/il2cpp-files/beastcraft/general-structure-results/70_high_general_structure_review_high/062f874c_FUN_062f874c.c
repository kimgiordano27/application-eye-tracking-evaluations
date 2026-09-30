/*
FUNCTION_NAME: FUN_062f874c
ENTRY_POINT: 062f874c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;ray_or_cast_sink_hits_8;telemetry_or_network_hits_1
*/


void FUN_062f874c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_DAT_06a6c8a0;
                    /* try { // try from 062f8750 to 063f875b has its CatchHandler @ 062f8890 */
  if ((DAT_06e9b255 & 1) == 0) {
                    /* try { // try from 062f877c to 063f879b has its CatchHandler @ 062f8898 */
    FUN_02e3ca1c(PTR_DAT_06a6e468);
    FUN_02e3ca1c(PTR_DAT_06a6c8a0);
    FUN_02e3ca1c(Photon_Realtime_PhotonPortDefinition_TypeInfo);
    FUN_02e3ca1c(ExitGames_Client_Photon_PhotonSocketState_TypeInfo);
    FUN_02e3ca1c(Photon_Voice_PhotonTransportProtocol_TypeInfo);
    FUN_02e3ca1c(Photon_Voice_Unity_PhotonVoiceCreatedParams_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Physics_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Physics2D_TypeInfo);
    FUN_02e3ca1c(UnityEngine_PhysicsScene_TypeInfo);
    FUN_02e3ca1c(UnityEngine_PhysicsScene2D_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_PickingMode_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Models_Pid_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Models_PidList_TypeInfo);
    FUN_02e3ca1c(Fusion_Photon_Realtime_PingHttp_TypeInfo);
    FUN_02e3ca1c(Fusion_Photon_Realtime_PingMono_TypeInfo);
    FUN_02e3ca1c(Photon_Realtime_PingMono_TypeInfo);
    FUN_02e3ca1c(System_IO_PinnedBufferMemoryStream_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Encodings_Pkcs1Encoding_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Pkcs_PkcsObjectIdentifiers_TypeInfo)
    ;
    FUN_02e3ca1c(Game_Views_Quests_PlaceBlockQuestData_TypeInfo);
    FUN_02e3ca1c(Game_Core_Data_Stats_PlaceBlockStats_TypeInfo);
    FUN_02e3ca1c(System_Numerics_Plane_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Plane_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Utilities_Platform_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_Universal_PlatformAutoDetect_TypeInfo);
    FUN_02e3ca1c(System_Reactive_PlatformServices_PlatformEnlightenmentProvider_TypeInfo);
    FUN_02e3ca1c(System_Runtime_InteropServices_OptionalAttribute_TypeInfo);
    DAT_06e9b255 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  puVar4 = System_Runtime_InteropServices_OptionalAttribute_TypeInfo;
  puVar1 = PTR_DAT_06a2f000;
  lVar8 = *(long *)(PTR_DAT_06a2f000 + 0x18);
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x30) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_06a6e468;
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x32];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
    FUN_04807d44(lVar10,uVar11,*(undefined8 *)Fusion_Photon_Realtime_PingMono_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 400) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 400,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x33];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_UIElements_PickingMode_TypeInfo);
    FUN_048078ac(lVar10,uVar11,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Encodings_Pkcs1Encoding_TypeInfo,
                 0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x198) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x198,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x34];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_PhysicsScene2D_TypeInfo);
    FUN_048077e8(lVar10,uVar11,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Pkcs_PkcsObjectIdentifiers_TypeInfo
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1a0) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x1a0,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x35];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_PhysicsScene_TypeInfo);
    FUN_04807a34(lVar10,uVar11,*(undefined8 *)Game_Views_Quests_PlaceBlockQuestData_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1a8) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x1a8,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x36];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_Photon_Realtime_PingHttp_TypeInfo);
    FUN_04807af8(lVar10,uVar11,*(undefined8 *)Game_Core_Data_Stats_PlaceBlockStats_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1b0) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x1b0,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x37];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)Photon_Voice_PhotonTransportProtocol_TypeInfo);
    Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask<LevelService_<GetSliceMapUploadUrl>d__13,_object>__get_Task
              (lVar10,uVar11,*(undefined8 *)System_Numerics_Plane_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1b8) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x1b8,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x38];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)Photon_Voice_Unity_PhotonVoiceCreatedParams_TypeInfo)
    ;
    FUN_04807ecc(lVar10,uVar11,*(undefined8 *)UnityEngine_Plane_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1c0) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x1c0,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x39];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)Oculus_Platform_Models_Pid_TypeInfo);
    FUN_04807f90(lVar10,uVar11,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Utilities_Platform_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1c8) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x1c8,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x3a];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)Photon_Realtime_PhotonPortDefinition_TypeInfo);
    FUN_04808054(lVar10,uVar11,
                 *(undefined8 *)UnityEngine_Rendering_Universal_PlatformAutoDetect_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1d0) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x1d0,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x78) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x3b];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_Physics_TypeInfo);
    FUN_04807e08(lVar10,uVar11,
                 *(undefined8 *)
                  System_Reactive_PlatformServices_PlatformEnlightenmentProvider_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1d8) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x1d8,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x3c];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)Oculus_Platform_Models_PidList_TypeInfo);
    FUN_04807970(lVar10,uVar11,*(undefined8 *)Photon_Realtime_PingMono_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1e0) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x1e0,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = *(long *)(puVar1 + 0x18);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar5 = FUN_05614e08(lVar8 + 0x20,0);
  uVar6 = FUN_05614e08(*(long *)(puVar1 + 0x10) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x3d];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)ExitGames_Client_Photon_PhotonSocketState_TypeInfo);
    FUN_04807c80(lVar10,uVar11,*(undefined8 *)System_IO_PinnedBufferMemoryStream_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1e8) = lVar10;
    thunk_FUN_02ee2be8(lVar8 + 0x1e8,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062f4be8(uVar9,uVar5,uVar6,lVar10);
  return;
}


