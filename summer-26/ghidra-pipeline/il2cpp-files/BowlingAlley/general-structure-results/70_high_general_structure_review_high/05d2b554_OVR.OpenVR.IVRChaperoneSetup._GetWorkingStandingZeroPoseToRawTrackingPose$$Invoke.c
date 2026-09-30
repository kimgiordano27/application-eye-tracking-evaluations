/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 05d2b554
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__Invoke
               (long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  code *in_x9;
  long unaff_x19;
  
  (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x2b0));
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar2 = FUN_06be6b40(*(long *)(unaff_x19 + 0x20),0);
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (iVar1 = FUN_06bf612c(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
      FUN_06be9a98(lVar2,0 < iVar1,0);
      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
         (lVar2 = FUN_06be6b40(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
        FUN_06be9a98(lVar2,*(char *)(unaff_x19 + 0x88) == '\0',0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


