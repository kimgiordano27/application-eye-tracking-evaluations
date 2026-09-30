/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 060788dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__Invoke(void)

{
  undefined4 *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x6b4) = 1;
  if (unaff_x19 != 0) {
    puVar1 = *(undefined4 **)(*(long *)PTR_DAT_079f4db8 + 0xb8);
    FUN_07251e8c(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


