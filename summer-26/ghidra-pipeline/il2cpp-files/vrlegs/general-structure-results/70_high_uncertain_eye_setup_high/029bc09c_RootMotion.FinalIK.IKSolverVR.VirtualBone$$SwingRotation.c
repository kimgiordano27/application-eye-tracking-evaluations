/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.VirtualBone$$SwingRotation
ENTRY_POINT: 029bc09c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bc108) */

undefined8 RootMotion_FinalIK_IKSolverVR_VirtualBone__SwingRotation(void)

{
  undefined4 unaff_w20;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  if (**(long **)(*unaff_x21 + 0xb8) != 0) {
    FUN_02215b6c(**(long **)(*unaff_x21 + 0xb8),unaff_w20,0,*(undefined8 *)PTR_DAT_03d08758);
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


