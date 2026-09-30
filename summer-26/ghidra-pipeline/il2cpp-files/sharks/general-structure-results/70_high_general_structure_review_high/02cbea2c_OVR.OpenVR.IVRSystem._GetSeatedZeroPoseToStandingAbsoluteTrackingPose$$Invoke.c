/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 02cbea2c
PROGRAM: sharks-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Invoke
               (ulong param_1,undefined4 param_2)

{
  long lVar1;
  long in_x9;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  
  while( true ) {
    unaff_x23 = unaff_x23 + 8;
    *(undefined4 *)(in_x9 + 0x24) = param_2;
    if ((long)(int)param_1 <= (long)unaff_x24) break;
    lVar1 = FUN_033dac88();
    if (lVar1 == 0) goto LAB_02cbea68;
    if ((*(uint *)(lVar1 + 0x18) <= unaff_x24) || (*(uint *)(unaff_x22 + 0x18) <= unaff_x24)) {
LAB_02cbea64:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    *(undefined4 *)(unaff_x22 + unaff_x23 + 0x20) = *(undefined4 *)(lVar1 + unaff_x23 + 0x20);
    lVar1 = FUN_033dac88();
    if (lVar1 == 0) goto LAB_02cbea68;
    if ((*(uint *)(lVar1 + 0x18) <= unaff_x24) ||
       (param_1 = (ulong)*(uint *)(unaff_x22 + 0x18), param_1 <= unaff_x24)) goto LAB_02cbea64;
    param_2 = *(undefined4 *)(lVar1 + unaff_x23 + 0x24);
    unaff_x24 = unaff_x24 + 1;
    in_x9 = unaff_x22 + unaff_x23;
  }
  if (unaff_x19 != 0) {
    FUN_033dad08();
    return;
  }
LAB_02cbea68:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


