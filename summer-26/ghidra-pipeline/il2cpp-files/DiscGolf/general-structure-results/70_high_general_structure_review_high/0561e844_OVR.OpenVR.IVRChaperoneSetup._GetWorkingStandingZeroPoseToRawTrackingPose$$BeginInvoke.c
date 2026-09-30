/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 0561e844
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__BeginInvoke(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x23;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x23 + 0xa47) = 1;
  lVar5 = *(long *)(unaff_x19 + 0x10);
  uVar2 = FUN_0536d554();
  if (lVar5 != 0) {
    lVar3 = *(long *)(lVar5 + 0x10);
    lVar4 = *(long *)PTR_DAT_069fcea0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
        LeanTween__value();
        return;
      }
      FUN_040101ec(lVar5,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


