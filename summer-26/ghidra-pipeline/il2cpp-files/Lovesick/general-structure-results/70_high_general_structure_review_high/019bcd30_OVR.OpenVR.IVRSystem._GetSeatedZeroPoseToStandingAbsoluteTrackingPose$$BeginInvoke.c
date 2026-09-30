/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 019bcd30
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


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__BeginInvoke
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 unaff_x21;
  
  lVar2 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(param_1 + 0x40));
  puVar1 = StringLiteral_302;
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,0);
  }
  if (5 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x48) = unaff_x21;
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


