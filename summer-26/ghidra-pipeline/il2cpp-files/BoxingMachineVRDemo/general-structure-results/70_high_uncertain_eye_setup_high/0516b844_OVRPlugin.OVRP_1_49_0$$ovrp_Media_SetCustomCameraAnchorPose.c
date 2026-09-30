/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 0516b844
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(void)

{
  byte bVar1;
  long *unaff_x20;
  long *plVar2;
  undefined8 in_stack_00000008;
  
  bVar1 = *(byte *)(*(long *)PTR_DAT_067827a8 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_067827a8))
  {
    plVar2 = (long *)unaff_x20[4];
    in_stack_00000008 = 0;
    FUN_03dce070(&stack0x00000008,(int)unaff_x20[3] + -4,*(undefined8 *)PTR_DAT_067675e0);
    if (plVar2 != (long *)0x0) {
      if (*plVar2 != *(long *)(PTR_DAT_0675e258 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar2);
      }
    }
    FUN_0516c1e8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60e88();
}


