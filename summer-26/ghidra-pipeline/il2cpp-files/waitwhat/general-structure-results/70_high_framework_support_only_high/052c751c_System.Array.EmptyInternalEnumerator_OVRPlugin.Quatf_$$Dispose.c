/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$Dispose
ENTRY_POINT: 052c751c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose(long param_1)

{
  long lVar1;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  lVar1 = *unaff_x21;
  if (lVar1 == 0) {
    FUN_05950954(0x32,0);
    lVar1 = *unaff_x21;
  }
  FUN_0595261c(lVar1,(int)unaff_x21[1]);
  return;
}


