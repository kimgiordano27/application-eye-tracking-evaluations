/*
FUNCTION_NAME: FUN_068af1b4
ENTRY_POINT: 068af1b4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_14
*/


void FUN_068af1b4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = OVRPlugin_OVRP_1_57_0_TypeInfo;
  if ((DAT_0755910b & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_58_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_59_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_5_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_60_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_61_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_62_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_57_0_TypeInfo);
    DAT_0755910b = 1;
  }
  FUN_068b3eb0(param_1);
  UnityEngine_Texture2D__GetPixels_Injected(param_1);
  lVar2 = *(long *)puVar1;
  lVar4 = *(long *)(param_1 + 0x160);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar3[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *puVar3;
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo);
    FUN_05110878(lVar5,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar5;
  }
  if (lVar4 != 0) {
    FUN_042e5444(lVar4,lVar5,*(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo);
    lVar2 = *(long *)puVar1;
    lVar4 = *(long *)(param_1 + 0x168);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar2 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar2 + 0xb8);
    lVar5 = puVar3[2];
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar6 = *puVar3;
      lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo);
      FUN_05110878(lVar5,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_62_0_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar5;
    }
    if (lVar4 != 0) {
      FUN_042e5444(lVar4,lVar5,*(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo);
      FUN_068af394(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


