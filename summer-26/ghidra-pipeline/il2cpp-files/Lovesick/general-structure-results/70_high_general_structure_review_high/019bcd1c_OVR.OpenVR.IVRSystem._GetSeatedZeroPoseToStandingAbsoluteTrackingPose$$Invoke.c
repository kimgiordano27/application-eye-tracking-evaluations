/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 019bcd1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Invoke(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = **(long **)(param_1 + 0xb8);
  if ((lVar4 != 0) &&
     (lVar2 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,0);
  }
  puVar1 = StringLiteral_302;
  if (5 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[9] = lVar4;
    uVar3 = FUN_01600844();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_0266185c(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


