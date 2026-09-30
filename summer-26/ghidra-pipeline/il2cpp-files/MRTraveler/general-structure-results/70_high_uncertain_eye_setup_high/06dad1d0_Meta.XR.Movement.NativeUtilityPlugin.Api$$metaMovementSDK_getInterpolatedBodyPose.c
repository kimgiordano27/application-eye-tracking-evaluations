/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin.Api$$metaMovementSDK_getInterpolatedBodyPose
ENTRY_POINT: 06dad1d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dad300) */

void Meta_XR_Movement_NativeUtilityPlugin_Api__metaMovementSDK_getInterpolatedBodyPose(int param_1)

{
  long lVar1;
  long in_x9;
  undefined8 unaff_x20;
  undefined8 in_stack_00000028;
  long in_stack_00000048;
  
  lVar1 = *(long *)(in_x9 + 0x50) + (long)param_1;
  *(long *)(in_x9 + 0x50) = lVar1;
  if (*(long *)(in_x9 + 0x80) != 0) {
    FUN_06dadf04(*(long *)(in_x9 + 0x80),lVar1,0);
    *(undefined8 *)(in_stack_00000048 + 0x10) = unaff_x20;
    thunk_FUN_03d233cc();
    FUN_03bbe424(&stack0x00000008);
    if (in_stack_00000028._4_1_ != '\0') {
      thunk_FUN_03cdf404();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


