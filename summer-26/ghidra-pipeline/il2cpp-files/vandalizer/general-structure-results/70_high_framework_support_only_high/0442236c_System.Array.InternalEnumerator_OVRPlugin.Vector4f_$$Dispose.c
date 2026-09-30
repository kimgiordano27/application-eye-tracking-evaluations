/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 0442236c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__Dispose(void)

{
  int in_w8;
  undefined8 *unaff_x19;
  int *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  *unaff_x20 = in_w8;
  if (0 < in_w8) {
    uStack0000000000000008 = unaff_x19[1];
    uStack0000000000000000 = *unaff_x19;
    uStack0000000000000018 = unaff_x19[3];
    uStack0000000000000010 = unaff_x19[2];
    *(undefined8 *)(unaff_x20 + 4) = uStack0000000000000010;
    *(undefined8 *)(unaff_x20 + 2) = uStack0000000000000008;
    thunk_FUN_0329bf60(unaff_x20 + 2,0);
    if (1 < *unaff_x20) {
      FUN_05e255b0(unaff_x19[3],*unaff_x21,*unaff_x20 + -1,0);
      return;
    }
  }
  return;
}


