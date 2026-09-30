/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 05cd1058
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


/* WARNING: Removing unreachable block (ram,0x05cd10a4) */

bool Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  FUN_071e78b0(param_1,param_2,0);
  if (*(long *)(unaff_x20 + 0x120) != 0) {
    iVar1 = *(int *)(*(long *)(unaff_x20 + 0x120) + 0x20);
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_03d180a8();
    }
    return iVar1 < 0x31;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


