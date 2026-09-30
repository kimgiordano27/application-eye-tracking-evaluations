/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$Dispose
ENTRY_POINT: 040243a8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose
               (long param_1,undefined8 param_2)

{
  long lVar1;
  int *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  
  FUN_03b11190(param_2,unaff_w22,*(undefined8 *)(param_1 + 0x60));
  lVar1 = *unaff_x21;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (*unaff_x19 - 1U < *(uint *)(lVar1 + 0x18)) {
    *(undefined8 *)(lVar1 + (long)(int)(*unaff_x19 - 1U) * 8 + 0x20) = unaff_x20;
    thunk_FUN_03048534();
    *unaff_x19 = *unaff_x19 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


