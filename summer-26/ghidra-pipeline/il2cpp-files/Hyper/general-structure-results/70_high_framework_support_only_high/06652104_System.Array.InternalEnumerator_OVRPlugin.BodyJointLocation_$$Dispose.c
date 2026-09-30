/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$Dispose
ENTRY_POINT: 06652104
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  int *unaff_x20;
  int unaff_w23;
  
  while( true ) {
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    uVar1 = FUN_06651f38();
    if ((uVar1 & 1) == 0) {
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      FUN_066512b0();
    }
    unaff_w23 = unaff_w23 + 1;
    if (*unaff_x20 <= unaff_w23) break;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    FUN_06650e00();
    param_1 = *(long *)(unaff_x19 + 0x20);
  }
  return;
}


