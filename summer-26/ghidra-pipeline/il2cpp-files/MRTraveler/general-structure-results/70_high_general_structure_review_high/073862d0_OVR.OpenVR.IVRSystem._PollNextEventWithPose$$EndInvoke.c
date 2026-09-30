/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 073862d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  lVar1 = thunk_FUN_03cf5138();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar2,0);
  }
  if (4 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x40) = unaff_x21;
    thunk_FUN_03d233cc();
    *unaff_x19 = unaff_x20;
    thunk_FUN_03d233cc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


