/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 05b573ac
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b571f8) */
/* WARNING: Removing unreachable block (ram,0x05b571c4) */
/* WARNING: Removing unreachable block (ram,0x05b5741c) */

undefined4 Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose(void)

{
  int iVar1;
  long *plVar2;
  long unaff_x19;
  int unaff_w21;
  long lVar3;
  undefined8 in_stack_00000038;
  
  if (unaff_w21 != 1) {
    if (in_stack_00000038._4_1_ != '\0') {
      iVar1 = *(int *)(unaff_x19 + 0x18);
      thunk_FUN_02fc2c1c();
      thunk_FUN_02fc2c1c();
      *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
      FUN_0301ce48(*(undefined8 *)(unaff_x19 + 0x20));
    }
    FUN_05b55128(&stack0x00000020);
                    /* WARNING: Subroutine does not return */
    FUN_030b6e08();
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar3 = *plVar2;
  __cxa_end_catch();
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_02fc2c1c();
    thunk_FUN_02fc2c1c();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_0301ce48(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_05b55128(&stack0x00000020);
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fc8594(lVar3);
  }
  return 0;
}


