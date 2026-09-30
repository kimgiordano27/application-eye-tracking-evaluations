/*
FUNCTION_NAME: FUN_061a13b4
ENTRY_POINT: 061a13b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_11;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_061a13b4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_06a83d62 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_87_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_88_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_89_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_90_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_06a83d62 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (param_2 != 0) {
    uVar4 = FUN_061782fc(param_2,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar5);
      lVar5 = *(long *)puVar1;
    }
    puVar3 = OVRPlugin_OVRP_1_88_0_TypeInfo;
    puVar2 = OVRPlugin_OVRP_1_87_0_TypeInfo;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar5);
        lVar5 = *(long *)puVar1;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)OVRPlugin_OVRP_1_89_0_TypeInfo);
      FUN_04a5632c(lVar6,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_90_0_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = lVar6;
    }
    uVar4 = UnityEngine_Rendering_RenderPipeline__IsRenderRequestSupported<__Il2CppFullySharedGenericType>
                      (uVar4,lVar6,*(undefined8 *)puVar3);
    FUN_033c0958(uVar4,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


