/*
FUNCTION_NAME: FUN_0608a1b8
ENTRY_POINT: 0608a1b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_0608a1b8(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_48;
  
  if ((DAT_06dc4e66 & 1) == 0) {
    FUN_02d965b8(Method_System_Net_Configuration_DefaultProxySection_Reset__);
    FUN_02d965b8(Method_System_Net_Configuration_DefaultProxySection_get_Properties__);
    FUN_02d965b8(Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<Event>__);
    FUN_02d965b8(PTR_DAT_069ff9d8);
    FUN_02d965b8(PTR_DAT_069ffa48);
    FUN_02d965b8(PTR_DAT_069ffa50);
    FUN_02d965b8(Method_Newtonsoft_Json_Serialization_DefaultReferenceResolver_GetMappings__);
    FUN_02d965b8(PTR_DAT_06a0d268);
    FUN_02d965b8(PTR_DAT_06a0d270);
    FUN_02d965b8(Method_Unity_Netcode_DefaultSceneManagerHandler_PopulateLoadedScenes__);
    FUN_02d965b8(Method_Unity_Netcode_DefaultSceneManagerHandler_SceneManager_SceneUnloaded__);
    FUN_02d965b8(Method_Unity_Netcode_DefaultSceneManagerHandler_StartTrackingScene__);
    FUN_02d965b8(
                Method_Newtonsoft_Json_Serialization_DefaultSerializationBinder_GetTypeFromTypeNameKey__
                );
    FUN_02d965b8(Method_CsvHelper_TypeConversion_DefaultTypeConverter_ConvertFromString__);
    FUN_02d965b8(Method_System_Text_Decoder_Convert__);
    FUN_02d965b8(Method_System_Text_Decoder_Convert__);
    FUN_02d965b8(Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__);
    FUN_02d965b8(PTR_DAT_069ff1a0);
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff1b8);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_AssertSessionNotDeleted__);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelId__ctor__);
    FUN_02d965b8(PTR_DAT_069ff1f8);
    DAT_06dc4e66 = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<Event>__;
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar9 = *(long *)(param_1 + 10);
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ffa50);
    FUN_04e92874(lVar4,*(undefined8 *)PTR_DAT_069ffa48);
    uVar12 = *(undefined8 *)Method_CsvHelper_TypeConversion_DefaultTypeConverter_ConvertFromString__
    ;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar12 = FUN_054f73b4(uVar12,0);
    puVar1 = PTR_DAT_069ff9d8;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e935f0(lVar4,*(undefined8 *)PTR_DAT_069ff1f8,uVar12,*(undefined8 *)PTR_DAT_069ff9d8);
    puVar3 = Method_Unity_Netcode_DefaultSceneManagerHandler_PopulateLoadedScenes__;
    uVar12 = FUN_054f73b4(*(undefined8 *)
                           Method_Unity_Netcode_DefaultSceneManagerHandler_PopulateLoadedScenes__,0)
    ;
    FUN_04e935f0(lVar4,*(undefined8 *)PTR_DAT_069ff1a0,uVar12,*(undefined8 *)puVar1);
    uVar12 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)Method_Unity_Services_Vivox_ChannelId__ctor__,uVar12,
                 *(undefined8 *)puVar1);
    uVar12 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_AssertSessionNotDeleted__,uVar12,
                 *(undefined8 *)puVar1);
    uVar12 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)PTR_DAT_069ff1b8,uVar12,*(undefined8 *)puVar1);
    *(long *)(param_1 + 0xe) = lVar4;
    LeanTween__value(param_1 + 0xe,lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar12 = FUN_06089fb4(lVar9);
    lVar4 = FUN_0607ac68(uVar10,uVar12);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar11 = *(long **)(lVar9 + 0x10);
    uVar12 = FUN_05362cb4(*(undefined8 *)(lVar4 + 0x10),
                          *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x20),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar10 = FUN_0608760c(uVar12,*(undefined8 *)(lVar9 + 0x18),lVar4);
    uVar6 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar6 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(10);
    }
    lVar4 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar13 = *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Newtonsoft_Json_Serialization_DefaultReferenceResolver_GetMappings__) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0608a534;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_Newtonsoft_Json_Serialization_DefaultReferenceResolver_GetMappings__
                          ,0);
LAB_0608a534:
    lVar4 = (*(code *)*puVar5)(plVar11,uVar13,uVar12,0,uVar10,uVar6,puVar5[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_48 = FUN_0481d028(lVar4,*(undefined8 *)
                                   Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__
                           );
    uVar7 = FUN_047e6248(&local_48,*(undefined8 *)Method_System_Text_Decoder_Convert__);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_48;
      LeanTween__value(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031f3810(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)Method_System_Net_Configuration_DefaultProxySection_Reset__);
      return;
    }
  }
  uVar12 = FUN_047e6288(&local_48,*(undefined8 *)Method_System_Text_Decoder_Convert__);
  uVar10 = FUN_03804884(uVar12,*(undefined8 *)(param_1 + 0xe),
                        *(undefined8 *)
                         Method_Unity_Netcode_DefaultSceneManagerHandler_SceneManager_SceneUnloaded__
                       );
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_Newtonsoft_Json_Serialization_DefaultSerializationBinder_GetTypeFromTypeNameKey__
                             );
  FUN_04715878(uVar13,uVar12,uVar10,
               *(undefined8 *)Method_Unity_Netcode_DefaultSceneManagerHandler_StartTrackingScene__);
  puVar1 = Method_System_Net_Configuration_DefaultProxySection_get_Properties__;
  *param_1 = -2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  LeanTween__value(param_1 + 0xe,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(param_1 + 2,uVar13,*(undefined8 *)puVar1);
  return;
}


