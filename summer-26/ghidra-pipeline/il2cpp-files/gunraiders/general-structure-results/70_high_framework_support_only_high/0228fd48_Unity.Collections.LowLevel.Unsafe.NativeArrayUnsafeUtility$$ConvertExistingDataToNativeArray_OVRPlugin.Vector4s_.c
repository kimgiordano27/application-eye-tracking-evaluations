/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4s>
ENTRY_POINT: 0228fd48
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4s>
               (long param_1)

{
  undefined8 uVar1;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x23;
  
  if (param_1 == 0) {
    uVar1 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar1,0);
  }
  if (unaff_w19 < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x23 + (long)(int)unaff_w19 * 8 + 0x20) = unaff_x20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


