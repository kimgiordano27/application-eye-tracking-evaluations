/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 05bb87d4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x21;
  
  lVar1 = FUN_06be6b04();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar2 = FUN_06bf4764(lVar1,0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x21);
  }
  uVar3 = FUN_06bece64(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_06be6b40();
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x21);
    }
    FUN_06bedc9c(uVar2,0);
    return;
  }
  return;
}


