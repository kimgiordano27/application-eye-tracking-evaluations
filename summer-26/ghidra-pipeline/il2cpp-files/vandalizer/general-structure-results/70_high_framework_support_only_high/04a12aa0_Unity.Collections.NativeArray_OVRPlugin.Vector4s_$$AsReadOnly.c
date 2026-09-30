/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$AsReadOnly
ENTRY_POINT: 04a12aa0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__AsReadOnly(long param_1)

{
  long lVar1;
  byte in_w8;
  long unaff_x19;
  int unaff_w21;
  int unaff_w24;
  
  while( true ) {
    if ((in_w8 & 1) == 0) {
      param_1 = FUN_0322bef4();
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    FUN_04a12250();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    FUN_04a12b2c();
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w24 + unaff_w21 + 2 < 3) break;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4();
    }
    param_1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    in_w8 = *(byte *)(param_1 + 0x135);
  }
  return;
}


