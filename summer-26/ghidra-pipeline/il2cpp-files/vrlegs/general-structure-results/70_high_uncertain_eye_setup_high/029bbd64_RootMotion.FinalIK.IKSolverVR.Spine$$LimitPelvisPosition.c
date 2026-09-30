/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.Spine$$LimitPelvisPosition
ENTRY_POINT: 029bbd64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bbe30) */

int RootMotion_FinalIK_IKSolverVR_Spine__LimitPelvisPosition(long param_1)

{
  byte bVar1;
  long in_x9;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(param_1);
    in_x9 = **(long **)(*unaff_x23 + 0xb8);
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  FUN_01b5f01c(in_x9);
  if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  bVar1 = *(byte *)(**(long **)(*unaff_x23 + 0xb8) + 0x18);
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return bVar1 - 1;
}


