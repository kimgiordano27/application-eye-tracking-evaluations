/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 0738cf18
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x19 != 0) {
    *(undefined4 *)(unaff_x19 + 0x14) = 3;
    puVar1 = PTR_DAT_08eb47d8;
    *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (*(long *)(lVar2 + 0x30) != 0) {
        *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(*(long *)(lVar2 + 0x30) + 0x10);
        thunk_FUN_03d233cc();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


