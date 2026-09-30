/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 079ea2c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__Invoke(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xf89) = 1;
  lVar2 = *(long *)(unaff_x19 + 0x18);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x1c);
    *(undefined4 *)(unaff_x19 + 0x30) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = iVar1 + 1;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


