/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 079eab64
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


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__EndInvoke
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar1;
  
  if ((*(long *)(unaff_x20 + 0x28) != 0) && (unaff_x21 != 0)) {
    uVar1 = FUN_0627b650();
    *unaff_x19 = uVar1;
    unaff_x19[1] = param_2;
    unaff_x19[2] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


