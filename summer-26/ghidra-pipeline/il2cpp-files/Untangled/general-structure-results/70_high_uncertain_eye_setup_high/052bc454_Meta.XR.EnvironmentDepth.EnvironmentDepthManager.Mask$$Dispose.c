/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager.Mask$$Dispose
ENTRY_POINT: 052bc454
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose(void)

{
  ulong uVar1;
  long *unaff_x19;
  long in_stack_00000008;
  
  uVar1 = FUN_037f26f8();
  if ((uVar1 & 1) != 0) {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(in_stack_00000008 + 0x20) == 1) {
      (**(code **)(*unaff_x19 + 0x1a8))();
    }
  }
  return;
}


