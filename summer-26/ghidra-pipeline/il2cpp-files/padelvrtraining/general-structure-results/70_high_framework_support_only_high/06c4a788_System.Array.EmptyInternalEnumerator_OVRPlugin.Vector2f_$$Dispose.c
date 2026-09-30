/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 06c4a788
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x95d) = in_w8;
  plVar3 = (long *)(unaff_x19 + 0x48);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a5d60);
    FUN_071bc31c(uVar2,0);
    FUN_03d703d8(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


