/*
FUNCTION_NAME: UnityEngine.Renderer$$get_isPartOfStaticBatch_Injected
ENTRY_POINT: 068a1590
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Renderer__get_isPartOfStaticBatch_Injected(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_03188a78(OVRManager_SystemHeadsetType_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x99) = 1;
  puVar2 = OVRManager_SystemHeadsetType_TypeInfo;
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x1c0) != 0)) {
    lVar3 = FUN_050718a8(*(long *)(unaff_x20 + 0x1c0),
                         *(undefined8 *)OVRManager_EventListener_TypeInfo);
    puVar1 = (undefined8 *)(unaff_x19 + 0x90);
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + 0x1c0);
    }
    FUN_0507197c(*puVar1,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


