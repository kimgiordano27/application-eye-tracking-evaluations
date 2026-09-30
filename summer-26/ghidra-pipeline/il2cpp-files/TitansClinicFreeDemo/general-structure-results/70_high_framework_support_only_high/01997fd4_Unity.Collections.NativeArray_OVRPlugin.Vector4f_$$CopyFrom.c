/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 01997fd4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom
               (void *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint in_w9;
  long unaff_x21;
  
  if (in_w9 <= param_3) {
    FUN_01f88350(0);
  }
  lVar1 = *(long *)(unaff_x21 + 0x10);
  if (lVar1 != 0) {
    if (param_3 < *(uint *)(lVar1 + 0x18)) {
      memcpy(param_1,(void *)(lVar1 + (long)(int)param_3 * 0x6c + 0x20),0x6c);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


