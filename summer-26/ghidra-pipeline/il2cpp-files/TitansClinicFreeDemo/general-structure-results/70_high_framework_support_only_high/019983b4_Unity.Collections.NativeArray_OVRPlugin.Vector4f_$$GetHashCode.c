/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetHashCode
ENTRY_POINT: 019983b4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetHashCode(void)

{
  void *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x20 + 0x18) = unaff_w21;
  memcpy(&stack0x00000070,unaff_x19,0x6c);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  memcpy(&stack0x00000000,&stack0x00000070,0x6c);
  if ((uint)unaff_x22 < *(uint *)(lVar1 + 0x18)) {
    memcpy((void *)(lVar1 + unaff_x22 * 0x6c + 0x20),&stack0x00000000,0x6c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


