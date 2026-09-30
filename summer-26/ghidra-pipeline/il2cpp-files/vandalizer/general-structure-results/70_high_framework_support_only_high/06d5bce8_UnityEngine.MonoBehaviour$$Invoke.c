/*
FUNCTION_NAME: UnityEngine.MonoBehaviour$$Invoke
ENTRY_POINT: 06d5bce8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_MonoBehaviour__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = OVRPlugin_TrackingConfidence___TypeInfo;
  puVar2 = OVRPlugin_SpaceQueryResult___TypeInfo;
  puVar1 = OVRHaptics_OVRHapticsOutput___TypeInfo;
  if ((DAT_07a51087 & 1) == 0) {
    FUN_031f20f4(OVRHaptics_OVRHapticsOutput___TypeInfo);
    FUN_031f20f4(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_031f20f4(OVRPlugin_SpaceQueryResult___TypeInfo);
    DAT_07a51087 = 1;
  }
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_047aec0c(uVar4,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  thunk_FUN_0329bf60(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar4);
  return;
}


