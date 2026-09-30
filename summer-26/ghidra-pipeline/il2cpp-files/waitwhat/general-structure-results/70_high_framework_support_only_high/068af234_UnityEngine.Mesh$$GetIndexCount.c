/*
FUNCTION_NAME: UnityEngine.Mesh$$GetIndexCount
ENTRY_POINT: 068af234
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


void UnityEngine_Mesh__GetIndexCount(void)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x23;
  
  FUN_068b3eb0();
  UnityEngine_Texture2D__GetPixels_Injected();
  lVar1 = *unaff_x23;
  lVar3 = *(long *)(unaff_x19 + 0x160);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar1 = *unaff_x23;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0xb8);
  lVar4 = puVar2[1];
  if (lVar4 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar2 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar5 = *puVar2;
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo);
    FUN_05110878(lVar4,uVar5,*(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar4;
  }
  if (lVar3 != 0) {
    FUN_042e5444(lVar3,lVar4,*(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo);
    lVar1 = *unaff_x23;
    lVar3 = *(long *)(unaff_x19 + 0x168);
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar1 = *unaff_x23;
    }
    puVar2 = *(undefined8 **)(lVar1 + 0xb8);
    lVar4 = puVar2[2];
    if (lVar4 == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar2 = *(undefined8 **)(*unaff_x23 + 0xb8);
      }
      uVar5 = *puVar2;
      lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo);
      FUN_05110878(lVar4,uVar5,*(undefined8 *)OVRPlugin_OVRP_1_62_0_TypeInfo,0);
      *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = lVar4;
    }
    if (lVar3 != 0) {
      FUN_042e5444(lVar3,lVar4,*(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo);
      FUN_068af394();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


