/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector3f>
ENTRY_POINT: 0228fd30
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


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector3f>
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long *unaff_x23;
  
  if ((param_1 != 0) &&
     (lVar1 = thunk_FUN_01c495e4(param_1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar1 == 0)) {
    uVar2 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,0);
  }
  if (unaff_w19 < *(uint *)(unaff_x23 + 3)) {
    unaff_x23[(long)(int)unaff_w19 + 4] = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


