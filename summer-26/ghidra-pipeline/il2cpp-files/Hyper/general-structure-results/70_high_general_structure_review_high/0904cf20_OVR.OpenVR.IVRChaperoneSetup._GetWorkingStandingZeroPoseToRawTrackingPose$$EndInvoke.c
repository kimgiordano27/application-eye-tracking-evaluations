/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 0904cf20
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  
  if (param_1 != 0) {
    uVar1 = FUN_0870d5a0();
    if ((uVar1 & 1) == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar3 = thunk_FUN_04983f60();
      uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac77890);
      FUN_08cc420c(uVar3,uVar4,0);
      uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac77898);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar3,uVar4);
    }
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar2 = *unaff_x20;
    }
    if ((*(long *)(*(long *)(lVar2 + 0xb8) + 8) != 0) && (FUN_0870d32c(), unaff_x19 != 0)) {
      FUN_0a17da7c();
      if (*(long *)(*(long *)(*unaff_x20 + 0xb8) + 8) != 0) {
        FUN_0870e8c8();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


