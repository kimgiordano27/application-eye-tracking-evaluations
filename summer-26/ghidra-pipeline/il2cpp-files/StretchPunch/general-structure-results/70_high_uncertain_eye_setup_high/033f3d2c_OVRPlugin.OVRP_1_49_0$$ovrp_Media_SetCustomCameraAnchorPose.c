/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 033f3d2c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(ulong param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9368);
    *(undefined1 *)(unaff_x20 + 0xb97) = 1;
  }
  puVar1 = StringLiteral_9368;
  param_2 = (long *)*param_2;
  if (param_2 == (long *)0x0) {
    lVar2 = *(long *)StringLiteral_9368;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar2 = *(long *)puVar1;
    }
    param_2 = *(long **)(*(long *)(lVar2 + 0xb8) + 8);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x033f3d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
  return;
}


